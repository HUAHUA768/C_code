#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int* test()
{
	int a = 10;
	return &a;
}
int main()
{
	int* pc = test();//野指针
	printf("%d\n", *pc);
	//为什么空间已经销毁了却还能打印出10呢？
	system("pause");
	return 0;
}