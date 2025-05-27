#include <iostream>
#include <stack>
#include <string>
using namespace std;

int Replacements(const string& braces) {
    stack<char> st;
    int replacements = 0;

    for (char ch : braces) {
        if (ch == '{') {
            st.push(ch);
        } else if (ch == '}') {
            if (!st.empty() && st.top() == '{') {
                st.pop();
            } else {
                replacements++;
                st.push('{'); 
            }
        }
    }

    replacements += st.size();

    return replacements;
}

int main() {
    string braces;
    char choice;
    do
    {
    cout << "Enter a string of braces: ";
    cin >> braces;

    int result = Replacements(braces);
    cout << "Minimum number of replacements required to balance the braces: " << result << endl;

    cout << "Do you want to enter another string? (y/n): ";
    cin >> choice;

    } while (choice == 'y' || choice == 'Y');
    
    
    return 0;
}
