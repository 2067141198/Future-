#define _CRT_SECURE_NO_WARNINGS 1

#include "game.h"

void maue()
{
	printf("**************************\n");
	printf("******    1.play    ******\n");
	printf("******    0.exit    ******\n");
	printf("**************************\n");
}

void game()
{
	int board[ROW][COL] = {0};
	init_board(board, ROW, COL);
	display_board(board, ROW, COL);
}

void init_board(int board[ROW][COL] , int row, int col)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
		{
			board[i][j] = ' ';
		}
	}
}

void display_board(int board[ROW][COL], int row, int col)
{
	int i = 0;
	for (i = 0; i < row; i++)
	{
		printf(" %c | %c | %c \n",' ', ' ', ' ' );
		if (i < row-1)
		{
		printf("---|---|---\n");
		}
	}
}