#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main()
{
	int a = 1;
	char* p = (char*)&a;
	if (*p == 1)
	{
		printf("С��\n");
	}
	else
	{
		printf("���\n");
	}
	system("pause");
	return 0;
}