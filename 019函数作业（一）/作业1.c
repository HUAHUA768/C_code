//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <string.h>
//#include <stdlib.h>
////int Max(int x, int y)
////{
////	int n = 2; //�Ӵ�Сn--��������
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
//	////�����������Ӵ�С���
//	//int a, b, c;
//	//scanf("%d %d %d", &a, &b, &c);
//	//int tmp = 0;
//	//if (a < c)
//	//{
//	//	tmp = a;   //����ʹ��swap������swap(&a,&b)
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
//	//�ڶ��⣺�������������Լ��
//	int a = 0;
//	int b = 0;
//	scanf("%d %d", &a, &b);
//	int n = Max(a, b);
//	if (n == 1)
//	{
//		printf("û�й�Լ��");
//	}
//	else
//	{
//		printf("���Լ����%d", n);
//	}
//
//	system("pause");
//	return 0;
//}