#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
//理解此代码
int sum(int a)
{
	int c = 0;
	static int b = 3;  //static,b保留上一次循环的值
	c += 1;
	b += 2;
	return (a + b + c);
}
int main01()
{
	int a = 2;
	int i = 0;
	while (i < 10)
	{
		printf("%d\n", sum(a));
		i++;
	}
	system("pause");
	return 0;
}