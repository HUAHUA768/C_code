#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main()
{
	int arr[5] = { 0 };
	
	printf("请输入一组数字\n");
	int i = 0;
	int n = 0;
	for (i = 0; i < 5; i++)
	{
		scanf("%d", &arr[i]);
	}
	printf("请输入要删除的数字");
	scanf("%d", & n);
		//用不创建第二个数组的方式，删除数组中的指定数字
	int j = 0;
	for (i = 0; i < 5; i++)
	{
		if (arr[i] != n)
		{
			arr[j] = arr[i];
			j++;
			//也可以两行合成一行arr[j++]
		}
	}
	//若j=3，说明新数组一共有4个数字,∴写成i<j
	for (i = 0; i < j; i++)
	{
		printf("%d ", arr[i]);
	}
	system("pause");
	return 0;
}