#include <stdio.h>
#include <windows.h>
#include <conio.h>
#include <unistd.h>

void gotoxy(short x, short y);

int main() {
    int n = 5; // Number of turns in the spiral
    int size = 2 * n - 1;
    char matrix[size][size];

    char x = 'x';

    int top = 0;
    int bottom = size - 1;
    int left = 0;
    int right = size - 1;

    while (top <= bottom && left <= right) {
        // Print top row
        for (int i = left; i <= right; ++i) {
            gotoxy(i, top);
            printf("%c", x);
            usleep(10000);
        }
        top++;

        // Print rightmost column
        for (int i = top; i <= bottom; ++i) {
            gotoxy(right, i);
            printf("%c", x);
            usleep(10000);
        }
        right--;

        // Print bottom row
        for (int i = right; i >= left && top <= bottom; --i) {
            gotoxy(i, bottom);
            printf("%c", x);
            usleep(10000);
        }
        bottom -= (top <= bottom);

        // Print leftmost column
        for (int i = bottom; i >= top && left <= right; --i) {
            gotoxy(left, i);
            printf("%c", x);
            usleep(10000);
        }
        left += (left <= right);

        // Toggle 'x' to 'o' and vice versa
        x = (x == 'x') ? 'o' : 'x';
    }

    getch();
    return 0;
}

void gotoxy(short x, short y) {
    COORD pos = { x, y };
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
}