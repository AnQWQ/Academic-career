#define _CRT_SECURE_NO_WARNINGS
//从键盘输入4个整数，要求输出其中的最大值和最小值。（使用条件运算符）

#include <stdio.h>
int main()
{
	int a, b, c, d;
	printf("请输入4个整数：");
	scanf("%d%d%d%d", &a, &b, &c, &d);
	printf("min:%d\n", ((a < b ? a : b) < c ? (a < b ? a : b) : c) < d ? ((a < b ? a : b) < c ? (a < b ? a : b) : c) : d);
	printf("max:%d\n", ((a > b ? a : b) > c ? (a > b ? a : b) : c) > d ? ((a > b ? a : b) > c ? (a > b ? a : b) : c) : d);
	return 0;
}