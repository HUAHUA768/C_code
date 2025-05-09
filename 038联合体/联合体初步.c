#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int check_sys()
{
	union Un
	{
		int a;
		char b;
	}u;
	u.a = 1;
	return u.b;
}

int main()
{
	int ret = check_sys();
	if (ret == 1)
	{
		printf("Ð¡¶Ë\n");
	}
	else
	{
		printf("´ó¶Ë\n");
	}
	system("pause");
	return 0;
}