#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int MTPL(int n)
{
	if (n >= 1)
	{
		return n * MTPL(n - 1);
	}
}
int main()
{
	int ret = 0;
	int n = 0;
	scanf("%d", &n);
	ret = MTPL(n);
	printf("%d", ret);
	system("pause");
	return 0;
}