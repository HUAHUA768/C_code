#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int zhishu(int x)
{
	if (x == 1)
		return 0;
	else if (x == 2)
		return 1;
	else 
	{
		int i = 2;
		while (i < x)
		{
			if (x % i == 0)
			{
				return 0;
				break;
			}
			else
			{
				i++;
				if (x == i)
				{
					return 1;
					break;
				}
				else
					continue;
			}
			
		}
	}
}
//简单不烧脑的另一种方法
int judge(int x)
{
	int flag = 1;
	int i = 0;
	if (x == 1)
		return 0;
	if (x == 2)
		return 1;
	for (i = 2; i < x; i++)
	{
		if (x % i == 0)
		{
			flag = 0;
			break;
		}
	}
	if (flag == 1)
		return 1;
	else
		return 0;
}
int main02()
{
	int number = 0;
	scanf("%d", &number);
	if (judge(number))
	{
		printf("%d是一个质数\n", number);
	}
	else
	{
		printf("%d不是一个质数\n", number);
	}
	system("pause");
	return 0;
}