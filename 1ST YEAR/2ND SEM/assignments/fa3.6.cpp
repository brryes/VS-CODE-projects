#include <iostream>
#include <sstream>
#include <vector>

using namespace std;

int main(){
    string strInp;
    cout << "-------------------------------\n\tSTRING TO WORDS\n-------------------------------\n";
    cout << "Enter a string: ";
    getline(cin, strInp);

    istringstream iss(strInp);
    vector<string> words;

    while (iss >> strInp) 
    {
       words.push_back(strInp);
    }
    cout << "Output: \n";
    for (int i = words.size() - 1; i >= 0; i--)
    {
        cout << words[i] << endl;
    }
    return 0;
}