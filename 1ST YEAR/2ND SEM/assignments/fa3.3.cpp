#include <iostream>
#include <cstring>

using namespace std;

int main(){

    const int MAX_SIZE = 100;
    char str1[MAX_SIZE];
    char str2[MAX_SIZE];
    cout << "-------------------------------\n\tSTRING CONCATENATION\n-------------------------------\n";

    cout << "Enter 1st word: ";
    cin.getline(str1, MAX_SIZE);

    cout << "Enter 2nd word: ";
    cin.getline(str2, MAX_SIZE);

    strcat(str1, " ");
    strcat(str1, str2);
    cout << "new string value for str1: " << str1 << endl;
    return 0;
    
}