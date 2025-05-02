#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main01()
{
	char arr[] = { 'h','i','t' };
	printf("%d\n", strlen(arr));  //strlen求长度，strlen遇到'0'才会停下来
	//而数组内存大小未知，故strlen是随机值
	char arr1[4] = { 'h','i','t' };
	printf("%d\n", strlen(arr1));//不完全初始化，剩余的部分默认初始化为0
	//若[ ]内为8？后面都是0，结果还是3
	system("pause");
	return 0;
}