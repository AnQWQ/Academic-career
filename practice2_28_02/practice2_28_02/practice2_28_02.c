#define _CRT_SECURE_NO_WARNINGS
//���1-50���ڵ����й�������
#include <stdio.h>
int main()
{
	int i, j, m;
	for (i = 1; i <= 50; i++)
	{
		for (j = 2; j < i; j++)
		{
			for (m = 3; m < j; m++)
			{
				if (m*m+j*j==i*i)
				{
					printf("%d %d %d\n", m, j, i);
				}
			}
		}
	}

	return 0;
}