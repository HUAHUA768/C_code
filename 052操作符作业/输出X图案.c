#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main()
{
	//����n����������������б�߳���
	//����һ����ά���飬��б��i=jʱ��*����б��i+j=4����n-1��ʱ��*
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