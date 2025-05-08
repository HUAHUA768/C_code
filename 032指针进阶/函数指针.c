#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int Add(int a, int b)
{
	return a + b;
}
int main()
{
	//如何存储函数的地址
	int (*pf)(int, int) = &Add;

	//函数的地址有什么用
	/*int ret=(*pf)(2, 3);*/
	/*int ret = Add(2, 3);*/

	//函数名表示地址
	//通过指针名调用函数可以省略*
	int ret = pf(2, 3);
	printf("%d\n", ret);
	system("pause");
	return 0;
}