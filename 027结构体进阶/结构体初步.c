#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
struct Peo
{
	char name[20];
	char tele[12];
	char sex[5];
	int high;
};//是一个类型

//结构体套结构体
struct st
{
	struct Peo p;
	int num;
	float f;
};
int main()
{
	struct Peo p1;//结构体变量的创建
	//是一个创建的结构体变量

	//结构体套结构体如何初始化
	struct st s={{"张三","15998935391","男",179 },25,3.14f };
	//大括号套大括号即可
	printf("%s %s %s %d %d %f", s.p.name, s.p.tele, s.p.sex, s.p.high,s.num,s.f
	);
	system("pause");
	return 0;
}