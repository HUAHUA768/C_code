#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main01()
{
	//sizeof是一个操作符
	int arr[10] = { 0 };
	printf("%d\n", sizeof(arr));//整个数组的大小，单位字节
	printf("%d\n", sizeof(arr[0]));
	printf("%d\n", sizeof(arr) / sizeof(arr[0]));
	//算数组里面元素的个数

	int a = (int)3.14;
	printf("%d\n", a); //强制类型转换，舍掉小数部分

	system("pause");
	return 0;
}