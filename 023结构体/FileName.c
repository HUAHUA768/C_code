#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
//在主函数外面创建
struct stu
{
	char name[10];
	int age;
	char sex[10];
	char tele[20];
};
void print(struct stu* ps)
{
	printf("%s %d %s %s\n", (*ps).name, (*ps).age, (*ps).sex, (*ps).tele);
	//更简便的写法：箭头
	printf("%s %d %s %s\n", ps->name, ps->age, ps->sex, ps->tele);
	// ->也是一个操作符，结构体指针变量->结构体成员名
}
int main()
{
	//结构体的初始化
	struct stu  s = { "zhangsan",20,"nan","15396288067" };
	//注意别漏了s

	//如何调用及打印
	/*printf("%s %d %s %s\n", s.name, s.age, s.sex, s.tele);*/
	//结构体对象.成员名，点是一个操作符

	//函数取地址
	print(&s);
	system("pause");
	return 0;
}