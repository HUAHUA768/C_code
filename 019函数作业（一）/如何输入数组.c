#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main()
{
	//用循环来输入数组
	int arr[10] = { 0 };
	int i = 0;
	for (i = 0; i < 10; i++)
	{
		scanf("%d", &arr[i]);
	}
	int max = arr[0];
	for (i = 1; i < 10; i++)
	{
		if (arr[i] > max)
			max = arr[i];
	}
	printf("%d", max);
	system("pause");
	return 0;
}