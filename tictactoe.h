#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define MAX_SIZE 3
void initializeBoard(char board[MAX_SIZE][MAX_SIZE], int size) {
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            board[i][j] = ' ';
        }
    }
}
void printBoard(char board[MAX_SIZE][MAX_SIZE], int size) {
    printf("\n   ");
    for (int col = 0; col < size; col++) {
        printf("  %d ", col);
    }
    printf("\n");
    for (int row = 0; row < size; row++) {
        printf("%2d ", row);
        for (int col = 0; col < size; col++) {
            printf(" %c ", board[row][col]);
            if (col < size - 1) {
                printf("|");
            }
        }
        printf("\n");
        if (row < size - 1) {
            printf("   ");
            for (int col = 0; col < size; col++) {
                printf("---");
                if (col < size - 1) {
                    printf("+");
                }
            }
            printf("\n");
        }
    }
    printf("\n");
}
void playerMove(char board[MAX_SIZE][MAX_SIZE], int size, char player) {
    int row, col;
    int valid = 0;
    while (!valid) {
        printf("Player %c - Enter row (0-%d): ", player, size - 1);
        scanf("%d", &row);
        printf("Player %c - Enter column (0-%d): ", player, size - 1);
        scanf("%d", &col);
        if (row < 0 || row >= size || col < 0 || col >= size) {
            printf("Invalid! Coordinates out of bounds. Try again.\n");
        } else if (board[row][col] != ' ') {
            printf("Invalid! Cell is already taken. Try again.\n");
        } else {
            board[row][col] = player;
            valid = 1;
        }
    }
}