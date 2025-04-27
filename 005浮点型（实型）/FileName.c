#define CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main()
{
	float a = 3.1415926; 
	double b = 3.1415926;
	printf("%.7f\n", a);
	printf("%.7lf\n", b);
	//%f打印float,%lf打印double，默认打印6位小数点
	//%.7f输出七位小数点
	//float可以保证7位有效数字精确，double可以保证15位有效数字精确
	system("pause");
	return 0;
}