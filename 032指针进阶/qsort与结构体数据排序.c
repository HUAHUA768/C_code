#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
struct Stu
{
	char name[20];
	int age;
};
int cmp_stu_by_name (const void* e1,const void* e2)
{
	//�Ƚ��ַ�����СӦ����strcmp
	//strcmp�ķ���ֵ��>0,0,<0
	//ע��e1��e2�������Ԫ�أ��ṹ�壩��ָ��
	return strcmp(((struct Stu*)e1)->name, ((struct Stu*)e2)->name);

}

//�����������Ƚ�
int cmp_stu_by_age(const void* e1, const void* e2)
{
	//�Ƚ��ַ�����СӦ����strcmp
	//strcmp�ķ���ֵ��>0,0,<0
	//ע��e1��e2�������Ԫ�أ��ṹ�壩��ָ��
	return ((((struct Stu*)e1)->age) - (((struct Stu*)e2)->age));

	//strcmp�ȵĲ����ַ������ȣ�����ÿ���ַ���ASCII���С
	// �������һλ��ȣ�������˳�ӣ�
}
int main()
{
	//ʹ��qsort���Žṹ������
	struct Stu s[]={ {"zhangsan",35},{"lisi",22},{"wangwu",26} };
	//����һ������
	int sz = sizeof(s) / sizeof(s[0]);
	qsort(s, sz, sizeof(s[0]), cmp_stu_by_name);
	system("pause");
	return 0;
}