#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main08()
{
	/*int a = 3;
	int b = 5;
	int c = a && b;
	printf("%d\n", c);*/

	int i = 0, a = 1, b = 2, c = 3, d = 4;
	/*i = a++ && ++b && ++d;*/
	//a++结果为0，后面不会继续运算

	i = a++ || ++b || ++d;
	//a++为真，后面不用算了
	printf("a=%d b=%d c=%d d=%d\n", a, b, c, d);
	//问结果是多少
	system("pause");
	return 0;
}