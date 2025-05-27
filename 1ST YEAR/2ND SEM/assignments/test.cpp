#include <iostream>
using namespace std;

struct player
{
    char nickname[50];
    int age;
    //int p1, p2, p3, p4, p5;
    char average[100];
    float best_scores1;
    float best_scores2;
    float averageScore;

};

void displayRecord(player s, int size) 
{   
        cout << "\nPlayer " << i+1 << ":" << endl;
        cout << "Nickname: " << s.nickname << endl;
        cout << "Age: " << s.age << endl;
        cout << "Two Best Scores: " << s.best_scores1 << s.best_scores2 << endl;
   
}

player AddRecord(int size) 
{
        player s;
        cout << "Enter nickname: ";
        cin >> s.nickname;
        cout << "Enter age: ";
        cin >> s.age;
        cout << "Enter Two Best scores: ";
        cin >> s.best_scores1 >> s.best_scores2;
        cout << "Record Added!";
        player.push_back(player);
        return s;

}

float calculateAverage(int size){
    float totalAveScore = (best_scores1 + best_scores2) / 2.0;
    cout << "Average score for " << s.nickname << ": " << totalAveScore << endl;
    
}


int main() 
{

    int choice, size = 5;
    char ans;
    cout << "\n1. Add Record\n2. View Players Record\n3. Compute for the average\n4. Show the player(s) who gets the max average.\n5. Show the player(s) who gets the min average.\n6. Exit\n";
    cout << "Enter your choice (1-6): ";
    cin >> choice;
do {

    switch (choice) {
        case 1:
            AddRecord();
            break;
        case 2:
            displayRecord();
            break;
        case 3:
            calculateAverage();
            break;
        case 4:
           displayQuotient();
            break;
        case 5:
            displayModulus();
            break;
        case 6:
            displayPower();
            break;
        default:
            cout << "Please only select from numbers 1 to 6\n";
        }
    cout<< "Press y or Y to continue\n";
    cin >> ans;
} while ((ans == 'Y') || (ans == 'y'));
   
   
return 0;
}
    // player s = AddRecord();
    // displayRecord(s);
    // return 0;


