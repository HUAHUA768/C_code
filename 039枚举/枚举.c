#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
//enum Day
//{
//	Mon,//0
//	Tues,//1
//	Wed,//2
//	Thur,//3
//	Fri,//4
//	Sat,//5
//	Sun//6
//};

//如果要让Mon为1呢？
enum Day
{
	Mon=1,
	Tues,//
	Wed,//
	Thur,//
	Fri,//
	Sat,//
	Sun//
};
int main()
{
	enum Day d = Fri;
	printf("%d\n", Mon);//0
	printf("%d\n", Tues);
	printf("%d\n", Wed);
	printf("%d\n", Thur);
	printf("%d\n", Fri);
	printf("%d\n", Sat);
	printf("%d\n", Sun);
	system("pause");
	return 0;
}