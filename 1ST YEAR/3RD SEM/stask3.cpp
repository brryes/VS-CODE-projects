#include <iostream>
#include <string>

using namespace std;

string reverse(const string& word) {
    if (word == "") {
        return word;
    } else {
        string subProblem = word.substr(1);  
        string subSolution = reverse(subProblem);
        string solution = subSolution + word[0];  
        return solution;
    }
}

int main() {
    string word;
    cout << "Enter a word: ";
    cin >> word;
    string reversedWord = reverse(word);
    cout << "Reversed word: " << reversedWord << endl;
    return 0;
}
