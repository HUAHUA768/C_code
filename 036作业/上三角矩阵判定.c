#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main()
{
	//上三角矩阵：左上到右下
	//1 2 3
	//0 4 5
	//0 0 6
	int n = 0;//n<=10
	int i = 0;
	int j = 0;
	scanf("%d", &n);
	int arr[10][10] = { 0 };
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < n; j++)
		{
			scanf("%d", &arr[i][j]);
		}
	}
	/*int sum = 0;
	for (i = 1; i < n; i++)
	{
		sum += i;
	}*/
	//判断
	int flag = 1;
	for (i = 1; i < n; i++)
	{
		for (j = 0; j < i; j++)
		{
			if (arr[i][j] != 0)
			{
				flag = 0;
				goto end;
				/*break;*/
				//有两层循环，一次break不够，我们直接go to
			}
		}
	}
	end:
	if (flag == 1)
	{
		printf("AMD YES\n");
	}
	else
	{
		printf("NO\n");
	}
	/*if (flag == sum)
	{
		printf("AMD YES\n");
	}*/
	//不用费劲去算，flag=1，NO改为0即可
	//3*3 1+2
	//4*4 1+2+3
	system("pause");
	return 0;
}