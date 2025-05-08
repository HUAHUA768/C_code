#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main()
{
	//const char* p = "abcdef";//把首字符a的地址赋值给了p
	//printf("%s\n", p);

	const char* p1 = "abcdef";
	const char* p2 = "abcdef";
	char arr1[] = "abcedf";
	char arr2[] = "abcedf";
	if (p1 == p2)
	{
		printf("p1==p2\n");
	}
	else
		printf("p1!=p2");

	if (arr1 == arr2)
	{
		printf("arr1==arr2\n");
	}
	else
		printf("arr1!=arr2\n");
	system("pause");
	return 0;
}