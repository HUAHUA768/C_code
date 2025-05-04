#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int fib1(int n)
{
	int a = 1;
	int b = 1;
	int c = 0;
	if (n == 1 || n == 2)
	{
		return 1;
	}
	else
	{
		while (n >= 3)
		{
			c = a + b;
			a = b;
			b = c;
			n--;
		}
		return c;
	}
}
int main()
{
	int n;
	scanf("%d", &n);
	int ret = fib1(n);
	printf("%d\n", ret);
	system("pause");
	return 0;
}