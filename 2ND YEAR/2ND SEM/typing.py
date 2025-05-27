import os
import sys
import json
from collections import deque

# File paths
PROJECTS_FILE = "projects.txt"
COMPLETED_FILE = "completed_projects.txt"
SCHEDULE_FILE = "schedule.json"

class Project:
    def __init__(self, id_num, title, size, priority):
        self.id_num = int(id_num)
        self.title = title
        self.size = int(size)
        self.priority = int(priority)

    def to_dict(self):
        return {
            "id_num": self.id_num,
            "title": self.title,
            "size": self.size,
            "priority": self.priority
        }

    @staticmethod
    def from_dict(d):
        return Project(d["id_num"], d["title"], d["size"], d["priority"])

    def __str__(self):
        return f"ID: {self.id_num}, Title: {self.title}, Size: {self.size}, Priority: {self.priority}"

def load_projects():
    projects = []
    if os.path.exists(PROJECTS_FILE):
        with open(PROJECTS_FILE, "r") as f:
            for line in f:
                try:
                    d = json.loads(line.strip())
                    projects.append(Project.from_dict(d))
                except Exception:
                    continue
    return projects

def save_projects(projects):
    with open(PROJECTS_FILE, "w") as f:
        for p in projects:
            f.write(json.dumps(p.to_dict()) + "\n")

def load_completed():
    completed = []
    if os.path.exists(COMPLETED_FILE):
        with open(COMPLETED_FILE, "r") as f:
            for line in f:
                try:
                    d = json.loads(line.strip())
                    completed.append(Project.from_dict(d))
                except Exception:
                    continue
    return completed

def save_completed(completed):
    with open(COMPLETED_FILE, "w") as f:
        for p in completed:
            f.write(json.dumps(p.to_dict()) + "\n")

def input_project_details():
    try:
        id_num = int(input("Enter Project ID Number: "))
        title = input("Enter Project Title: ")
        size = int(input("Enter Project Size (pages): "))
        priority = int(input("Enter Project Priority (lower number = higher priority): "))
        project = Project(id_num, title, size, priority)
        projects = load_projects()
        # Check for duplicate ID
        if any(p.id_num == id_num for p in projects):
            print("Project ID already exists.")
            return
        projects.append(project)
        save_projects(projects)
        print("Project added successfully.")
    except ValueError:
        print("Invalid input. Please enter correct data types.")

def view_projects():
    print("\n1. View One Project\n2. View Completed Projects\n3. View All Projects")
    choice = input("Select option: ")
    if choice == "1":
        try:
            id_num = int(input("Enter Project ID to search: "))
            projects = load_projects()
            found = next((p for p in projects if p.id_num == id_num), None)
            if found:
                print(found)
            else:
                print("Project not found.")
        except ValueError:
            print("Invalid ID.")
    elif choice == "2":
        completed = load_completed()
        if not completed:
            print("No completed projects.")
        else:
            for p in completed:
                print(p)
    elif choice == "3":
        projects = load_projects()
        if not projects:
            print("No projects found.")
        else:
            for p in projects:
                print(p)
    else:
        print("Invalid option.")

def create_schedule():
    projects = load_projects()
    if not projects:
        print("No projects to schedule.")
        return
    # Sort by priority, then by size
    projects.sort(key=lambda p: (p.priority, p.size))
    queue = deque(projects)
    # Save schedule to file
    with open(SCHEDULE_FILE, "w") as f:
        json.dump([p.to_dict() for p in queue], f)
    print("Schedule created:")
    for p in queue:
        print(p)

def view_schedule():
    if not os.path.exists(SCHEDULE_FILE):
        print("Schedule not created yet. Please create the schedule first.")
        return
    with open(SCHEDULE_FILE, "r") as f:
        data = json.load(f)
        if not data:
            print("Schedule is empty.")
            return
        print("Current Schedule:")
        for d in data:
            p = Project.from_dict(d)
            print(p)

def get_project():
    if not os.path.exists(SCHEDULE_FILE):
        print("Schedule not created yet. Please create the schedule first.")
        return
    with open(SCHEDULE_FILE, "r") as f:
        data = json.load(f)
    if not data:
        print("No projects in the schedule.")
        return
    # Remove the topmost project
    top_project = Project.from_dict(data.pop(0))
    print(f"Project removed from queue: {top_project}")
    # Add to completed
    completed = load_completed()
    completed.append(top_project)
    save_completed(completed)
    # Update schedule file
    with open(SCHEDULE_FILE, "w") as f:
        json.dump(data, f)
    # Show updated queue
    if data:
        print("Updated Schedule:")
        for d in data:
            print(Project.from_dict(d))
    else:
        print("No more projects in the schedule.")

def main_menu():
    while True:
        print("\n--- Copy Typing Project Scheduler ---")
        print("1. Input Project Details")
        print("2. View Projects")
        print("3. Schedule Projects")
        print("4. View Schedule")
        print("5. Get a Project")
        print("6. Exit")
        choice = input("Select an option: ")
        if choice == "1":
            input_project_details()
        elif choice == "2":
            view_projects()
        elif choice == "3":
            create_schedule()
        elif choice == "4":
            view_schedule()
        elif choice == "5":
            get_project()
        elif choice == "6":
            print("Exiting program.")
            sys.exit()
        else:
            print("Invalid option. Please try again.")

if __name__ == "__main__":
    main_menu()