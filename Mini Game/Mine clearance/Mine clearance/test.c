#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define MAX_ROW 9
#define MAX_COL 9
#define MINE_COUNT 10

void Init(char show_map[MAX_ROW][MAX_COL],
	char mine_map[MAX_ROW][MAX_COL]){
	//1.将show_map[][]初始化为*
	for (int row = 0; row < MAX_ROW; ++row){
		for (int col = 0; col < MAX_COL; ++col){
			show_map[row][col] = '*';
		}
	}
	//2.先将mine_map初始化为'0'
	for (int row = 0; row < MAX_ROW; ++row){
		for (int col = 0; col < MAX_COL; ++col){
			mine_map[row][col] = '0';
		}
	}
	//3.随机生成十个地雷
	int mine_count = MINE_COUNT;
	while (mine_count > 0){
		//生成随机坐标
		int row = rand() % MAX_ROW;
		int col = rand() % MAX_COL;
		if (mine_map[row][col] == '1'){
			continue;
		}
		mine_map[row][col] = '1';
		--mine_count;
	}
}

void PrintMap(char map[MAX_ROW][MAX_COL]){
	printf("   |");
	for (int col = 0; col < MAX_COL; col++){
		printf("%d ", col);
	}
	printf("\n");
	printf("---|");
	for (int col = 0; col < MAX_COL; col++){
		printf("--");
	}
	printf("\n");
	for (int row = 0; row < MAX_ROW; row++){
		printf(" %d |", row);
		for (int col = 0; col < MAX_ROW; col++){
			printf("%c ", map[row][col]);
		}
		printf("\n");
	}
}

void UpdateShowMap(char show_map[MAX_ROW][MAX_COL], char mine_map[MAX_ROW][MAX_COL], int row, int col){
	int count = 0;
	if (row - 1 >= 0 && col - 1 >= 0 && mine_map[row-1][col-1] == '1'){
		count++;
	}
	if (row - 1 >= 0 && mine_map[row - 1][col] == '1'){
		count++;
	}
	if (row - 1 >= 0 && col + 1 < MAX_COL && mine_map[row - 1][col + 1] == '1'){
		count++;
	}
	if (col - 1 >= 0 && mine_map[row][col - 1] == '1'){
		count++;
	}
	if (col + 1 < MAX_COL && mine_map[row][col + 1] == '1'){
		count++;
	}
	if (row + 1 < MAX_ROW && col - 1 >= 0 && mine_map[row + 1][col - 1] == '1'){
		count++;
	}
	if (row + 1 < MAX_ROW && mine_map[row + 1][col] == '1'){
		count++;
	}
	if (row + 1 < MAX_ROW && col + 1 < MAX_COL && mine_map[row + 1][col + 1] == '1'){
		count++;
	}
	if (count != 0){
		show_map[row][col] = (count + '0');
	}
	else {
		show_map[row][col] = ' ';
		if (row != 0 && col != 0 && show_map[row][col] == ' ')
			UpdateShowMap(show_map, mine_map, row - 1, col - 1);
		if (col != 0 && show_map[row][col] == ' ')
			UpdateShowMap(show_map, mine_map, row - 1, col);
		if (row != 0 && col != MAX_COL && show_map[row][col] == ' ')
			UpdateShowMap(show_map, mine_map, row - 1, col + 1);
		if (col != 0 && show_map[row][col] == ' ')
			UpdateShowMap(show_map, mine_map, row, col - 1);
		/*if (col != MAX_ROW && show_map[row][col] == ' ')
			UpdateShowMap(show_map, mine_map, row, col + 1);
		if (row != MAX_ROW && col != 0 && show_map[row][col] == ' ')
			UpdateShowMap(show_map, mine_map, row + 1, col - 1);
		if (row != MAX_ROW && show_map[row][col] == ' ')
			UpdateShowMap(show_map, mine_map, row - 1, col - 1);
		if (row != MAX_ROW && col != MAX_COL && show_map[row][col] == ' ')
			UpdateShowMap(show_map, mine_map, row + 1, col);*/
	}
}

