#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main()
{
	int a[5][5];
	int (*p)[4];
	p = a;//a是首行地址，类型是int(*)[5],与p类型不相同，编译器会有警告
	printf("%p,%d\n", &p[4][2] - &a[4][2], &p[4][2] - &a[4][2]);
	system("pause");
	return 0;
}