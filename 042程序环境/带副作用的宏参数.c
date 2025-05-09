#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define MAX(a,b) ((a)>(b)?(a):(b))

#define MALLOC(num,type) (type*)malloc((num)*sizeof(type))
int main()
{
	//int a = 5;
	//int b = 4;
	//int m = MAX(a++,b++);
	////(a++)>(b++)?(a++):(b++)
	////5>4 a=6 b=5
	////结果为a++，先赋值后++，则m=6，a=7
	////结果，m=6,a=7,b=5
	//printf("m=%d\n", m);
	//printf("a=%d b=%d\n", a,b);

	//malloc总是需要人工计算总字节数，太麻烦了，怎么办？
	int* p = MALLOC(10, int);
	//宏魅力时刻
	system("pause");
	return 0;
}