#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>

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
			show_map[row][col] = '*';
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

void PringtMap(char map[MAX_ROW][MAX_COL]){

}

void Game(){
	//1.定义两二维个数组
	char show_map[MAX_ROW][MAX_COL] = { 0 };
	char mine_map[MAX_ROW][MAX_COL] = { 0 };
	//2.将两个数组初始化
	Init(show_map, mine_map);
	//打印地图
	PrintMap(show_map);
	
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