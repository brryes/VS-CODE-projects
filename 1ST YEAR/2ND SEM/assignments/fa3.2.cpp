#include <iostream>
#include <cstring>

using namespace std;

int main(){
    const int MAX_SIZE = 100;
    char str1[MAX_SIZE];
    char str2[MAX_SIZE];
    cout << "-------------------------------\n\tSTRING COPY\n-------------------------------\n";

    cout << "Enter 1st word: ";
    cin.getline(str1, MAX_SIZE);

    cout << "Enter 2nd word: ";
    cin.getline(str2, MAX_SIZE);

    strcpy(str1, str2);
    cout << "New string value for string 1: " << str1 << endl;

    return 0;
}