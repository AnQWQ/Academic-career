#define _CRT_SECURE_NO_WARNINGS
//���Fibonacci���е�ǰn�Fibonacci���еļ��㷽ʽ���£�
//	  {	1			n=1.2
// Fn={
//    { Fn-1+Fn-2	n>=3 
#include <stdio.h>
#define n 20
int main()
{
	int arr[n] = {1,1};
	int i = 0;
	for (i = 2; i < n; i++)
	{
		arr[i] = arr[i - 1] + arr[i - 2];
	}
	for (i = 0; i < n; i++)
	{
		printf("%d ", arr[i]);
	}
	return 0;
}