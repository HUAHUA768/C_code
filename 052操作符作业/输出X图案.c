#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main()
{
	//输入n，代表行数和正反斜线长度
	//看成一个二维数组，正斜当i=j时是*，反斜当i+j=4（即n-1）时是*
	int n = 0;
	int i = 0;
	int j = 0;

	while (scanf("%d", &n) == 1)
	{
		for (i = 0; i < n; i++)
		{
			for (j = 0; j < n; j++)
			{
				if (i == j)
				{
					printf("*");
				}
				else if (i + j == n - 1)
				{
					printf("*");
				}
				else
				{
					printf(" ");
				}
			}
			printf("\n");
		}
	}
	system("pause");
	return 0;
}