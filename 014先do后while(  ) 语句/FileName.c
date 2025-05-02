#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main()
{
	int i = 1;
	do
	{
		printf("%d ", i);
		i++;
	}
	while (i <= 10);  //while后面记得加上分号！
	system("pause");
	return 0;
}