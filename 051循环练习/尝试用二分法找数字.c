#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main03()
{
	int arr[] = { 1,2,3,4,5,6,7,8,9 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	int left = 0;
	int right = sz - 1;
	int mid;
	int k = 8;
	while (left <= right)
	{
		mid= (left + right) / 2;
		//用mid=left+(right-left)/2可以防止数值溢出
		if (arr[mid] < k)
		{
			left = mid + 1;
		}
		else if (arr[mid] > k)
		{
			right = mid - 1;
		}
		else
		{
			printf("找到了，下标是：%d\n", mid);
			break;  //别忘了跳出循环
		}
	}
	if (left > right)
	{
		printf("没找到\n");
	}

	system("pause");
	return 0;
}