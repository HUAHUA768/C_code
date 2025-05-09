#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
void bubble_sort(int arr[],int sz)
//数组应该使用指针来接收，所以arr这里看似是数组，本质上是指针变量
{
	//int sz = sizeof(arr) / sizeof(arr[0]); //8/4=2,循环只进了1次
	//解决：先在外面把sz算好，然后传给形参接收
	int i = 0;
	for (i = 0; i < sz - 1; i++)
	{
		int j = 0;
		for (j = 0; j < sz - 1 - i; j++)
		{
			if (arr[j] > arr[j + 1])
			{
				int tmp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = tmp;
			}
		}
	}
}
int main()
{
	int arr[] = { 9,8,7,6,5,4,3,2,1,0 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	//用冒泡排序排成升序
	bubble_sort(arr,sz);
	//数组名本质上是，数组首元素的地址
	int i = 0;
	
	for (i = 0; i < sz; i++)
	{
		printf("%d ", arr[i]);
	}
	system("pause");
	return 0;
}