void UpdateShowMap2(char show_map[MAX_ROW][MAX_COL], char mine_map[MAX_ROW][MAX_COL], int row, int col){
	int count = 0;
	if (row - 1 >= 0 && col - 1 >= 0 && mine_map[row - 1][col - 1] == '1'){
		count++;
	}
	if (row - 1 >= 0 && mine_map[row - 1][col] == '1'){
		count++;
	}
	if (row - 1 >= 0 && col + 1 < MAX_COL && mine_map[row - 1][col + 1] == '1'){
		count++;
	}
	if (col - 1 >= 0 && mine_map[row][col - 1] == '1'){
		count++;
	}
	if (col + 1 < MAX_COL && mine_map[row][col + 1] == '1'){
		count++;
	}
	if (row + 1 < MAX_ROW && col - 1 >= 0 && mine_map[row + 1][col - 1] == '1'){
		count++;
	}
	if (row + 1 < MAX_ROW && mine_map[row + 1][col] == '1'){
		count++;
	}
	if (row + 1 < MAX_ROW && col + 1 < MAX_COL && mine_map[row + 1][col + 1] == '1'){
		count++;
	}
	if (count != 0){
		show_map[row][col] = (count + '0');
	}
	else {
		show_map[row][col] = ' ';
		/*if (row != 0 && col != 0 && show_map[row][col] == ' ')
			UpdateShowMap(show_map, mine_map, row - 1, col - 1);
		if (col != 0 && show_map[row][col] == ' ')
			UpdateShowMap(show_map, mine_map, row - 1, col);
		if (row != 0 && col != MAX_COL && show_map[row][col] == ' ')
			UpdateShowMap(show_map, mine_map, row - 1, col + 1);
		if (col != 0 && show_map[row][col] == ' ')
			UpdateShowMap(show_map, mine_map, row, col - 1);*/
		if (col != MAX_ROW && show_map[row][col] == ' ')
			UpdateShowMap(show_map, mine_map, row, col + 1);
		if (row != MAX_ROW && col != 0 && show_map[row][col] == ' ')
			UpdateShowMap(show_map, mine_map, row + 1, col - 1);
		if (row != MAX_ROW && show_map[row][col] == ' ')
			UpdateShowMap(show_map, mine_map, row - 1, col - 1);
		if (row != MAX_ROW && col != MAX_COL && show_map[row][col] == ' ')
			UpdateShowMap(show_map, mine_map, row + 1, col);
	}
}



void Game(){
	//1.定义两二维个数组
	char show_map[MAX_ROW][MAX_COL] = { 0 };
	char mine_map[MAX_ROW][MAX_COL] = { 0 };
	//2.将两个数组初始化
	Init(show_map, mine_map);
	//翻开不是地雷的位置个数
	int black_count = 0;
	while (1){
		system("cls");
		//3.打印地图
		PrintMap(mine_map);
		PrintMap(show_map);
		//4.输入坐标并检查其合法性
		printf("请输入一组坐标(row，col):");
		int row = 0;
		int col = 0;
		scanf("%d %d", &row, &col);
		if (row < 0 || col < 0 || row > MAX_ROW || col > MAX_COL){
			printf("坐标输入有误请重新输入!\n");
			continue;
		}
		if (show_map[row][col] != '*'){
			printf("该位置已经被翻开请重新选择!\n");
			continue;
		}
		//5.判断是否踩雷
		if (mine_map[row][col] == '1'){
			//踩雷了
			system("cls");
			PrintMap(mine_map);
			printf("Game Over!\n");
			break;
		}
		//6.判断是否胜利
		
		if (black_count == MAX_ROW * MAX_COL - MINE_COUNT){
			printf("恭喜你，游戏胜利!");
			break;
		}
		//7.更新地图把当前位置变成周围八个格子的地雷数
		UpdateShowMap(show_map, mine_map, row, col);
		UpdateShowMap2(show_map, mine_map, row, col);
		}
}

int Menu(){
	printf("==========================\n");
	printf("        1.开始游戏        \n");
	printf("        0.退出游戏        \n");
	printf("==========================\n");
	printf("请输入你的选择:");
	int choice = 0;
	scanf("%d", &choice);
	return choice;
}


int main(){
	srand((unsigned int)time(NULL));
	while (1){
		int choice = Menu();
		if (choice == 1){
			Game();
		}
	    else if(choice == 0){
			printf("Good Bye!\n");
			break;
		}
		else{
			printf("输入错误请重新选择!\n");
		}
	}
	system("pause");
	return 0;
}