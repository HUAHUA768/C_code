#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
struct Stu
{
	char name[20];
	int age;
	double score;
};
void set_stu(struct Stu *ss)
{
	strcpy((*ss).name, "zhangsan");//name����һ����ַ��û��ֱ�Ӱ��ַ������ȥ
	(*ss).age = 20;
	(*ss).score = 70.5;

	strcpy(ss->name, "zhangsan"); //Ҳ��д���������õ�ַ�ҵ��ṹ��Ա
	ss->age = 20;
	ss->score = 70.5;
}
void print_stu(struct Stu ss)
{
	printf("%s %d %lf", ss.name, ss.age, ss.score);
}
int main()
{
	struct Stu s = { 0 };
	set_stu(&s);
	print_stu(s);
	system("pause");
	return 0;
}