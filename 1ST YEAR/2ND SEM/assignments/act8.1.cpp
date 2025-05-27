#include <iostream>
#include <string>

using namespace std;

class Student
{
private:
    string admissionNumber;
    string name;
    int a;
    int b;
    int c;

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
        this->a = a;
        this->b = b;
        this->c = c;
    }
    double calculateAverage()
    {
        return (a + b + c) / 3.0;
    }

    void displayInfo()
    {
       cout << "Admission Number: " << admissionNumber << endl;
       cout << "Student Name: " << name <<endl;
       cout << "English: " << a << endl;
       cout << "Math" << b << endl;
       cout << "Science: " << c << endl;
       cout << "Average: " << calculateAverage() << endl;
   
    }
};

int main()
{
    Student student;
    string admissionNumber, name;
    int a,b,c;

    cout << "Enter admission number: ";
    getline(cin, admissionNumber);

    cout << "Enter student name: ";
    getline(cin, name);
    student.setName(name);

    cout << "Enter grades in English, Math, Science:\n";
    cin >> a >> b >> c;
    student.setGrades(a, b, c);

    cout << endl;
    student.displayInfo();

    return 0;
}