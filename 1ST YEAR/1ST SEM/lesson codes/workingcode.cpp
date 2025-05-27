#include <stdio.h> //used for input output functions
#include <windows.h> // used to run on any Windows version
#include <conio.h> // used for I/O operation to the console
#include <unistd.h> //defines other symbolic constancts that are not defined by the first three headers

void gotoxy(short x, short y); //positions the cursor in horizontal and vertical direction

int main() {
    int n = 5; // Number of turns in the spiral
    int width = 24* n; //width of the spiral
    int height = 10 * n - 1;
    char matrix [height][width]; //matrix declares a 2D charac array to represent a grid for the spiral pattern
    char x = 'x'; // 'x' will be used to create the pattern

    //direction or place of spiral
    int top = 0;
    int bottom = height - 1;
    int left = 0;
    int right = width - 1;

    // while loop is used to print the elements of matrix in a spiral pattern until bouncaries are met
    while (top <= bottom && left <= right) {
        // Print top row
        for (int i = left; i <= right; ++i) { //iterates value from left to right
            gotoxy(i, top); //positions the output in the assigned place
            printf("%c", x); //print
            usleep(10000); //delays printing for 10,000 milliseconds
        }
        top++; //increment by 1 so the code will move to the next row in the next iteration of loop 

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

        
        x = (x == 'x') ? 'x' : 'x';
    }

    getch(); //waits for a keypress rom user before the program exits
    return 0;
}

void gotoxy(short x, short y) {//set  position on the console using windows console api functions
    COORD pos = { x, y }; 
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
}