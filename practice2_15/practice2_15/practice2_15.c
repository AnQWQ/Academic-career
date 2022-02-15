#define _CRT_SECURE_NO_WARNINGS 
//公民身份证号码是一种由18位数字组成的特征组合码，
//其排列顺序从左到右依次为6位数字地址码、8位数字出生日期码、
//3位数字顺序码和1位数字校验码（校验码若为10则用字符‘X’表示）。
//编写程序，从键盘输入一个身份证号码，由程序输出该号码的各组成信息。
#include <stdio.h>
int main()
{
	int addCode;
	int year, month, day;
	int seqNumber;
	char checkCode;
	printf("请输入身份证号：");
	scanf("%6d%4d%2d%2d%3d%c", &addCode, &year, &month, &day, &seqNumber, &checkCode);
	
	printf("地址码：%d\n", addCode);
	printf("出生年月：%d年%d月%d日\n", year,month,day);
	printf("顺序码：%d\n", seqNumber);
	printf("检验码：%c\n", checkCode);
	return 0;
}