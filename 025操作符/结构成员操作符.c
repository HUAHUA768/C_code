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
	strcpy((*ss).name, "zhangsan");//name存了一个地址，没法直接把字符串存进去
	(*ss).age = 20;
	(*ss).score = 70.5;

	strcpy(ss->name, "zhangsan"); //也可写成这样，用地址找到结构成员
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