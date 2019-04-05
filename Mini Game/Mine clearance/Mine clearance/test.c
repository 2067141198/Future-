#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>

#define MAX_ROW 9
#define MAX_COL 9
#define MINE_COUNT 10

void Init(char show_map[MAX_ROW][MAX_COL],
	char mine_map[MAX_ROW][MAX_COL]){
	//1.��show_map[][]��ʼ��Ϊ*
	for (int row = 0; row < MAX_ROW; ++row){
		for (int col = 0; col < MAX_COL; ++col){
			show_map[row][col] = '*';
		}
	}
	//2.�Ƚ�mine_map��ʼ��Ϊ'0'
	for (int row = 0; row < MAX_ROW; ++row){
		for (int col = 0; col < MAX_COL; ++col){
			show_map[row][col] = '*';
		}
	}
	//3.�������ʮ������
	int mine_count = MINE_COUNT;
	while (mine_count > 0){
		//�����������
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
	//1.��������ά������
	char show_map[MAX_ROW][MAX_COL] = { 0 };
	char mine_map[MAX_ROW][MAX_COL] = { 0 };
	//2.�����������ʼ��
	Init(show_map, mine_map);
	//��ӡ��ͼ
	PrintMap(show_map);
	
}

int Menu(){
	printf("==========================\n");
	printf("        1.��ʼ��Ϸ        \n");
	printf("        0.�˳���Ϸ        \n");
	printf("==========================\n");
	printf("���������ѡ��:");
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
			printf("�������������ѡ��!\n");
		}
	}
	system("pause");
	return 0;
}