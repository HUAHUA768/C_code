#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main02()
{
	int a, b;
	scanf("%d %d", &a, &b);
	while (a % b)
	{
		int c = a % b;
		a = b;
		b = c;
	}
	printf("%d", b);
	//����С��������a*b/���Լ��
	system("pause");
	return 0;
}