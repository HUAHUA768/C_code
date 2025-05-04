#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "add.h"
//包含头文件的本质是把头文件拷贝过来

//函数的声明与定义
//函数的声明：当函数的定义放在main函数后面时，需要声明

//函数的声明放到头文件add.h
//函数的定义放到add.c
//在主程序中调用头文件即可使用函数


int main()
{
	int x, y;
	scanf("%d %d", &x, &y);
	int z = add(x, y);
	printf("%d", z);
	system("pause");
	return 0;
}
