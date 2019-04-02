#define _CRT_SECURE_NO_WARNINGS 1

#include "game.h"



void init_board(char board[ROW][COL] , int row, int col)
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

void display_board(char board[ROW][COL], int row, int col)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
		{
			printf(" %c ",board[i][j] );
			if (j < col - 1)
			{
				printf("|");
			}
		}
		printf("\n");
		if (i < row-1)
		{
			for (j = 0; j < col; j++)
			{
				printf("---");
				if (j < col - 1)
				{
					printf("|");
				}
			}
			printf("\n");
		}
	}
}

void PlayerMove(char board[ROW][COL], int row, int col)
{
	int x = 0;
	int y = 0;
	printf("�����:>\n");
	while (1)
	{
		printf("������Ҫ���ӵ�����:>");
		scanf("%d%d", &x, &y);
		if ((x>=1) && (x<=row) && (y>=1) && (y <=col))
		{
			if (board[x-1][y-1] != ' ')
			{
				printf("��λ�������ӣ�����������\n");
			}
			else
			{
				board[x - 1][y - 1] = '*';
				break;
			}
		}
		else
		{
			printf("������������������\n");
		}
	}
}

void ComputerMove(char board[ROW][COL], int row, int col)
{
	int x = 0;
	int y = 0;
	printf("������:>\n");
	while (1)
	{
		x = rand() % row;
		y = rand() % col;
		if (board[x][y] == ' ')
		{
			board[x][y] = '#';
			break;
		}
	}
}

static int IsFull(char board[ROW][COL], int row, int col)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
		{
			if(board[i][j] == ' ');
			return 0;
		}
		return 1;
	}
}



char CheckWin(char board[ROW][COL], int row, int col)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col - 2; j++)
		{
			if (board[i][j] == board[i][j + 1] && board[i][j + 1] == board[i][j + 2] && board[i][j] != ' ')
				return board[i][j];
		}
	}
	for (j = 0; j < col; j++)
	{
		for (i = 0; i < row - 2; i++)
		{
			if (board[i][j] == board[i = 1][j] && board[i + 1][j] == board[i + 2][j] && board[i][j] != ' ')
				return board[i][j];
		}
	}
	for (i = 0; i < row - 2; i++)
	{
		for (j = 0; j < col - 2; j++)
		{
			if (board[i][j] == board[i + 1][j + 1] && board[i + 1][j + 1] == board[i + 2][j + 2] && board[i][j] != ' ')
				return board[i][j];
		}
	}
	for (i = 0; i < row - 2 ; i++)
	{
		for (j = 2; j < col; j++)
		{
			if (board[i][j] == board[i - 1][j + 1] && board[i - 1][j + 1] == board[i - 2][j + 2] && board[i][j] != ' ')
				return board[i][j];
		}
	}
	if (IsFull(board, row, col) == 1)
	{
		return 'Q';//ƽ��
	}
	return 'C';//����
}


















