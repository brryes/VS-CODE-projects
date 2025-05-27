#include <iostream>

using namespace std;

int string_length(const char* str) {
    const char* ptr = str;
    while (*ptr != '\0') {
        ptr++;
    }
    return ptr - str;
}

int string_compare(const char* s1, const char* s2) {
    while (*s1 && *s2 && *s1 == *s2) {
        s1++;
        s2++;
    }
    return *s1 - *s2;
}

void string_concatenate(char* s1, const char* s2) {
    while (*s1) {
        s1++;
    }
    while (*s2) {
        *s1 = *s2;
        s1++;
        s2++;
    }
    *s1 = '\0';
}

int main() {
    char choice;
    do {
        cout << "What do you want to do?" << endl;
        cout << "1. Find the string length" << endl;
        cout << "2. Compare two strings" << endl;
        cout << "3. Concatenate two strings" << endl;
        cout << "4. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case '1': {
                char str[100];
                cout << "Enter a string: ";
                cin >> str;
                cout << "Length of the string is: " << string_length(str) << endl;
                break;
            }
            case '2': {
                char str1[100], str2[100];
                cout << "Enter the first string: ";
                cin >> str1;
                cout << "Enter the second string: ";
                cin >> str2;
                int result = string_compare(str1, str2);
                if (result == 0) {
                    cout << "Both strings are equal." << endl;
                } else if (result < 0) {
                    cout << "The first string is smaller." << endl;
                } else {
                    cout << "The second string is smaller." << endl;
                }
                break;
            }
            case '3': {
                char str1[100], str2[100];
                cout << "Enter the first string: ";
                cin >> str1;
                cout << "Enter the second string: ";
                cin >> str2;
                string_concatenate(str1, str2);
                cout << "Concatenated string: " << str1 << endl;
                break;
            }
            case '4': {
                cout << "Exiting program." << endl;
                return 0;
            }
            default: {
                cout << "Invalid choice. Please enter a valid option." << endl;
                break;
            }
        }

        cout << "Try again? [Y/N] ";
        cin >> choice;
    } while (choice == 'y' || choice == 'Y');

    return 0;
}
