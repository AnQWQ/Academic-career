#define _CRT_SECURE_NO_WARNINGS
//�Ӽ���������һ���ַ���
//����Ǵ�д��ĸ����ת����Сд��ĸ��
//�����Сд��ĸ��ת���ɴ�д��ĸ��
//���Ϊ�����ַ���ת���ɸ���������Ӧ����ֵ��ƽ����
//����ԭ�������
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