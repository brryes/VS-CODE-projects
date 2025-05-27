#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

struct Player {
    string nickname;
    int age;
    double score1; 
    double score2; 
    double average;
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
    player.average = (player.score1 + player.score2) / 2; 
    players.push_back(player);
    cout << "Record added successfully. \n";
}

void viewRecords(const vector<Player>& players){
    cout << "===========================================\n";
    cout << "             MENU " << endl;
    cout << "===========================================\n";
    for (const auto& player : players){
        cout << "Nickname: " << player.nickname << endl;
        cout << "Age: " << player.age << endl; 
        cout << "Score 1: " << player.score1 << endl; 
        cout << "Score 2: " << player.score2 << endl; 
        cout << "Average: " << player.average << endl; 
        cout << "==============================\n";
    }
}

void computeAverage(const vector<Player>& players){
    double totalAverage = 0;
    for (const auto& player : players){
        totalAverage += player.average; 
    }
    double overallAverage = totalAverage / players.size();
    cout << "Overall average: " << overallAverage << endl;
}

void showMaxAverage(const vector<Player>& players){
    double maxAverage = -1;
    vector<string> maxPlayers;
    for (const auto& player : players){
        if (player.average > maxAverage)
        {
            maxAverage = player.average;
            maxPlayers.clear();
            maxPlayers.push_back(player.nickname);
        }   else if (player.average == maxAverage){
            maxPlayers.push_back(player.nickname);
        } 
    }
    cout << "Player(s) with maximum average: ";
    for (const auto& player: maxPlayers){
        cout << player << " ";
    } 
    cout << endl;
}

void showMinAverage(const vector<Player>& players){
    double minAverage = 101;
    vector<string> minPlayers;
    for (const auto& player : players)
    {
        if (player.average < minAverage)        
        {
            minAverage = player.average;
            minPlayers.clear();
            minPlayers.push_back(player.nickname);
        } else if (player.average == minAverage)
        {
            minPlayers.push_back(player.nickname);
        }        
    }
    cout << "Player(s) with minimum average: ";
    for (const auto& player : minPlayers)
    {
        cout << player << " ";
    }
    cout << endl;
}

int main() {
    vector<Player> players;
    int choice;
    do
    {
        cout << "========================================" << endl;
        cout << "                      MENU" << endl;
        cout << "========================================" << endl;        
        cout << "1. Add record" << endl; 
        cout << "2. View players records" << endl; 
        cout << "3. Compute for the average" << endl;
        cout << "4. Show the player(s) who gets the max average" << endl; 
        cout << "5. Show the player(s) who gets the min average" << endl; 
        cout << "6. Exit" << endl; 
        cout << "Enter your choice: "; 
        cin >> choice;

        switch (choice)
        {
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
            cout << "Exiting program." << endl;
            break;
        default:
            cout << "Invalid choice. Please enter a number from 1 to 6." << endl;
            break;
        }
        
    } while (choice != 6);

    return 0;
}
