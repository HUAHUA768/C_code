#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main()
{
	//�����Ǿ������ϵ�����
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
	//�ж�
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
				//������ѭ����һ��break����������ֱ��go to
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
	//���÷Ѿ�ȥ�㣬flag=1��NO��Ϊ0����
	//3*3 1+2
	//4*4 1+2+3
	system("pause");
	return 0;
}