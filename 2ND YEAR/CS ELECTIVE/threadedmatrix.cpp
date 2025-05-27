// threadedmatrix.cpp
#include <iostream>
#include <thread>
#include <vector>

using namespace std;

const int ROWS = 5;
const int COLS = 3;
const int COMMON = 5;

// Matrices
int m1[ROWS][COMMON] = {
    {1, 2, 3, 4, 5},
    {6, 7, 8, 9, 10},
    {11, 12, 13, 14, 15},
    {16, 17, 18, 19, 20},
    {21, 22, 23, 24, 25}
};

int m2[COMMON][COLS] = {
    {26, 27, 28},
    {29, 30, 31},
    {32, 33, 34},
    {35, 36, 37},
    {38, 39, 40}
};

int result[ROWS][COLS] = {0};

// Function to compute one row of result
void computeRow(int row) {
    for (int j = 0; j < COLS; j++) {
        for (int k = 0; k < COMMON; k++) {
            result[row][j] += m1[row][k] * m2[k][j];
        }
    }
}

int main() {
    vector<thread> threads;

    // Launch threads to compute each row
    for (int i = 0; i < ROWS; i++) {
        threads.push_back(thread(computeRow, i));
    }

    // Join all threads
    for (auto &t : threads) {
        t.join();
    }

    // Output the result matrix
    for (int i = 0; i < ROWS; ++i) {
        for (int j = 0; j < COLS; ++j) {
            cout << result[i][j] << " ";
            if (j == COLS - 1)
                cout << "\n";
        }
    }

    return 0;
}
