#define _CRT_SECURE_NO_WARNINGS
//����һ�������¶ȣ�������Ӧ�������¶ȣ�������λС��
#include <stdio.h>
int main()
{
	double F, C;
	printf("������һ�������¶ȣ�");
	scanf("%lf", &F);
	C = 5.0 / 9*(F - 32);
	printf("%.2lf", C);
	return 0;
}