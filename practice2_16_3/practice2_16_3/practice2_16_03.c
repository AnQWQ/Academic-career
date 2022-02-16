#define _CRT_SECURE_NO_WARNINGS
//输入一个3位正整数，安数位的逆序输出该数。
#include <stdio.h>
int main()
{
	int a;
	int x, y, z;
	int n;
	do
	{
		printf("请输入一个3位正整数：");
		scanf("%d", &a);
		if (a < 0 || a>999)
		{
			printf("输入错误\n");
		}
	} while (a<0||a>999);
	x = a % 10;
	a /= 10;
	y = a % 10;
	a /= 10;
	z = a % 10;
	n = x * 100 + y * 10 + z;
	printf("%d\n", n);

	return 0;
}