#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int judge1(int x)
{
	if (x % 4 == 0 && x % 100 != 0 || x % 400 == 0)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}
int main03()
{
	int i = 1000;
	for (i = 1000; i <= 2000; i++)
	{
		if (judge1(i))
		{
			printf("%d ", i);
		}
		
	}
	system("pause");
	return 0;
}