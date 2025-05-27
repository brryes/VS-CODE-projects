#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

struct Player {
    string nickname;
    int age;
    float score1;
    float score2;
};

void addRecord(vector<Player>& players) {
    Player player;
    cout << "Enter player's nickname: ";
    cin >> player.nickname;
    cout << "Enter player's age: ";
    cin >> player.age;
    cout << "Enter player's first score: ";
    cin >> player.score1;
    cout << "Enter player's second score: ";
    cin >> player.score2;
    players.push_back(player);
}

void viewRecords(const vector<Player>& players) {
    if (players.empty()) {
        cout << "No records found.\n";
        return;
    }

    cout << "Player records:\n";
    for (const auto& player : players) {
        cout << "Nickname: " << player.nickname << ", Age: " << player.age << ", Scores: " << player.score1 << ", " << player.score2 << endl;
    }
}

void computeAverage(const vector<Player>& players) {
    if (players.empty()) {
        cout << "No records found.\n";
        return;
    }

    for (const auto& player : players) {
        float average = (player.score1 + player.score2) / 2.0;
        cout << "Average score for " << player.nickname << ": " << average << endl;
    }
}

bool compareByAverage(const Player& player1, const Player& player2) {
    float avg1 = (player1.score1 + player1.score2) / 2.0;
    float avg2 = (player2.score1 + player2.score2) / 2.0;
    return avg1 > avg2;
}

void showMaxAverage(const vector<Player>& players) {
    if (players.empty()) {
        cout << "No records found.\n";
        return;
    }

    vector<Player> sortedPlayers = players;
    sort(sortedPlayers.begin(), sortedPlayers.end(), compareByAverage);

    float maxAverage = (sortedPlayers[0].score1 + sortedPlayers[0].score2) / 2.0;
    cout << "Player(s) with max average score:\n";
    for (const auto& player : sortedPlayers) {
        float average = (player.score1 + player.score2) / 2.0;
        if (average == maxAverage) {
            cout << "Nickname: " << player.nickname << ", Age: " << player.age << ", Average score: " << average << endl;
        } else {
            break;
        }
    }
}

void showMinAverage(const vector<Player>& players) {
    if (players.empty()) {
        cout << "No records found.\n";
        return;
    }

    vector<Player> sortedPlayers = players;
    sort(sortedPlayers.begin(), sortedPlayers.end(), compareByAverage);

    float minAverage = (sortedPlayers.back().score1 + sortedPlayers.back().score2) / 2.0;
    cout << "Player(s) with min average score:\n";
    for (const auto& player : sortedPlayers) {
        float average = (player.score1 + player.score2) / 2.0;
        if (average == minAverage) {
            cout << "Nickname: " << player.nickname << ", Age: " << player.age << ", Average score: " << average << endl;
        } else {
            break;
        }
    }
}

int main() {
    vector<Player> players;
    int choice;

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
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                addRecord(players);
                break;
            case 2:
                viewRecords(players);
                break;
            case 3:
                computeAverage(players);
                break;
            case 4:
                showMaxAverage(players);
                break;
            case 5:
                showMinAverage(players);
                break;
            case 6:
                cout << "Exiting program.\n";
                break;
            default:
                cout << "Invalid choice. Please enter a number from 1 to 6.\n";
        }
    } while (choice != 6);

    return 0;
}
