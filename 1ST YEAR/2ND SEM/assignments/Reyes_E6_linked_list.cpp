#include <iostream> 
#include <string> 
using namespace std;

struct Player; 
struct Node;

void addRecord(const Player& player); 
void viewRecords();
void computeAverage();
void showMaxAverage();
void showMinAverage();

struct Player { 
    string nickname; 
    int age;
    double score1; 
    double score2;
};

struct Node { 
    Player player;
    Node* next; 
};

    Node* head = nullptr;


int main() { 
    int choice;
    do{
        cout << "Menu:\n";
        cout << "1. Add a record\n";
        cout << "2. View records\n";
        cout << "3. Compute average\n"; 
        cout << "4. Show max average\n"; 
        cout << "5. Show min average\n"; 
        cout << "0. Exit\n";
        cout << "Enter your choice: "; 
        cin >> choice;

switch (choice) { 
    case 1: {
        Player newPlayer;
        cout << "Enter nickname: ";
        cin >> newPlayer.nickname;
        cout << "Enter age: ";
        cin >> newPlayer.age;
        cout << "Enter score 1: ";
        cin >> newPlayer.score1;
        cout << "Enter score 2: ";
        cin >> newPlayer.score2; addRecord(newPlayer);
        cout << "Record added successfully!\n"; break;
}
    case 2:
        viewRecords();
        break; 
        
    case 3:
    computeAverage();
    break; 

    case 4:
    showMaxAverage();
    break; 

    case 5:
    showMinAverage();
    break; 

    case 0:
    cout << "Exiting program.\n";
    break; 
    default:

    cout << "Invalid choice. Please enter a valid option.\n"; 
    }
} while (choice != 0);
    return 0; 
    }
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
    cout << "Score 1: " << current->player.score1 << endl;
    cout << "Score 2: " << current->player.score2 << endl;
    cout << "----------------------------------" << endl;
    current = current->next; }
    }

    void computeAverage() { 
        Node* current = head; 
        while (current != nullptr) {
            double average = (current->player.score1 + current->player.score2) / 2.0; 
            cout << "Nickname: " << current->player.nickname << endl;
            cout << "Average Score: " << average << endl;
            cout << "----------------------------------" << endl;
            current = current->next; }
    }

    void showMaxAverage() { 
        Node* current = head; 
        double maxAverage = -1; 
        while (current != nullptr) {
            double average = (current->player.score1 + current->player.score2) / 2.0; 
            if (average > maxAverage) {
                maxAverage = average; 
                }
        current = current->next; 
    }

    current = head;
    while (current != nullptr) {
        double average = (current->player.score1 + current->player.score2) / 2.0; 
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
         double minAverage = 999999; 
         while (current != nullptr) {
            double average = (current->player.score1 + current->player.score2) / 2.0; 
            if (average < minAverage) {
                minAverage = average; 
            }
            current = current->next; 
        }

    current = head;
    while (current != nullptr) {
        double average = (current->player.score1 + current->player.score2) / 2.0; 
        if (average == minAverage) {
            cout << "Nickname: " << current->player.nickname << endl; 
            cout << "Average Score: " << average << endl;
            cout << "----------------------------------" << endl;
    }
    current = current->next; 
}
}