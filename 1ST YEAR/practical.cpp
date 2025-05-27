#include <iostream>
#include <string>
using namespace std;

const int MAX_SIZE = 5;

class StudentSet {
private:
    string set[MAX_SIZE];
    int size;

public:
    StudentSet() {
        size = 0;
    }

    void add(string name) {
        if (size >= MAX_SIZE) {
            cout << "Error: Set is full." << endl;
            return;
        }

        if (contains(name)) {
            cout << "Error: Student already in the set." << endl;
            return;
        }

        set[size] = name;
        size++;
    }

    void remove(string name) {
        int index = -1;
        for (int i = 0; i < size; i++) {
            if (set[i] == name) {
                index = i;
                break;
            }
        }

        if (index >= 0) {
            for (int i = index; i < size - 1; i++) {
                set[i] = set[i + 1];
            }
            size--;
        }
    }

    bool contains(string name) {
        for (int i = 0; i < size; i++) {
            if (set[i] == name) {
                return true;
            }
        }
        return false;
    }

    void print() {
        // Print the set
        cout << "Set: { ";
        for (int i = 0; i < size; i++) {
            cout << set[i];
            if (i < size - 1) {
                cout << " ";
            }
        }
        cout << " }" << endl;
    }
};

int main() {
    StudentSet s;
    string name;

    s.add("Akira");
    s.add("JL");
    s.add("Gelo");
    s.add("Mikki");
    s.add("Nate");

    s.print();

    cout << "Who do you want to check? ";
    cin >> name;

    if (s.contains(name)) {
        cout << "Yipee!!! He is in the set." << endl;
    } else {
        cout << "Oops! He is not in the set." << endl;
    }

    cout << "Who do you want to remove? ";
    cin >> name;
    s.remove(name);

    s.print();

    if (s.contains(name)) {
        cout << "Yipee! He is in the set." << endl;
    } else {
        cout << "Saddd!!! " << name << " is not anymore in the set." << endl;
    }

    return 0;
}
