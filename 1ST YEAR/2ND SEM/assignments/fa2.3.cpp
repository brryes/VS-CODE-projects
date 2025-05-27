#include<iostream>
#include<string>

using namespace std;
int main(){
    string word;
    int countvowel[5] = {};
    int whitespaces = 0;

    cout<<"Enter a word: ";
    getline(cin,word);

    for (int i = 0; i < word.length(); i++){
        char ch = word[i];
    
        if (ch >= 'a' && ch <= 'z') {
            cout << "Please enter uppercase letters only." << endl;
            return 1; 
        }
    ch = toupper(ch);
    
    switch (ch)
    {
    case 'A':
        countvowel[0]++;
        break;
    case 'E':
        countvowel[1]++;
         break;
    case 'I':
        countvowel[2]++;
        break;
    case 'O':
        countvowel[3]++;
        break;
    case 'U': 
        countvowel[4]++;
        break;
    case ' ':
        whitespaces++;
        break;
    default:
        break;
    }
}

cout << "Vowels:" << endl;
    cout << "A " << countvowel[0] << endl;
    cout << "E " << countvowel[1] << endl;
    cout << "I " << countvowel[2] << endl;
    cout << "O " << countvowel[3] << endl;
    cout << "U " << countvowel[4] << endl;

    cout << "Whitespaces - " << whitespaces << endl;

    return 0;
}
