#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main03()
{
	//int a = 3;
	//int b = 5;
	//printf("交换前a=%d b=%d\n", a, b);
	//b = a + b;
	//a = b - a;
	//b = b - a;
	//
	//printf("交换后a=%d b=%d\n", a, b);
	////如果a+b结果溢出呢？


	int a = 3;
	int b = 5;
	printf("交换前a=%d b=%d\n", a, b);
	a = a ^ b; //a=3^5
	b = a ^ b; //b=3^5^5=3
	a = a ^ b; //a=3^5^3=5
	//异或不会进位，不用担心溢出
	//3^3=0 a^a=0
	//011
	//011
	//000
	//0^5=5 0^a=a

	//3^3^5=5
	//3^5^3=5
	//异或支持交换律
	printf("交换后a=%d b=%d\n", a, b);
	
	system("pause");
	return 0;
}