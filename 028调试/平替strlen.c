#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
int my_strlen(const char* str)//const保证函数内部无法修改数组内容
{
	assert(str);//防止空指针
	char* start = str;
	while (*str != '\0')
	{
		str++;
	}
	return str - start;
}
int main()
{
	char arr[] = "hello byte";
	int len = my_strlen(arr);
	printf("%d\n", len);
	system("pause");
	return 0;
}