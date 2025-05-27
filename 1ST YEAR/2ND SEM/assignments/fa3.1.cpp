#include<iostream>
#include<cstring>

using namespace std;

int main(){
    const int MAX_SIZE = 100;
    char str1[MAX_SIZE];
    char str2[MAX_SIZE];
    cout << "-------------------------------\n\tSTRING COMPARE\n-------------------------------\n";
    char choice;
    do
    {
        cout << "Enter string 1: ";
        cin >> str1;

        cout << "Enter string 2: ";
        cin >> str2;

        if (strcmp(str1, str2) == 0)
            cout << "Both strings are equal.\n";
        else
            cout << "The strings are not equal.\n";
        
        cout << "Do you want to compare more strings? (y/n): ";
        cin >> choice;
        
    } while (choice == 'y' || choice == 'Y');

    cout << "Program Exit.\n";

    return 0;
    
}