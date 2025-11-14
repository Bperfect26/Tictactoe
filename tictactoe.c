// Include necessary headers
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define MAX_SIZE 3 // Maximum grid size
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
        printf("%2d ", col);
    }
    printf("\n");
    for (int row = 0; row < size; row++) {
        printf("%2d ", row); 
        for (int col = 0; col < size; col++) {
            printf(" %c ", board[row][col]);
        }
        printf("\n");
    }
    printf("\n");
}

int main(){
char board[3][3];
initializeBoard(board,3);
printBoard(board,3);

}