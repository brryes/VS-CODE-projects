#include <iostream>
#include <cstring>
#include <cctype>
using namespace std;

int main(){
    const int MAX_SIZE = 100;
    char strInp[MAX_SIZE];

    cout << "Enter a string: ";
    cin.getline(strInp, MAX_SIZE);

    for (int  i = 0; i < strlen(strInp); i++)
    {
        if (i == 0 || isspace(strInp[i - 1]))
        {
            strInp[i] = toupper(strInp[i]);
        }
        else{
            strInp[i] = tolower(strInp[i]);
        }
        
    }
    cout << "Output: " << strInp << endl;
    return 0;
    
}