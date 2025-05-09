#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main()
{
	//flag1和flag2，大于把flag1制成1，小于把flag2制成1，升序或降序，两者相加为1
	//N<=50
	int N = 0;
	scanf("%d", &N);
	int arr[50] = { 0 };
	int i = 0;
	//输入的时候顺便判断
	int flag1 = 0;
	int flag2 = 0;
	for (i = 0; i < N; i++)
	{
		scanf("%d", &arr[i]);
		//开始判断
		if (i > 0)
		{
			if (arr[i] > arr[i - 1])//升
			{
				flag1 = 1;
			}
			else if (arr[i] < arr[i - 1])
			{
				flag2 = 1;
			}
		}
	}
	if (flag1 + flag2 <= 1)//考虑1 1 1 1的情况，和为0
	{
		printf("是有序数列\n");
	}
	else
	{
		printf("无序数列\n");
	}
	system("pause");
	return 0;
}