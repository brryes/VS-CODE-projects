#include <iostream>
using namespace std;

int main() {
    int x, no, y, total = 0;
    cout << "How many stars? ";
    cin >> no;
    for (x = no; x > 0; x--) {
        for (y = x; y > 0; y--) {
            cout << "*";
            total++;
        }
        cout << "\n";
    }
    cout << "Wow " << total << " stars in all!!!";
    return 0;
}
