#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main()
{
	char str[] = "hello bit";
	printf("%d\n", strlen(str));
	//strlen�����ո�Ĵ�С
	printf("%d\n", sizeof(str));
	//sizeof�����ո��\0�Ĵ�С
	system("pause");
	return 0;
}