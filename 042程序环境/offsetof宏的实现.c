#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stddef.h>
struct S 
{
	char c1;
	int i;
	char c2;
};

#define OFFSETOF(type,member) (size_t)(&(((type*)0)->member))
int main()
{
	struct S s = { 0 };
	//printf("%d\n", (int)offsetof(struct S, c1));//类型，成员
	//printf("%d\n", (int)offsetof(struct S, i));
	//printf("%d\n", (int)offsetof(struct S, c2));

	//模拟实现offsetof
	printf("%d\n", (int)OFFSETOF(struct S, c1));//类型，成员
	printf("%d\n", (int)OFFSETOF(struct S, i));
	printf("%d\n", (int)OFFSETOF(struct S, c2));
	system("pause");
	return 0;
}