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
	//a++���Ϊ0�����治���������

	i = a++ || ++b || ++d;
	//a++Ϊ�棬���治������
	printf("a=%d b=%d c=%d d=%d\n", a, b, c, d);
	//�ʽ���Ƕ���
	system("pause");
	return 0;
}