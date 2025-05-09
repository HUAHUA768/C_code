#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
void GetMemory(char** p)
{
	*p = (char*)malloc(100);
	//p是形参，函数调用完就销毁
	//所以存在内存泄漏
}
void test()
{
	char* str = NULL;
	GetMemory(&str);
	//p的改变不会影响str
	strcpy(str, "hello world");
	//str是空指针，解引用时会崩溃
	printf(str);
	//释放内存空间
	free(str);
	str = NULL;
}
int main()
{
	test();
	system("pause");
	return 0;
}