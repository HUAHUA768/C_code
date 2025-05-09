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
//	//只有一个问题：没有进行动态内存的内存释放
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
	//解决方法
	//str=NULL;
	if (str != NULL)
	{
		strcpy(str, "world");
		//野指针，非法访问已经释放的内存空间
		printf(str);
	}
}


int main()
{
	test();
	return 0;
}