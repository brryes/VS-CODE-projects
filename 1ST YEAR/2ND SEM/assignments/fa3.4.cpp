#include <iostream>
#include <cstring>
using namespace std;

bool isPalindrome(const char *str){
    int length = strlen(str);
    for (int i = 0; i < length; i++)
    {
        if (str[i] != str[length - i - 1])
        {
            return false;
        }
        
    }
   return true; 
}

int main(){
    const int MAX_SIZE = 100;
    char word[MAX_SIZE];
    cout << "-------------------------------\n\tPALINDOROME\n-------------------------------\n";

    cout << "Enter a word: ";
    cin >> word;

    if (isPalindrome(word))
    {
        cout << word << " is a palindrome.\n";
    }
    else{
        cout << word << " is not a palindrome\n";
    }
    return 0;
    
}