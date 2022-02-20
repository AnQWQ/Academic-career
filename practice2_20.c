#define _CRT_SECURE_NO_WARNINGS
//从键盘上输入一个字符，
//如果是大写字母，则转换成小写字母，
//如果是小写字母，转换成大写字母，
//如果为数字字符，转换成该数字所对应的数值的平方，
//否则原样输出。
#include <stdio.h>
#include <math.h>
int main()
{
	char n=0;
	scanf("%c", &n);
	if (65 <= n && n <= 90)
		printf("%c\n", n + 32);
	else if (97 <= n && n <= 122)
		printf("%c\n", n - 32);
	else if (48 <= n && n <= 57)
	{
		int a = n - '0';
		printf("%d\n", a * a);
	}
	else
		printf("%c\n",n);
	return 0;
}