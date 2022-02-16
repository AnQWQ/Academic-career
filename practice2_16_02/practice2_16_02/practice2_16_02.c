#define _CRT_SECURE_NO_WARNINGS
//输入一个华氏温度，输出其对应的摄氏温度，保留两位小数
#include <stdio.h>
int main()
{
	double F, C;
	printf("请输入一个华氏温度：");
	scanf("%lf", &F);
	C = 5.0 / 9*(F - 32);
	printf("%.2lf", C);
	return 0;
}