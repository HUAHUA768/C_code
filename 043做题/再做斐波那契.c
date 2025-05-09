#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
//输入一个数N，位于某两个斐波那契数之间，求二者谁离得近，并输出步数
//N在1~100000之间
//abs求绝对值，需要库函数<math.h>
//int f(int n)
//{
//	if (n == 0)
//		return 0;
//	else if (n == 1)
//		return 1;
//	else
//		return (f(n - 1) + f(n - 2));
//}
int main()
{
	int n = 0;
	scanf("%d", &n);
	int a = 0;
	int b = 1;
	while (1)
	{
		if (n == b)
		{
			printf("0\n");
			break;
		}
		else if (n < b)
		{
			if (abs(a - n) > abs(b - n))
			{
				printf("%d\n", abs(b - n));
			}
			else
			{
				printf("%d\n", abs(a - n));
			}
			break;
		}
		int c = a + b;
		a = b;
		b = c;
	}
	system("pause");
	return 0;
}