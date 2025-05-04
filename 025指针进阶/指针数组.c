#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main()
{
	int a = 10;
	int b = 20;
	int c = 30;
	//指针数组：用来存放指针的数组
	int* parr[10] = { &a,&b,&c };
	int i = 0;
	/*for (i = 0; i < 10; i++)
	{
		printf("%p\n", parr[i]);
	}*/

	//通过指针数组里的元素访问原变量存放的值
	for (i = 0; i < 3; i++)
	{
		printf("%d  ", *(parr[i]));
	}
	system("pause");
	return 0;
}