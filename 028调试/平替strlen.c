#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
int my_strlen(const char* str)//const��֤�����ڲ��޷��޸���������
{
	assert(str);//��ֹ��ָ��
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