#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
//int mystrlen(char str[])参数部分写成数组的形式
//int mystrlen(char* n)  //接收arr首字符的地址，参数部分写成指针的形式
//{
//	int count = 0; //计数，临时变量
//	while (*n != '\0')
//	{
//		count++; 
//		n++; //找下一个字符
//	}
//	return count;
//}

//用递归求解
int mystrlen(char* str)
{
	if (*str != '\0')
	{
		return 1 + mystrlen(str + 1);
	}
	else
	{
		return 0;
	}
}
int main02()
{
	char arr[] = "abc";
	int len = mystrlen(arr);
	printf("%d\n", len);
	system("pause");
	return 0;
}