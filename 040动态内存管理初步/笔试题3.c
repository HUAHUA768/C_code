#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
//void GetMemory(char** p, int num)
//{
//	*p = (char*)malloc(num);
//}
//void test()
//{
//	char* str = NULL;
//	GetMemory(&str, 100);
//	strcpy(str, "hello");
//	printf(str);
//	//ֻ��һ�����⣺û�н��ж�̬�ڴ���ڴ��ͷ�
//}
//int main()
//{
//	test();
//	system("pause");
//	return 0;
//}

void test()
{
	char* str = (char*)malloc(100);
	strcpy(str, "hello");
	free(str);
	//�������
	//str=NULL;
	if (str != NULL)
	{
		strcpy(str, "world");
		//Ұָ�룬�Ƿ������Ѿ��ͷŵ��ڴ�ռ�
		printf(str);
	}
}


int main()
{
	test();
	return 0;
}