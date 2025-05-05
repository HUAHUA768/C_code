#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>//断言
//void my_strcpy(char* dest,char* src)
//{
//	while (*src != '\0')
//	{
//		*dest = *src;
//		dest++;
//		src++;
//		//可简化为后置++
//	}
//	*dest = *src;
//}

void my_strcpy(char* dest, const char* src)
{
	//断言
	assert(src != NULL);
	assert(dest != NULL);
	while (*dest++ = *src++)//赋值表达式，结果为h，e...\0
	{
		;//空语句
	}
}
int main()
{
	char arr1[20] = { 0 };
	char arr2[] = "hello hh";
	char* p = NULL;
	my_strcpy(arr1, arr2);
	printf("%s\n", arr1);
	system("pause");
	return 0;
}