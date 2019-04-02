

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define ROW 3
#define COL 3

void maue();
void game();
void init_board(char board[ROW][COL], int row, int col);
void display_board(char board[ROW][COL], int row, int col);
void PlayerMove(char board[ROW][COL], int row, int col);
void ComputerMoveint(char board[ROW][COL], int row, int col);
char CheckWin(char board[ROW][COL], int row, int col);