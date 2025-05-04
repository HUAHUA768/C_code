#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main()
{
	int a = 0;
	int* pa = &a;
	*pa = 20;//pa也是一个变量，一级指针
	printf("%d\n", a);
	int** ppa = &pa;//二级指针
	//如何通过ppa找到a？
	**ppa = 30;
	printf("%d\n", a);
	system("pause");
	return 0;
}