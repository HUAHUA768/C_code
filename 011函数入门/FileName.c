#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
//用自定义函数add来求和
//Add是函数名，x和y是函数参数；大括号内是函数体，括号外的int是返回类型
Add(int x, int y)
{
	int z = 0;
	z = x + y;
	return z;
}  //可以简化为：return (x+y);
int main()
{
	int a, b;
	scanf("%d %d", &a, &b);
	int sum = Add(a, b);
	printf("%d\n", sum);
	system("pause");
	return 0;
}