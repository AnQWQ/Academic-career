#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//��1Ԫ5��Ǯ��1�֡�2�ֺ�5�ֵ�Ӳ��100ö��
//ÿ����ֵ����һ������������еĶһ���������ͳ�Ʒ�����������
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
					printf("%d��1�֣�%d��2�֣�%d��5��\n", i, j, k);
					a++;
				}

			}
	}
	printf("%d\n", a);
	return 0;
}