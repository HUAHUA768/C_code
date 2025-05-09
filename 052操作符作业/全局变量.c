#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int i;
int main()
{
	i--;
	if (i > sizeof(i)) //-1>4?  4是无符号整型，-1会被转化成无符号整型，32个1
	{
		printf(">\n");
	}
	else
	{
		printf("<\n");
	}
	system("pause");
	return 0;
}