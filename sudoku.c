#include <stdio.h>

#define SIZE 9

int isSafe(int grid[SIZE][SIZE], int row, int col, int num) {

    // Check row
    for (int x = 0; x < SIZE; x++)
        if (grid[row][x] == num)
            return 0;

    // Check column
    for (int x = 0; x < SIZE; x++)
        if (grid[x][col] == num)
            return 0;

    // Check 3×3 box
    int startRow = row - row % 3;
    int startCol = col - col % 3;

    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 3; j++)
            if (grid[startRow + i][startCol + j] == num)
                return 0;

    return 1;
}

int solveSudoku(int grid[SIZE][SIZE]) {

    int row, col, found = 0;

    for (row = 0; row < SIZE; row++) {
        for (col = 0; col < SIZE; col++) {

            if (grid[row][col] == 0) {
                found = 1;
                goto EMPTY;
            }
        }
    }

EMPTY:

    if (!found)
        return 1;

    for (int num = 1; num <= 9; num++) {

        if (isSafe(grid, row, col, num)) {

            grid[row][col] = num;

            if (solveSudoku(grid))
                return 1;

            grid[row][col] = 0;
        }
    }

    return 0;
}

void printGrid(int grid[SIZE][SIZE]) {

    for (int i = 0; i < SIZE; i++) {

        for (int j = 0; j < SIZE; j++)
            printf("%d ", grid[i][j]);

        printf("\n");
    }
}

int main() {

    int grid[SIZE][SIZE] = {
        {3,0,6,5,0,8,4,0,0},
        {5,2,0,0,0,0,0,0,0},
        {0,8,7,0,0,0,0,3,1},
        {0,0,3,0,1,0,0,8,0},
        {9,0,0,8,6,3,0,0,5},
        {0,5,0,0,9,0,6,0,0},
        {1,3,0,0,0,0,2,5,0},
        {0,0,0,0,0,0,0,7,4},
        {0,0,5,2,0,6,3,0,0}
    };

    if (solveSudoku(grid)) {

        printf("Solved Sudoku:\n\n");

        printGrid(grid);

    } else {

        printf("No Solution Exists");

    }

    return 0;
}