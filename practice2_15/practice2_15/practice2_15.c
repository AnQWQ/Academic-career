#define _CRT_SECURE_NO_WARNINGS 
//�������֤������һ����18λ������ɵ���������룬
//������˳�����������Ϊ6λ���ֵ�ַ�롢8λ���ֳ��������롢
//3λ����˳�����1λ����У���루У������Ϊ10�����ַ���X����ʾ����
//��д���򣬴Ӽ�������һ�����֤���룬�ɳ�������ú���ĸ������Ϣ��
#include <stdio.h>
int main()
{
	int addCode;
	int year, month, day;
	int seqNumber;
	char checkCode;
	printf("���������֤�ţ�");
	scanf("%6d%4d%2d%2d%3d%c", &addCode, &year, &month, &day, &seqNumber, &checkCode);
	
	printf("��ַ�룺%d\n", addCode);
	printf("�������£�%d��%d��%d��\n", year,month,day);
	printf("˳���룺%d\n", seqNumber);
	printf("�����룺%c\n", checkCode);
	return 0;
}