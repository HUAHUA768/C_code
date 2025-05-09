#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <errno.h>
//struct S
//{
//	int n;
//	int arr[];//柔性数组
//};
//int main()
//{
//	//柔性数组的使用
//	struct S* ps = (struct S*)malloc(sizeof(struct S) + 40);
//	if (ps == NULL)
//	{
//		printf("%s", strerror(errno));
//		return 1;
//	}
//	int i = 0;
//	ps->n = 100;
//	for (i = 0; i < 10; i++)
//	{
//		ps->arr[i] = i;
//	}
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", ps->arr[i]);
//	}
//	//扩容
//	struct S* str = (struct S*)realloc(ps, sizeof(struct S) + 80);
//	if (str != NULL)
//	{
//		ps = str;
//		str = NULL;
//	}
//	//别忘了释放
//	free(ps);
//	ps = NULL;
//	system("pause");
//	return 0;
//}

struct S
{
	int n;
	int* arr;
};
int main()
{
	struct S* pc = (struct S*)malloc(sizeof(struct S));
	if (pc == NULL)
	{
		printf("%s\n", strerror(errno));
		return 1;
	}
	pc->n = 100;
	pc->arr = (int*)malloc(40);
	if (pc->arr == NULL)
	{
		//...
		return 1;
	}
	//使用
	int i = 0;
	for (i = 0; i < 10; i++)
	{
		pc->arr[i] = i;
	}
	for (i = 0; i < 10; i++)
	{
		printf("%d ", pc->arr[i]);
	}
	//扩容
	int* ptr = (int*)realloc(pc->arr, 80);
	if (ptr != NULL)
	{
		pc->arr = ptr;
	}
	

	//释放：malloc了两次，要释放两次
	free(pc->arr);
	pc->arr = NULL;
	free(pc);
	pc = NULL;

	//区别：动态开辟了一次和两次
	//第一种方案不容易出错
	//而且malloc多次会形成内存碎片
	return 0;
}