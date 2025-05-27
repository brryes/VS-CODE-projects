#include <iostream>
using namespace std;

void findFrequency(int arr[], int n, int index) {
    if (index >= n) {
        return;
    }

    int count = 1;
    while (index + count < n && arr[index] == arr[index + count]) {
        count++;
    }

    cout << arr[index] << " appears " << count << " time(s)" << endl;

    findFrequency(arr, n, index + count);
}

int main() {
    int arr[] = {1, 2, 2, 3, 4, 4, 4, 5, 5};
    int n = sizeof(arr) / sizeof(arr[0]);

    findFrequency(arr, n, 0);

    return 0;
}
