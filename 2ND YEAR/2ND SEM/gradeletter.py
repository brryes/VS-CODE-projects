# gradeletter.py

# Dictionary to map letter grades to grade points
grade_points = {
    "A+": 4.0, "A": 4.0, "A-": 3.7,
    "B+": 3.3, "B": 3.0, "B-": 2.7,
    "C+": 2.3, "C": 2.0, "C-": 1.7,
    "D+": 1.3, "D": 1.0, "F": 0.0
}

# Prompt the user to enter a grade
grade = input("Enter grade: ").strip()

# Check if the entered grade is valid
if grade in grade_points:
    print(f"For this grade, you will receive a grade points of {grade_points[grade]}")
else:
    print("Invalid grade entered.")