#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
void GetMemory(char** p)
{
	*p = (char*)malloc(100);
	//p���βΣ����������������
	//���Դ����ڴ�й©
}
void test()
{
	char* str = NULL;
	GetMemory(&str);
	//p�ĸı䲻��Ӱ��str
	strcpy(str, "hello world");
	//str�ǿ�ָ�룬������ʱ�����
	printf(str);
	//�ͷ��ڴ�ռ�
	free(str);
	str = NULL;
}
int main()
{
	test();
	system("pause");
	return 0;
}