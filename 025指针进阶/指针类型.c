#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main()
{
	int a = 0x11223344;
	int* pa = &a;
	char* pc = &a;
	printf("pa=%p\n", pa);
	printf("pa+1=%p\n", pa+1);
	printf("pc=%p\n", pc);
	printf("pc+1=%p\n", pc+1);
	system("pause");
	return 0;
}