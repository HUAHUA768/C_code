#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int compare(int x, int y)
{
	if (x > y)
	{
		return x;
	}
	else
	{
		return y;
	}
}
int main()
{
	/*int n = 10;
	int arr[n] = { 0 };
	报错，不可为变量*/
	//C99标准之前，数组的大小都是用常量或者常量表达式来指定
	//C99标准之后，支持了变长数组，这个时候允许数组的大小是变量，
	// 但是这种指定方式是不能初始化的
	//初始化就是给{}放入原始数组，vs不支持C99语法中变长数组

	//写一个函数输出两个数的较大值
	int a, b;
	scanf("%d %d", &a, &b);
	int c = compare(a, b);
	printf("%d\n", c);

	system("pause");
	return 0;
}