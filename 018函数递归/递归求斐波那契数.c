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
	//当n很大时，运算速度会很慢；这时候写循环（非递归更好）
	//不会产生大量重复的计算
	system("pause");
	return 0;
}