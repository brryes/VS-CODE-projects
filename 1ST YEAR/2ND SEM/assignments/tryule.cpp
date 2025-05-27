#include <iostream>
using namespace std;

struct player {
    char nickname[50];
    int age;
    char average[100];
    float best_scores1;
    float best_scores2;
    float averageScore;
};

void displayRecord(player s, int i) {
    cout << "\nPlayer " << i + 1 << ":" << endl;
    cout << "Nickname: " << s.nickname << endl;
    cout << "Age: " << s.age << endl;
    cout << "Two Best Scores: " << s.best_scores1 << " " << s.best_scores2 << endl;
}

player AddRecord(int size) {
    player s;
    cout << "Enter nickname: ";
    cin >> s.nickname;
    cout << "Enter age: ";
    cin >> s.age;
    cout << "Enter Two Best scores: ";
    cin >> s.best_scores1 >> s.best_scores2;
    cout << "Record Added!\n";
    return s;
}

float calculateAverage(player s) {
    float totalAveScore = (s.best_scores1 + s.best_scores2) / 2.0;
    cout << "Average score for " << s.nickname << ": " << totalAveScore << endl;
    return totalAveScore;
}

int main() {
    int choice, size = 5;
    char ans;
    player records[5];
    int recordCount = 0;

    do {
        cout << "\n==============================================\n";
        cout << "MENU\n";
        cout << "==============================================\n";
        cout << "1. Add record\n";
        cout << "2. View players records\n";
        cout << "3. Compute for the average\n";
        cout << "4. Show the player(s) who gets the max average\n";
        cout << "5. Show the player(s) who gets the min average\n";
        cout << "6. Exit\n";
        cout << "Enter your choice (1-6): ";
        cin >> choice;

        switch (choice) {
            case 1:
                if (recordCount < size) {
                    records[recordCount++] = AddRecord(size);
                } else {
                    cout << "No more space for additional records!" << endl;
                }
                break;
            case 2:
                for (int i = 0; i < recordCount; ++i) {
                    displayRecord(records[i], i);
                }
                break;
            case 3:
                for (int i = 0; i < recordCount; ++i) {
                    calculateAverage(records[i]);
                }
                break;
            case 4:
                // Add code to show player(s) with max average
                break;
            case 5:
                // Add code to show player(s) with min average
                break;
            case 6:
                cout << "Exiting program." << endl;
                return 0;
            default:
                cout << "Please only select from numbers 1 to 6" << endl;
        }
        cout << "Press y or Y to continue: ";
        cin >> ans;
    } while (ans == 'Y' || ans == 'y');

    return 0;
}
