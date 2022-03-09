#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//用1元5角钱兑1分、2分和5分的硬币100枚，
//每种面值至少一个，请输出所有的兑换方案，并统计方案的总数。
int main()
{
	int i, j, k, a = 0;
	for (i = 1; i < 150; i++)
	{
		for (j = 1; j < 75; j++)
			for (k = 1; k < 30; k++)
			{
				if (i + j + k == 100 && i + 2 * j + 5 * k == 150)
				{
					printf("%d个1分，%d个2分，%d个5分\n", i, j, k);
					a++;
				}

			}
	}
	printf("%d\n", a);
	return 0;
}