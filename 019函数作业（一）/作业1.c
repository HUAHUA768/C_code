//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <string.h>
//#include <stdlib.h>
////int Max(int x, int y)
////{
////	int n = 2; //从大到小n--比这更快捷
////	int m = 1;
////	if (x > y)
////	{
////		for (n = 2; n < x && n <= y; n++)
////		{
////			if (x % n == 0 && y % n == 0)
////				m = n;
////			else
////				continue;
////		}
////		return m;
////	}
////	else if (x < y)
////	{
////		for (n = 2; n <= x && n < y; n++)
////		{
////			if (x % n == 0 && y % n == 0)
////				m = n;
////			else
////				continue;
////		}
////		return m;
////	}
////	else
////		return x;
////	
////}
//int main01()
//{
//	////将三个整数从大到小输出
//	//int a, b, c;
//	//scanf("%d %d %d", &a, &b, &c);
//	//int tmp = 0;
//	//if (a < c)
//	//{
//	//	tmp = a;   //可以使用swap函数，swap(&a,&b)
//	//	a = c;
//	//	c = tmp;
//	//}
//	//if (a < b)
//	//{
//	//	tmp = a;
//	//	a = b;
//	//	b = tmp;
//	//}
//	//if (b < c)
//	//{
//	//	tmp = b;
//	//	b = c;
//	//	c = tmp;
//	//}
//	//printf("%d %d %d", a, b, c);
//
//	//第二题：算两个数的最大公约数
//	int a = 0;
//	int b = 0;
//	scanf("%d %d", &a, &b);
//	int n = Max(a, b);
//	if (n == 1)
//	{
//		printf("没有公约数");
//	}
//	else
//	{
//		printf("最大公约数是%d", n);
//	}
//
//	system("pause");
//	return 0;
//}