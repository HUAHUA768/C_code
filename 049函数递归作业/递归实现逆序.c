#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
//void reverse(char *arr)
//{
//	char tmp = *arr;  
//	int len = strlen(arr);   //len=6
//	*arr = *(arr + len - 1);
//	*(arr + len - 1) = '\0'; //f bcde \0 \0
//	if (strlen(arr + 1) >= 2)
//	{
//		reverse(arr + 1);
//	}
//	*(arr + len - 1) = tmp;
//}
//int main()
//{
//	char arr[] = "abcdef";   //abcdef\0
//	//方法一：right/left交换（非递归）
//	//方法二：函数递归+单个参数
//	//是倒置，不是逆序打印，数组本身已经发生了改变
//	//方法三：函数递归+多个参数
//	reverse(arr);
//	printf("%s\n", arr);
//	system("pause");
//	return 0;
//}
  


//方法三：更好理解的（无需用\0占位）

//void reverse(char arr[], int left, int right)
//{
//	char tmp = arr[left];
//	arr[left] = arr[right];
//	arr[right] = tmp;
//	if (left < right)
//	{
//		reverse(arr, left + 1, right - 1);
//		//原理跟方法一循环差不多
//	}
//	
//}

//bug更正版
void reverse(char arr[], int left, int right)
{
	
	if (left < right)
	{
		char tmp = arr[left];
		arr[left] = arr[right];
		arr[right] = tmp;
		reverse(arr, left + 1, right - 1);
		//原理跟方法一循环差不多
	}
	
}
int main()
{
	char arr[] = "abcdef";
	int left = 0;
	int right = 0;
	right = strlen(arr) - 1;
	reverse(arr, left, right);
	printf("%s\n",arr);
	return 0;
}