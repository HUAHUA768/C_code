#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
void print(unsigned  int n)
{
	if (n > 9)
	{
		print(n / 10);
	}
	printf("%d ", n%10);
}
int main01()
{
	//����1234ÿһλ
	//�ݹ��ʵ��
	unsigned int num = 0;
	scanf("%u", &num);
	print(num);
	system("pause");
	return 0;
}
