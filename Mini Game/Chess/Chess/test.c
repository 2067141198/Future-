#define _CRT_SECURE_NO_WARNINGS 1

#include "game.h"

int main()
{
	int input = 0;
	do
	{
		maue();
		printf("请输入到你的选择:>");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("退出游戏！\n");
			break;
		default:
			printf("输入错误，请重新输入:>\n");
			break;
		}
	} while (input);
	system("pause");
	return 0;
}