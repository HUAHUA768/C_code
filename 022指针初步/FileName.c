#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main()
{
	int a = 10;
	//���ַ
	int* p = &a;
	//p����ָ�����
	printf("%zu\n", sizeof(short*));
	printf("%zu\n", sizeof(char*));
	printf("%zu\n", sizeof(int*));
	printf("%zu\n", sizeof(float*));
	printf("%zu\n", sizeof(double*));
	system("pause");
	return 0;
}