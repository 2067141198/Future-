#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>

//int PrintHours(int a, int b, int c, int d)
//{
//	if (b <= d)
//		return c - a;
//	return c - a - 1;
//}
//PrintMin(a, b, c, d)
//{
//	if (b <= d)
//		return d - b;
//	return d + 60 - b;
//}
//int main()
//{
//	int a, b, c, d;
//	while (1)
//	{
//		scanf("%d%d%d%d", &a, &b, &c, &d);
//		if (b >= 60 || d >= 60 || a >= 24 || c >= 24)
//		{
//			printf("ʱ��������������������:>\n");
//		}
//		else if (c <= a && d < b)
//		{
//			printf("����ʱ�䲻�����ڿ�ʼʱ�䣬����������:>\n");
//		}
//		else
//		{
//			break;
//		}
//	}
//	int ph = PrintHours(a, b, c, d);
//	int pm = PrintMin(a, b, c, d);
//	printf("%d %d\n", ph, pm);
//	system("pause");
//	return 0;
//}