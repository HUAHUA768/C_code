#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main()
{
	char str[] = "hello bit";
	printf("%d\n", strlen(str));
	//strlen会计入空格的大小
	printf("%d\n", sizeof(str));
	//sizeof会计入空格和\0的大小
	system("pause");
	return 0;
}