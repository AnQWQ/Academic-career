#define _CRT_SECURE_NO_WARNINGS
//����һ��3λ������������λ���������������
#include <stdio.h>
int main()
{
	int a;
	int x, y, z;
	int n;
	do
	{
		printf("������һ��3λ��������");
		scanf("%d", &a);
		if (a < 0 || a>999)
		{
			printf("�������\n");
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