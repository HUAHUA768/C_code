#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
char* GetMemory()
{
	//����ջ���ռ�ĵ�ַ�����⣬ջ��������ʱ����
	char a[] = "hello world";
	return a;
}
void test()
{
	char* str = NULL;
	str = GetMemory();
	printf(str);
}
int main()
{
	test();
	system("pause");
	return 0;
}