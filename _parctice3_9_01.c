#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
//��ÿ��8������ʽ���100-999���ڵ�����
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
