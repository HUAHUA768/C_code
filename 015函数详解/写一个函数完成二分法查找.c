#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
//使用bool类型构建函数需要调用头文件
#include <stdbool.h>
//C99标准才支持bool
int binary_search(int arr[], int number, int sz)
//arr是一个指针变量，存了主函数中数组的地址，直接访问地址
// 数组传参实际上传的是数组首元素的地址
//形参和实参的名字可以相同，也可以不同
{
	//如果把sz放到函数里面来算？
	// 则sizeof(arr)求得不是数组总大小，而是指针变量的大小（即4or8）
	// int sz = sizeof(arr) / sizeof(arr[0]);
	int left = 0;
	int right = sz - 1;
	while (left <= right)
	{
		int mid = left + (right - left) / 2;
		if (arr[mid] < number)
		{
			left = mid + 1;
		}
		else if (arr[mid] > number)
		{
			right = mid - 1;
		}
		else
		{
			return mid;
		}
	}
	return -1;
}
int main()
{
	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
	//查找你所输入的数字
	int number = 0;
	int sz = sizeof(arr) / sizeof(arr[0]);
	scanf("%d", &number);
	int n = binary_search(arr, number, sz);
	if (n == -1)
	{
		printf("没找到\n");
	}
	else
	{
		printf("找到了，下标是%d\n", n);
	}
	system("pause");
	return 0;
}