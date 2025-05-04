#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
//循环版
//int my_strlen(char* str)
//{
//	int count = 0;
//	while (*str != '\0')//解引用
//	{
//		count++;
//		str++;
//	}
//	return count;
//}
//2.递归版
//3.指针版
int my_strlen(char* str)//传参传的是字符串的地址
{
	char* start = str;
	while (*str != '\0')
	{
		str++;
	}
	return (str - start);
}
int main()
{
	/*int arr[10] = { 0 };
	printf("%d\n", &arr[9] - &arr[0]);*/
	//用此特性写自定义函数my_strlen来计算字符串长度
	int str = my_strlen("abcdefg");
	printf("%d\n", str);
	system("pause");
	return 0;
}