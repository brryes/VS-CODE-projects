//salamat kent

#include <bits/stdc++.h>
#include <conio.h>
using namespace std;
struct Student {
int studentID;
char firstName[100];
char lastName[100];
float GPA;
};
void addStudent(Student students[], int& numStudents) {
cout << "Enter Student's First Name: ";
cin.ignore();
cin.getline(students[numStudents].firstName, 100);
cout << "Enter Student's Last Name: ";
cin.getline(students[numStudents].lastName, 100);
cout << "Enter Student's GPA: ";
cin >> students[numStudents].GPA;
cout << "Enter Student's ID: ";
cin >> students[numStudents].studentID;
numStudents++;
getch();
}
void displayStudents(const Student students[], int numStudents) {
cout << "Student List:" << endl;
for (int i = 0; i < numStudents; ++i) {
cout << "Student ID: " << students[i].studentID << endl;
cout << "Name: " << students[i].firstName << " " << students[i].lastName <<
endl;
cout << "GPA: " << students[i].GPA << endl;
cout << "--------------------------------------" << endl;
}
getch();
}
float calculateAverageGPA(const Student students[], int numStudents) {
float totalGPA = 0.0;
for (int i = 0; i < numStudents; ++i) {
totalGPA += students[i].GPA;
}
float averageGPA = totalGPA / numStudents;
cout << "Average GPA: " << averageGPA << endl;
return averageGPA;
}
void findStudentsByLastName(const Student students[], int numStudents, const char
lastName[]) {
bool found = false;
cout << "Students with last name " << lastName << ":" << endl;
cout << "-----------------------------------------------------------------" <<
endl;
for (int i = 0; i < numStudents; ++i) {
if (strcmp(lastName, students[i].lastName) == 0) {
cout << "Student ID: " << students[i].studentID << endl;
cout << "Name: " << students[i].firstName << " " << students[i].lastName <<
endl;
cout << "GPA: " << students[i].GPA << endl;
found = true;
}
}
if (found) {
cout << "-----------------------------------------------------------------" <<
endl;
}
if (!found) {
cout << "No students found with the last name given." << endl;
}
getch();
}
int main() {
Student students[100];
int numStudents = 0;
char option;
while (true) {
int choice = 0;
do {
system("cls");
cout << "1. Add Student\n2. Display all students\n3. Calculate Average
GPA\n4. Find student by Last Name\n5. Exit" << endl;
cout << "Enter Choice(1-5): ";
cin >> choice;
} while (1 > choice || choice > 5);
switch (choice) {
case 1:
system("cls");
addStudent(students, numStudents);
break;
case 2:
system("cls");
displayStudents(students, numStudents);
break;
case 3:
system("cls");
calculateAverageGPA(students, numStudents);
getch();
break;
case 4: {
system("cls");
char lastName[50];
cout << "Enter last name to search: ";
cin >> lastName;
findStudentsByLastName(students, numStudents, lastName);
break;
}
case 5:
cout << "Exiting program." << endl;
break;
}
if (choice == 5) {
break;
}
}
return 0;