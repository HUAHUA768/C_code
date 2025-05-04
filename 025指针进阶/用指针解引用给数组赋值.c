#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main()
{
	int arr[10] = { 0 };
	int i = 0;
	int* p = arr;//arr本身是地址名
	for (i = 0; i < 10; i++)
	{
		*p = 1;
		p++;
	}
	for (i = 0; i < 10; i++)
	{
		printf("%d ", arr[i]);
	}
	system("pause");
	return 0;
}