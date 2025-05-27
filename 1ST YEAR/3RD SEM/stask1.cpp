// board
#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>

using namespace std;

bool isSafe(const vector<vector<char> > &board, int row, int col, int N) {
    for (int i = 0; i < col; ++i) {
        if (board[row][i] == 'R') {
            return false;
        }
    }
    
    for (int i = 0; i < row; ++i) {
        if (board[i][col] == 'R') {
            return false;
        }
    }
    
    return true;
}

void printBoard(const vector<vector<char> > &board, int N) {
    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < N; ++j) {
            cout << board[i][j] << " ";
        }
        cout << endl;
    }
}

bool solveNRooks(vector<vector<char> > &board, int col, int N) {
    if (col >= N) {
        return true;
    }
    
    vector<int> rows(N);
    for (int i = 0; i < N; ++i) {
        rows[i] = i;
    }
    
    random_shuffle(rows.begin(), rows.end());
    
    for (int i = 0; i < N; ++i) {
        int row = rows[i];
        if (isSafe(board, row, col, N)) {
            board[row][col] = 'R';
            
            if (solveNRooks(board, col + 1, N)) {
                return true;
            }
            
           
            board[row][col] = '.';
        }
    }
    
    return false;
}

int main() {
    srand(time(0));
    int N;
    cout << "Enter the value of N: ";
    cin >> N;
    
    vector<vector<char> > board(N, vector<char>(N, '.'));
    
    if (solveNRooks(board, 0, N)) {
        cout << "Solution to the " << N << "-Rooks problem:" << endl;
        printBoard(board, N);
    } else {
        cout << "No solution exists for the " << N << "-Rooks problem." << endl;
    }
    
    return 0;
}
