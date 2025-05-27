#include <iostream> 
#include <string> 
using namespace std;

string changeLetters(string str) { 
    for (int i = 0; i < str.length(); i++) {
    char c = str[i];

if (c >= 'a' && c < 'z') {
    c = (c == 'z') ? 'a' : c + 1; 
    str[i] = c;
}
if (c >= 'A' && c < 'Z') {
    c = (c == 'Z') ? 'A' : c + 1;  
    str[i] = c;
} 
}
    return str; 
}

int main() { 
    char choice;
    string word;

do
{ 
    cout << "Enter a word: "; 
    cin >> word;
    cout << "Original string: " << word << endl; 
    string newString = changeLetters(word);
    cout << "New string: " << newString << endl; 
    cout << "Do you want to compare more strings? (y/n): ";
    cin >> choice;


} while (choice == 'y' || choice == 'Y');

return 0;
}