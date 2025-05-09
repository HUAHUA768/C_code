//小乐乐走台阶
//斐波那契数列
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int fib(int n)
{
	if (n <= 2)
	{
		return n;
	}
	else
		return fib(n - 1) + fib(n - 2);
}
int main()
{
	int n = 0;
	scanf("%d", &n);
	int m = fib(n);
	printf("%d", m);

	return 0;
}