#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
//9999  /1000��ǧλ��/100%10�ð�λ��/10%10��ʮλ��%10�ø�λ
void print(int x)
{
	if (x > 9)
	{
		print(x / 10);
	}
	printf("%d ", x % 10);
}
int main()
{
	int n = 0;
	scanf("%d", &n);
	print(n);
	system("pause");
	return 0;
}