#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>

//���޻���Ⱦ���ˡ�һ�����޻�ÿ�ִ�Ⱦx�����ޡ�����n�ִ�Ⱦ���ж������ޱ���Ⱦ��
int main(){
	int x = 0;
	int n = 0;
	int tmp = 0;
	int sum = 1;
	scanf("%d %d", &x, &n);
	for (int i = 0; i < n; i++){
		tmp = sum + sum * 10;
		sum = tmp;
	}
	printf("%d\n", sum);
	system("pause");
	return 0;
}