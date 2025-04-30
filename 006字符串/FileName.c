#define CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main()
{
	
	printf("%s\n", "abc"); //打印字符串用%s，字符串用双引号引起来
	double a = 1526.33;
	printf("%e\n", a); //科学计数法
	/*char ch = 'A';
	putchar(ch);*/
	double c = 3.1415;
	printf("%10.4lf\n",c);
	int d = 12;
	printf("%d\n", d);
	printf("%4d\n", d);
	//%4d同理
	printf("%-4d\n", d);
	printf("%04d\n", d); //占4位，空的位用0补齐
	system("pause");
	return 0;
}