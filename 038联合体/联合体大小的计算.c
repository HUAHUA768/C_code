#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
union Un
{
	char arr[5];//5
	int a;//4
};
int main()
{
	printf("%d\n", sizeof(union Un));//8
	system("pause");
	return 0;
}