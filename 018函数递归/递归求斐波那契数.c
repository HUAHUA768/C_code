#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int fib(int n)
{
	if (n <= 2)
		return 1;
	else
		return fib(n - 1) + fib(n - 2);
}
int main04()
{
	int n;
	scanf("%d", &n);
	int ret = fib(n);
	printf("%d\n", ret);
	//��n�ܴ�ʱ�������ٶȻ��������ʱ��дѭ�����ǵݹ���ã�
	//������������ظ��ļ���
	system("pause");
	return 0;
}