#include <iostream>
#include <fstream>
#include <string>
#include <limits>
#include <cstdlib>
using namespace std;

const string FILE_NAME = "student_records.txt";

struct Student {
    int studentID;
    string fullName;
    string birthday;
    string address;
    char gender;
    string degreeProgram;
    int yearLevel;
};

class StudentInformationSystem {
private:
public:
    void displayMainMenu() {
        cout << "================================================" << endl;
        cout << "Welcome to Jollibee Student Information System" << endl;
        cout << "================================================" << endl;
        cout << "\nWhat do you want to do?" << endl;
        cout << "\n1. Add New Record" << endl;
        cout << "2. Search Record" << endl;
        cout << "3. Display All Records" << endl;
        cout << "4. Display Specific Record" << endl;
        cout << "5. Delete Record" << endl;
        cout << "6. Exit" << endl;
        cout << "Please type your selection: ";
    }

    void clearScreen() {
        system("cls");
    }

    void addRecord() {
        ofstream outFile;
        outFile.open(FILE_NAME.c_str(), ios::app);

        if (!outFile.is_open()) {
            cerr << "Error opening file." << endl;
            return;
        }

        Student* newStudent = new Student;

        cout << "\nEnter Student ID: ";
        cin >> newStudent->studentID;
        cin.ignore();
        cout << "Enter Full Name: ";
        getline(cin, newStudent->fullName);
        cout << "Enter Birthday (DD/MM/YYYY): ";
        getline(cin, newStudent->birthday);
        cout << "Enter Address: ";
        getline(cin, newStudent->address);
        cout << "Enter Gender (M/F): ";
        cin >> newStudent->gender;
        cout << "Enter Degree Program: ";
        cin.ignore();
        getline(cin, newStudent->degreeProgram);
        cout << "Enter Year Level: ";
        cin >> newStudent->yearLevel;

        outFile << newStudent->studentID << ", " << newStudent->fullName << ", " << newStudent->birthday << ", " << newStudent->address << ", " 
		<< newStudent->gender << ", " << newStudent->degreeProgram << ", " << newStudent->yearLevel << endl;
		
        outFile.close();
		
        cin.ignore(numeric_limits<streamsize>::max(), '\n');

        cout << "\nRecord added successfully!" << endl;

        delete newStudent;
    }

    void searchRecord() {
        ifstream inFile(FILE_NAME.c_str());
        if (!inFile.is_open()) {
            cerr << "\nError opening file." << endl;
            return;
        }

        int searchID;
        cout << "\nEnter Student ID to search: ";
        cin >> searchID;

        Student tempStudent;
        bool found = false;
        while (inFile >> tempStudent.studentID) {
            inFile.ignore();
            getline(inFile, tempStudent.fullName, ',');
            getline(inFile, tempStudent.birthday, ',');
            getline(inFile, tempStudent.address, ',');
            inFile >> tempStudent.gender;
            inFile.ignore();
            getline(inFile, tempStudent.degreeProgram, ',');
            inFile >> tempStudent.yearLevel;

            if (tempStudent.studentID == searchID) {
                cout << "\nStudent found:" << endl;
                cout << "Student ID: " << tempStudent.studentID << endl;
                cout << "Full Name: " << tempStudent.fullName << endl;
                cout << "Birthday: " << tempStudent.birthday << endl;
                cout << "Address: " << tempStudent.address << endl;
                cout << "Gender: " << tempStudent.gender << endl;
                cout << "Degree Program: " << tempStudent.degreeProgram << endl;
                cout << "Year Level: " << tempStudent.yearLevel << endl;
                found = true;
                break;
            }
        }
        if (!found) {
            cout << "\nStudent not found." << endl;
        }

        inFile.close();
    }

    void displayAllRecords() {
        ifstream inFile(FILE_NAME.c_str());
        if (!inFile.is_open()) {
            cerr << "\nError opening file." << endl;
            return;
        }

        Student tempStudent;
        bool recordsFound = false;
        while (inFile >> tempStudent.studentID) {
            inFile.ignore();
            getline(inFile, tempStudent.fullName, ',');
            getline(inFile, tempStudent.birthday, ',');
            getline(inFile, tempStudent.address, ',');
            inFile >> tempStudent.gender;
            inFile.ignore();
            getline(inFile, tempStudent.degreeProgram, ',');
            inFile >> tempStudent.yearLevel;

            cout << "\nStudent ID: " << tempStudent.studentID << endl;
            cout << "Full Name: " << tempStudent.fullName << endl;
            cout << "Birthday: " << tempStudent.birthday << endl;
            cout << "Address: " << tempStudent.address << endl;
            cout << "Gender: " << tempStudent.gender << endl;
            cout << "Degree Program: " << tempStudent.degreeProgram << endl;
            cout << "Year Level: " << tempStudent.yearLevel << endl;
            cout << endl;

            recordsFound = true;
        }

        if (!recordsFound) {
            cout << "\nNo records added." << endl;
        }

        inFile.close();
    }

