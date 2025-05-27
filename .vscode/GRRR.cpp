#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

void clearScreen();
void printDelay(char c, int delay);

int main() {
    int n = 5; // Number of turns in the spiral
    int size = 2 * n - 1;

    char x = 'x';

    int top = 0;
    int bottom = size - 1;
    int left = 0;
    int right = size - 1;

    while (top <= bottom && left <= right) {
        // Print top row
        for (int i = left; i <= right; ++i) {
            printDelay(x, 100000);
        }
        top++;

        // Print rightmost column
        for (int i = top; i <= bottom; ++i) {
            clearScreen();
            for (int j = 0; j < i; ++j) {
                printf("\n");
            }
            printf("%*c\n", right + 1, x);
            usleep(100000);
        }
        right--;

        // Print bottom row
        if (top <= bottom) {
            clearScreen();
            for (int i = 0; i < bottom; ++i) {
                printf("\n");
            }
            for (int i = left; i <= right; ++i) {
                printf("%c", x);
            }
            printf("\n");
            usleep(100000);
        }
        bottom -= (top <= bottom);

        // Print leftmost column
        if (left <= right) {
            clearScreen();
            for (int i = 0; i < top; ++i) {
                printf("\n");
            }
            for (int i = top; i <= bottom; ++i) {
                printf("%c", x);
            }
            printf("\n");
            usleep(100000);
        }
        left += (left <= right);

        // Toggle 'x' to 'o' and vice versa
        x = (x == 'x') ? 'o' : 'x';
    }

    return 0;
}

void clearScreen() {
    printf("\033[H\033[J"); // ANSI escape code to clear the screen
}

void printDelay(char c, int delay) {
    printf("%c", c);
    fflush(stdout);
    usleep(delay);
}