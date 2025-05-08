#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
struct Stu
{
	char name[20];
	int age;
};
void Swap(char* buf1, char* buf2, int width)
{
	//不知道一个元素几个字节，所以逐个字节进行交换
	int i = 0;
	for (i = 0; i< width; i++)
	{
		char tmp = *(buf1 + i);
		*(buf1 + i) = *(buf2 + i);
		*(buf2 + i) = tmp; 
	}
}
//自己写qsort，暂且命名为bubble_sort
void bubble_sort(void* base, int sz, int width, int (*cmp)(const void* e1, const void* e2))
{
	int i = 0;
	int j = 0;
	//加个flag进一步优化代码
	int flag = 1;
	for (i = 0; i < sz - 1; i++)
	{
		for (j = 0; j < sz - 1 - i; j++)
		{
			//base不能直接+j
			//我们转成char*，再j*width决定要跳几个字节
			if (cmp((char*)base + j * width, (char*)base + (j + 1) * width )> 0)
			{
				//交换
				//不能简单地char tmp或者int tmp（万一是long或者long long或者别的呢）
				//保险起见，我们逐字节交换
				Swap((char*)base + j * width, (char*)base + (j + 1) * width, width);
				flag = 0;
			}

		}
		if (flag == 1)
		{
			break;
		}
	}
}
int cmp(const void* e1, const void* e2)
{
	return ((*(int*)e1) - (*(int*)e2));
}
int cmp_stu_by_name(const void* e1, const void* e2)
{
	//比较字符串大小应该用strcmp
	//strcmp的返回值是>0,0,<0
	//注意e1和e2是数组的元素（结构体）的指针
	return strcmp(((struct Stu*)e1)->name, ((struct Stu*)e2)->name);

}
//void test1()
//{
//	int i = 0;
//	int arr[] = { 9,8,7,6,5,4,3,2,1,0 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	bubble_sort(arr, sz, sizeof(arr[0]), cmp);
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//}


void test2()
{
	struct Stu s[] = { {"zhangsan",35},{"wangwu",30},{"lisi",25} };
	int sz = sizeof(s) / sizeof(s[0]);
	bubble_sort(s, sz, sizeof(s[0]), cmp_stu_by_name);
}
int main()
{
	//test1();//数组
	test2();//结构体之字符串
			
		
	system("pause");
	return 0;
}