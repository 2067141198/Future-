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
	char board[ROW][COL] = { 0 };
	char ret = 0;
	init_board(board, ROW, COL);
	display_board(board, ROW, COL);
	while (1)
	{
		PlayerMove(board, ROW, COL);
		display_board(board, ROW, COL);
		ret = CheckWin(board, ROW, COL);
		if (ret != 'C')
			break;
		ComputerMove(board, ROW, COL);
		display_board(board, ROW, COL);
		ret = CheckWin(board, ROW, COL);
		if (ret != 'C')
			break;
	}
	if (ret == '*')
	{
		printf("���Ӯ\n");
	}
	else if (ret == '#')
	{
		printf("����Ӯ\n");
	}
	else if (ret == 'Q')
	{
		printf("ƽ��\n");
	}
}

int main()
{
	int input = 0;
	srand((unsigned int)time(NULL));
	do
	{
		maue();
		printf("�����뵽���ѡ��:>");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("�˳���Ϸ��\n");
			break;
		default:
			printf("�����������������:>\n");
			break;
		}
	} while (input);
	system("pause");
	return 0;
}