#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int Add(int x, int y)
{
	return x + y;
}
int Sub(int x, int y)
{
	return x - y;
}
int Mul(int x, int y)
{
	return x * y;
}
int Div(int x, int y)
{
	return x / y;
}
void menu()
{
	printf("*****************\n");
	printf("***1.加***2.减***\n");
	printf("***3.乘***4.除***\n");
	printf("*****0.退出******\n");
		
}
int main()
{
	//函数指针数组
	int (*arr[5])(int, int) = { 0,Add,Sub,Mul,Div };
	//指向函数指针数组的指针
	int (*(*pfarr)[5])(int, int) = &arr;

	int input = 0;
	int x = 0;
	int y = 0;
	
	do
	{
		menu();
		printf("请输入:>\n");
		scanf("%d", &input);
		if (input == 0)
		{
			printf("退出计算器\n");
		}
		else if (input >= 1 && input <= 4)
		{
			printf("请输入两个操作数\n");
			scanf("%d %d", &x, &y);
			int result=arr[input](x, y);
			printf("%d\n", result);
		}
		else
		{
			printf("选择错误\n");
		}
	} while (input);
	
	return 0;
}