#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main()
{
	//int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
	////打印数组每个元素的地址
	//int i = 0;
	//for (i = 0; i < 10; i++)
	//{
	//	printf("&arr[%d] = %p\n", i,&arr[i]);
	//	//数组在内存中是连续存放的
	//}

	//1 2 3 4
	//3 4 5 6
	//4 5 6 7
	//int arr1[3][4] = { 1,2,3,4,3,4,5,6,4,5,6,7 };
	////没给够的元素空位用0补齐
	//int arr2[3][4] = { {1,2},{3,4},{5,6} };//手动分组

	int arr[][3] = { {1,2},{4,5} };//可以省略行但是不能省略列
	system("pause");
	return 0;
}