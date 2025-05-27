#include <iostream>
#include <fstream>
#include <string>
using namespace std;

struct Player {
    string nickname;
    int age;
    double scores[5];
};

struct Node {
    Player player;
    Node* next;
};
Node* head = nullptr;

void addRecord(const Player& player) {
    Node* newNode = new Node;
    newNode->player = player;
    newNode->next = head;
    head = newNode;
}
void viewRecords() {
    Node* current = head;
    while (current != nullptr) {
        cout << "Nickname: " << current->player.nickname << endl;
        cout << "Age: " << current->player.age << endl;
        cout << "Scores: ";
        for (int i = 0; i < 5; ++i) {
            cout << current->player.scores[i] << " ";
        }
        cout << endl;
        cout << "----------------------------------" << endl;
        current = current->next;
    }
}

void computeAverage() {
    Node* current = head;
    while (current != nullptr) {
        double sum = 0;
        for (int i = 0; i < 5; ++i) {
            sum += current->player.scores[i];
        }
        double average = sum / 5.0;
        cout << "Nickname: " << current->player.nickname << endl;
        cout << "Average Score: " << average << endl;
        cout << "----------------------------------" << endl;
        current = current->next;
    }
}

void showMaxAverage() {
    Node* current = head;
    double maxAverage = -1; // Initialize to a non-valid value
    while (current != nullptr) {
        double sum = 0;
        for (int i = 0; i < 5; ++i) {
            sum += current->player.scores[i];
        }
    double average = sum / 5.0;
    if (average > maxAverage) {
    maxAverage = average;
    }
    current = current->next;
}
// Now, iterate again to display players with the max average
current = head;
while (current != nullptr) {
    double sum = 0;
    for (int i = 0; i < 5; ++i) {
        sum += current->player.scores[i];
    }
    double average = sum / 5.0;
    if (average == maxAverage) {
        cout << "Nickname: " << current->player.nickname << endl;
        cout << "Average Score: " << average << endl;
        cout << "----------------------------------" << endl;
    }
    current = current->next;
 }
}

void showMinAverage() {
    Node* current = head;
    double minAverage = 100; // Initialize to a value higher than the possible average
    while (current != nullptr) {
        double sum = 0;
        for (int i = 0; i < 5; ++i) {
            sum += current->player.scores[i];
        }
        double average = sum / 5.0;
        if (average < minAverage) {
            minAverage = average;
        }
    current = current->next;
}
// Now, iterate again to display players with the min average
current = head;
while (current != nullptr) {
    double sum = 0;
    for (int i = 0; i < 5; ++i) {
        sum += current->player.scores[i];
    }
    double average = sum / 5.0;
    if (average == minAverage) {
        cout << "Nickname: " << current->player.nickname << endl;
        cout << "Average Score: " << average << endl;
        cout << "----------------------------------" << endl;
    }
    current = current->next;
 }
}
void openFile() {
    ofstream outFile("player_records.txt");
    Node* current = head;
    while (current != nullptr) {
        outFile << current->player.nickname << endl;
        outFile << current->player.age << endl;
        for (int i = 0; i < 5; ++i) {
            outFile << current->player.scores[i] << " ";
        }
        outFile << endl;
        current = current->next;
    }
    outFile.close();
    cout << "Records saved to 'player_records.txt'." << endl;
}
// Function to indicate closing the file
void closeFile() {
    cout << "File closed." << endl;
}

