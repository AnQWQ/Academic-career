#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
//以每行8个的形式输出100-999以内的质数
int main()
{
	int i, j, k = 0;
	for (i = 100;  i < 999; i++)
	{
		for (j = 2; j < sqrt(i); j++)
		{
			if (i % j == 0)
			{
				
				break;
			}
		}
		if (j > sqrt(i))
		{
			printf("%d %s", i, k++ == 7 ? k = 0, "\n" : "");
		}
	}
	return 0;
}
