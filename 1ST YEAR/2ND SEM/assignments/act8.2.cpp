#include <iostream>
#include <string>

using namespace std;

class Student
{
private:
    string admissionNumber;
    string name;
    int grades[3];

public:
    void setAdmissionNumber(string admissionNumber)
    {
        this->admissionNumber = admissionNumber;
    }

    void setName(string name)
    {
        this->name = name;
    }

    void setGrades(int a, int b, int c)
    {
        grades[0] = a;
        grades[1] = b;
        grades[2] = c;
    }
    double calculateAverage()
    {
        double total = 0.0;
        for (int i = 0; i < 3; ++i)
        {
            total += grades[i];
        }
        return total / 3.0;
    }

    void displayInfo()
    {
       cout << "Admission Number: " << admissionNumber << endl;
       cout << "Student Name: " << name <<endl;
       cout << "English: " << grades[0] << endl;
       cout << "Math" << grades[1] << endl;
       cout << "Science: " << grades[2] << endl;
       cout << "Average: " << calculateAverage() << endl;
   
    }
};

int main()
{
    const int MAX_STUDENTS = 5;
    Student students[MAX_STUDENTS];


    for (int i = 0; i < MAX_STUDENTS; ++i)
    {
        Student student;
        string admissionNumber, name;
        int a, b, c;

        cout << "Enter admission number " << i + 1 << ": ";
        getline(cin, admissionNumber);
        student.setAdmissionNumber(admissionNumber);

        cout << "Enter student name "  << i + 1 << ": ";
        getline(cin, name);
        student.setName(name);

        cout << "Enter grades in English, Math, Science "  << i + 1 << ":\n";
        cin >> a >> b >> c;
        student.setGrades(a, b, c);
        cin.ignore();

        students[i] = student;
    }

    cout << "\nDisplaying student information:\n";
    for (int i = 0; i < MAX_STUDENTS; ++i)
    {
        cout << "Student "  << i + 1 << ":\n ";
        students[i].displayInfo();
        cout << endl;
    }
    
        return 0;

    }
    
