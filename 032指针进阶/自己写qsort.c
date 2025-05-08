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
	//��֪��һ��Ԫ�ؼ����ֽڣ���������ֽڽ��н���
	int i = 0;
	for (i = 0; i< width; i++)
	{
		char tmp = *(buf1 + i);
		*(buf1 + i) = *(buf2 + i);
		*(buf2 + i) = tmp; 
	}
}
//�Լ�дqsort����������Ϊbubble_sort
void bubble_sort(void* base, int sz, int width, int (*cmp)(const void* e1, const void* e2))
{
	int i = 0;
	int j = 0;
	//�Ӹ�flag��һ���Ż�����
	int flag = 1;
	for (i = 0; i < sz - 1; i++)
	{
		for (j = 0; j < sz - 1 - i; j++)
		{
			//base����ֱ��+j
			//����ת��char*����j*width����Ҫ�������ֽ�
			if (cmp((char*)base + j * width, (char*)base + (j + 1) * width )> 0)
			{
				//����
				//���ܼ򵥵�char tmp����int tmp����һ��long����long long���߱���أ�
				//����������������ֽڽ���
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
	//�Ƚ��ַ�����СӦ����strcmp
	//strcmp�ķ���ֵ��>0,0,<0
	//ע��e1��e2�������Ԫ�أ��ṹ�壩��ָ��
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
	//test1();//����
	test2();//�ṹ��֮�ַ���
			
		
	system("pause");
	return 0;
}