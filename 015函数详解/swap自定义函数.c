#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
//传值调用
//void swap1(int x,int y)  //没有返回值
//{
//	int z = 0;
//	z = x;
//	x = y;
//	y = z;
//}
//当实参（实际参数）传给形参（形式参数）的时候，形参是实参的一份拷贝
//形参的修改不会影响实参
void swap2(int* px, int* py) //传址调用
{
	int z = 0; //取a和b的地址，传给指针整形（传地址）
	z = *px;
	*px = *py;
	*py = z;
}
int main01()
{
	int a, b;
	scanf("%d %d", &a, &b);
	printf("交换前：a=%d，b=%d\n", a, b);
	//传值调用
	/*swap1(a, b);*/
	//传址调用
	swap2(&a, &b); //取a，b的地址
	printf("交换后：a=%d，b=%d\n", a, b);
	//如何判断是否要传地址？
	//若函数中无需改变实参的值，则不用取地址

	system("pause");
	return 0;
}