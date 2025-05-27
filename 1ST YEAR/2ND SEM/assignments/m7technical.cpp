#include <iostream> 
#include <fstream> 
#include <iomanip> 
#include <string> 

using namespace std;
class USER { 
private:
    string sName; 
    string sCourse; 
    string sEmail; 
    string sNumber;
public:

     void getUserInfo() {
        system("cls");
        
        cout << "***************************************" << endl; 
        cout << "\t USER DETAILS" << endl;
        cout << "***************************************" << endl;
        cout << "\nENTER NAME: "; getline(cin >> ws, sName); 
        cout << "ENTER COURSE: "; getline(cin >> ws, sCourse);
        cout << "ENTER e-mail: ";
        getline(cin >> ws, sEmail);
        cout << "ENTER CONTACT NUMBER: "; 
        getline(cin >> ws, sNumber);
}

void displayUserInfo() {
        cout << "\n***************************************" << endl; 
        cout << "\t USER PROFILE" << endl;
        cout << "***************************************" << endl;
        cout << "\nName: " << sName << endl;
        cout << "Course: " << sCourse << endl;
        cout << "E-mail Address: " << sEmail << endl; 
        cout << "Contact Number: " << sNumber << endl;
        system("pause"); }
friend void menuSelect(); 
friend void addReport(); 
friend void displayRecord();
};


void addReport() { 
    USER u;
    u.getUserInfo(); 
    u.displayUserInfo();
ofstream outputFile("mytext.txt", ios::app);

if (outputFile.is_open()) {
    outputFile << "\n\n***************************************" << endl; 
    outputFile << "\t USER PROFILE" << endl;
    outputFile << "***************************************" << endl;
    outputFile << "\nName: " << u.sName << endl; 
    outputFile << "Course: " << u.sCourse << endl; 
    outputFile << "E-mail Address: " << u.sEmail << endl; 
    outputFile << "Contact Number: " << u.sNumber << endl;
    outputFile.close();
    cout << "\n\n\n***************************************" << endl; 
    cout << "\n Record added successfully.\n" << endl;

    cout << "***************************************\n\n" << endl;
} else {
        cout << "\n\n\n***************************************" << endl; 
        cout << "\n Unable to open file for writing.\n" << endl;
        cout << "***************************************\n\n" << endl;

    }
    system("pause"); 
}

void displayRecord() {
    ifstream inputFile1("mytext.txt");
    
    if (inputFile1.is_open()) { string line;
    while (getline(inputFile1, line)) { 
        cout << line << endl;
    }
    inputFile1.close(); }
else {
    cout << "\n\n\n***************************************" << endl; 
    cout << "\n Failed to open the file." << endl;
    cout << "***************************************\n\n" << endl;
    }

system("pause"); 
    }

void appendRecord() { 
    string sNote;

    cout << "***************************************" << endl; 
    cout << "\t ADDITIONAL DETAILS" << endl;
    cout << "***************************************" << endl;
    cout << "\nEnter note: "; getline(cin >> ws, sNote);

    ofstream outputFile("mytext.text", ios::app);
if (outputFile.is_open()) {
    outputFile << "\n\n***************************************" << endl; 
    outputFile << "\t ADDITIONAL DETAILS" << endl;
    outputFile << "***************************************" << endl;
    outputFile << "Note: " << sNote << endl; 
    
    outputFile.close();

    cout << "\n\n\n***************************************" << endl; 
    cout << "\n Unable to open file writing.\n" << endl;
    cout << "***************************************\n\n" << endl;
}
    cin.clear(); cin.ignore();
    system("pause"); }

void menuSelect() { 
    int n;
    
    start:

        system("cls");
        cout << "***************************************" << endl; 
        cout << "\t MENU" << endl;
        cout << "***************************************" << endl;
        cout << "1. Add Record" << endl; 
        cout << "2. Display Record" << endl; 
        cout << "3. Append Record" << endl; 
        cout << "0. Exit" << endl;

        cout << "\nEnter Selection:"; 
        cin >> n;

        cin.clear(); 
        cin.ignore();

        system("cls");
        switch (n) { 
        case 1:
            addReport(); 
            break;
        case 2: 
            displayRecord();
            break; 
        case 3:
            appendRecord();
            break; 
        case 4:
            cout << "***************************************" << endl; 
            cout << "\t Exiting Program." << endl;
            cout << "***************************************" << endl; exit(0);
        default:
            cout << "***************************************" << endl; 
            cout << "Please Enter a Valid Option..." << endl; 
            cout << "***************************************" << endl; 
            system("pause");
        }
        system("cls"); 
        goto start;
}

int main() 
{
    menuSelect();
    return 0; 
}