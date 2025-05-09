#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main02()
{
	int arr[] = { 0,1,2,3,4,5,6,7,8,9 };
	//在有序数组中查找数字7
	int a = 17;
	int i = 0;
	int sz = sizeof(arr) / sizeof(arr[0]);
	while (i <sz)
	{
		if (arr[i] == a)
		{
			printf("找到了，下标是：%d\n", i);
		}
		i++;
	}
	if (i == sz)
		printf("没找到\n");

	system("pause");
	return 0;
}