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
	//比较字符串大小应该用strcmp
	//strcmp的返回值是>0,0,<0
	//注意e1和e2是数组的元素（结构体）的指针
	return strcmp(((struct Stu*)e1)->name, ((struct Stu*)e2)->name);

}

//按照年龄来比较
int cmp_stu_by_age(const void* e1, const void* e2)
{
	//比较字符串大小应该用strcmp
	//strcmp的返回值是>0,0,<0
	//注意e1和e2是数组的元素（结构体）的指针
	return ((((struct Stu*)e1)->age) - (((struct Stu*)e2)->age));

	//strcmp比的不是字符串长度，而是每个字符的ASCII码大小
	// （如果第一位相等，则依次顺延）
}
int main()
{
	//使用qsort来排结构体数据
	struct Stu s[]={ {"zhangsan",35},{"lisi",22},{"wangwu",26} };
	//来排一下名字
	int sz = sizeof(s) / sizeof(s[0]);
	qsort(s, sz, sizeof(s[0]), cmp_stu_by_name);
	system("pause");
	return 0;
}