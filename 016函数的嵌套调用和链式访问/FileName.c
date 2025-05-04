#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main()
{
	printf("%d", printf("%d", printf("%d", 43)));
	//理解为什么是4321
	//printf返回值是它打印的字符的个数
	system("pause");
	return 0;
}