#define _CRT_SECURE_NO_WARNINGS
//�Ӽ�������4��������Ҫ��������е����ֵ����Сֵ����ʹ�������������

#include <stdio.h>
int main()
{
	int a, b, c, d;
	printf("������4��������");
	scanf("%d%d%d%d", &a, &b, &c, &d);
	printf("min:%d\n", ((a < b ? a : b) < c ? (a < b ? a : b) : c) < d ? ((a < b ? a : b) < c ? (a < b ? a : b) : c) : d);
	printf("max:%d\n", ((a > b ? a : b) > c ? (a > b ? a : b) : c) > d ? ((a > b ? a : b) > c ? (a > b ? a : b) : c) : d);
	return 0;
}