#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
void bubble_sort(int arr[], int sz)
{
	//n个元素，n-1趟排序
	int i = 0;
	int j = 0;
	//如果数组已经不需要排序了呢？如何优化算法？
	int flag = 1;
	//如果第一趟过后，flag依然为1，说明不需要排序，循环终止
	for (i = 0; i < sz - 1; i++)
	{
		for (j = 0; j < sz - 1 - i; j++)
		{
			if (arr[j] > arr[j + 1])
			{
				int tmp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = tmp;
				flag = 0;
			}
		}
		if (flag == 1)
		{
			break;
		}
	}
}




//qsort指定格式的函数
int cmp_int(const void* e1, const void* e2)
{
	return (*(int*)e1 - *(int*)e2);
	//返回正数就调换，返回0和负数不调换
}
int main()
{
	int arr[] = { 9,8,7,6,5,4,3,2,1,0 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	int i = 0;
	/*bubble_sort(arr,sz);*/  


	//用qsort怎么写
	//起始位置+元素个数+单个元素的大小（字节）+特定格式的函数的地址（函数名）
	//特定格式即 int (*cmp) (const void* e1,const void* e2)
	qsort(arr, sz, sizeof(arr[0]), cmp_int);
	for (i = 0; i < sz; i++)
	{
		printf("%d ",arr[i]);
	}

	
	system("pause");
	return 0;
}