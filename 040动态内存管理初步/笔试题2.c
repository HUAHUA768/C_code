#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
char* GetMemory()
{
	//返回栈区空间的地址的问题，栈区都是临时变量
	char a[] = "hello world";
	return a;
}
void test()
{
	char* str = NULL;
	str = GetMemory();
	printf(str);
}
int main()
{
	test();
	system("pause");
	return 0;
}