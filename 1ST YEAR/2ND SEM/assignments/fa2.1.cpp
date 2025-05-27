#include <iostream>
#include <vector>
//identifies position of all even numbers in an array
using namespace std;

vector<int> findeven(int arr[], int size) {
    vector<int> evenPositions;
    for (int i = 0; i < size; i++) {
        if (arr[i] % 2 == 0) {
            evenPositions.push_back(i);
        }
    }
    return evenPositions;
}

int main() {
    int arr[10];

    cout << "Enter any 10 numbers: " << endl;
    for (int i = 0; i < 10; i++) {
        cin >> arr[i];
    }

    vector<int> evenPositions = findeven(arr, 10);

    cout << "Positions of even numbers in the array: ";
    for (int i = 0; i < evenPositions.size(); i++) {
        cout << evenPositions[i] << " ";
    }
    cout << endl;

    return 0;
}
