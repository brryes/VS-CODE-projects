#include <iostream>
using namespace std;

void towerOfHanoi(int n, char from_rod, char to_rod, char aux_rod) {
    if (n == 1) {
        cout << "Disk 1 moved from " << from_rod << " to " << to_rod << endl;
        return;
    }
    towerOfHanoi(n - 1, from_rod, aux_rod, to_rod);
    cout << "Disk " << n << " moved from " << from_rod << " to " << to_rod << endl;
    towerOfHanoi(n - 1, aux_rod, to_rod, from_rod);
}

int main() {
    int numDisks, numRods;

    cout << "Enter the number of rods (either 2 or 3): ";
    cin >> numRods;

    while (numRods != 2 && numRods != 3) {
        cout << "Invalid input. Please enter either 2 or 3: ";
        cin >> numRods;
    }

    cout << "Enter the number of disks: ";
    cin >> numDisks;

    if (numRods == 3) {
        towerOfHanoi(numDisks, 'A', 'C', 'B');
    } else if (numRods == 2) {
       
        towerOfHanoi(numDisks, 'A', 'B', 'C');
    }

    return 0;
}
