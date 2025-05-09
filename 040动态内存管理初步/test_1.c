#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <errno.h>

//malloc
//int main()
//{
//	//动态内存开辟
//	int* p = (int*)malloc(40);
//	if (p ==  NULL)
//	{
//		printf("%s\n", strerror(errno));
//		return 1;//1表示不正常返回
//	}
//
//	int i = 0;
//	/*for (i = 0; i < 10; i++)
//	{
//		*(p + i) = i;
//	}*/
//
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d\n", *(p + i));
//	}
//
//	free(p);//释放空间
//	system("pause");
//	return 0;//返回0表示正常返回
//}

//calloc
//int main()
//{
//	int* p = (int*)calloc(10, sizeof(int));
//	if (p == NULL)
//	{
//		printf("%s\n", strerror(errno));
//		return 1;
//	}
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", *(p + i));
//	}
//	free(p);
//	p = NULL;
//
//	return 0;
//}


//realloc
int main()
{
	int* p = (int*)malloc(40);
	if (p == NULL)
	{
		printf("%s\n", strerror(errno));
		return 1;
	}
	int i = 0;
	for (i = 0; i < 10; i++)
	{
		*(p + i) = i + 1;
	}

	//扩容
	int* ptr = (int*)realloc(p, 80);
	if (ptr != NULL)
	{
		p = ptr;
	}

	//使用
	for (i = 0; i < 10; i++)
	{
		printf("%d ", *(p + i));
	}

	free(p);
	p = NULL;
	return 0;
}