    void deleteRecord() {
        int deleteID;
        cout << "\nEnter Student ID to delete: ";
        cin >> deleteID;

        ifstream inFile(FILE_NAME.c_str());
        if (!inFile.is_open()) {
            cerr << "\nError opening file." << endl;
            return;
        }

        ofstream tempFile("temp.txt");
        if (!tempFile.is_open()) {
            cerr << "\nError creating temporary file." << endl;
            inFile.close();
            return;
        }

        Student tempStudent;
        bool deleted = false;
        while (inFile >> tempStudent.studentID) {
            inFile.ignore();
            getline(inFile, tempStudent.fullName, ',');
            getline(inFile, tempStudent.birthday, ',');
            getline(inFile, tempStudent.address, ',');
            inFile >> tempStudent.gender;
            inFile.ignore();
            getline(inFile, tempStudent.degreeProgram, ',');
            inFile >> tempStudent.yearLevel;

            if (tempStudent.studentID != deleteID) {
                tempFile << tempStudent.studentID << "," << tempStudent.fullName << "," << tempStudent.birthday << "," << tempStudent.address << "," << tempStudent.gender << "," << tempStudent.degreeProgram << "," << tempStudent.yearLevel << endl;
            } else {
                cout << "\nRecord with Student ID " << deleteID << " deleted successfully!" << endl;
                deleted = true;
            }
        }
        if (!deleted) {
            cout << "\nRecord with Student ID " << deleteID << " not found." << endl;
        }

        inFile.close();
        tempFile.close();

        remove(FILE_NAME.c_str());
        rename("temp.txt", FILE_NAME.c_str());
    }

    void displaySpecificRecord() {
        ifstream inFile(FILE_NAME.c_str());
        if (!inFile.is_open()) {
            cerr << "\nError opening file." << endl;
            return;
        }

        int searchID;
        cout << "\nEnter Student ID to display specific record: ";
        cin >> searchID;

        Student tempStudent;
        bool found = false;
        while (inFile >> tempStudent.studentID) {
            inFile.ignore();
            getline(inFile, tempStudent.fullName, ',');
            getline(inFile, tempStudent.birthday, ',');
            getline(inFile, tempStudent.address, ',');
            inFile >> tempStudent.gender;
            inFile.ignore();
            getline(inFile, tempStudent.degreeProgram, ',');
            inFile >> tempStudent.yearLevel;

            if (tempStudent.studentID == searchID) {
                cout << "\nStudent found:" << endl;
                cout << "Student ID: " << tempStudent.studentID << endl;
                cout << "Full Name: " << tempStudent.fullName << endl;
                cout << "Birthday: " << tempStudent.birthday << endl;
                cout << "Address: " << tempStudent.address << endl;
                cout << "Gender: " << tempStudent.gender << endl;
                cout << "Degree Program: " << tempStudent.degreeProgram << endl;
                cout << "Year Level: " << tempStudent.yearLevel << endl;
                found = true;
                break;
            }
        }
        if (!found) {
            cout << "\nStudent not found." << endl;
        }

        inFile.close();
    }

    void run() {
        int choice;
        do {
            clearScreen();
            displayMainMenu();
            cin >> choice;
            cin.ignore();
            switch (choice) {
                case 1:
                    clearScreen();
                    addRecord();
                    break;
                case 2:
                    clearScreen();
                    searchRecord();
                    break;
                case 3:
                    clearScreen();
                    displayAllRecords();
                    break;
                case 4:
                    clearScreen();
                    displaySpecificRecord();
                    break;
                case 5:
                    clearScreen();
                    deleteRecord();
                    break;
                case 6:
                    clearScreen();
                    cout << "\nThank you for using Jollibee Student Information System!" << endl;
                    cout << endl;
                    cout << "Group: Jollibee" << endl;
                    cout << "Members: Iana Affleje, Karl Jarilla, Cedric Narag, Sofia Reyes" << endl;
                    break;
                default:
                    clearScreen();
                    cout << "\nInvalid input. Please enter a valid selection." << endl;
            }
            system("pause");
        } while (choice != 6);
    }
};

int main() {
    StudentInformationSystem sis;
    sis.run();
    return 0;
}

