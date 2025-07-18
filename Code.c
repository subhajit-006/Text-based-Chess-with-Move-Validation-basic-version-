#include <stdio.h>
char board[8][8];
void initChessBoard() {
    char pieces[] = {'R','N','B','Q','K','B','N','R'};
    for(int i=0; i<8; i++) board[0][i] = pieces[i];
    for(int i=0; i<8; i++) board[1][i] = 'P';
    for(int i=2; i<6; i++) for(int j=0; j<8; j++) board[i][j] = '.';
    for(int i=0; i<8; i++) board[6][i] = 'p';
    for(int i=0; i<8; i++) board[7][i] = pieces[i] + 32;
}
void printChessBoard() {
    for(int i=0; i<8; i++) {
        for(int j=0; j<8; j++) {
            printf("%c ", board[i][j]);
        }
        printf("\n");
    }
}
int mainChess() {
    initChessBoard();
    printChessBoard();
    return 0;
}
