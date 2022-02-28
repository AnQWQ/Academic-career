#define _CRT_SECURE_NO_WARNINGS
//辗转相除法求a、b两个整数的最大公约数
#include <stdio.h>
int main()
{
	int a, b;
	int temp;
	int temp1;
	scanf("%d", &a);
	scanf("%d", &b);
	if (a < b)
	{
		temp = b;
		b = a;
		a = temp;
	}
	while (a%b)
	{
		temp1 = b;
		b = a % b;
		a = temp1;
	}
	printf("%d\n", b);
	return 0;
}