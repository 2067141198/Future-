#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>

//����������
//����һ����λ��a1a2a3a4a5 �ɽ�����Ϊ����������sub1=a1a2a3, sub2=a2a3a4, sub3=a3a4a5
//���ڸ���һ��������K��Ҫ���������10000��30000֮����������������������λ������������Щ��λ������������sub1, sub2, sub3���ɱ�K������
int main1(){
	int k = 0;
	scanf("%d", &k);
	int i = 0;
	int sub1 = 0;
	int sub2 = 0;
	int sub3 = 0;
	for (i = 10000; i <= 30000; i++){
		sub1 = i / 100;
		sub2 = (i / 10) % 1000;
		sub3 = i % 1000;
		if ((sub1 % k == 0) && (sub2 % k == 0) && (sub3 % k == 0)){
			printf("%d\n", i);
		}
	}
	system("pause");
	return 0;
}