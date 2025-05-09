#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
//int count_num_1(int n)
//int count_num_1(unsigned int n)
//{
//	int count=0;
//	while (n)
//	{
//		if (n % 2 == 1)
//		{
//			count++;
//		}
//		n = n / 2;
//	}
//	return count;
//
//}//此方法无法计算负数的个数
////-1的补码
////11111111111111111111111111111111

//方法二
//int count_num_1(int n)
//{
//	int count = 0;
//	int i = 0;
//	for (i = 0; i < 32; i++)
//	{
//		if (n & 1 == 1)
//		{
//			count++;
//		}
//		n = n >> 1;
//		/*if(((n>>i)&1)==1)*/
//		//也可写成这样
//	}
//	return count;
//}


//方法三（不易想到）
//15 1111
//n=n&(n-1)
//1111 n
//1110 n-1
//1110 n 一次
//1101 n-1
//1100 n 二次，循环一次少一个1
//1011 n-1
//1000 n
//0111 n-1
//0000 n

int count_num_1(int n)
{
	int count = 0;
	while (n)
	{
		n = n & (n - 1);
		count++;
	}
}
//此方法也可以用来判断一个数是不是2的n次方
//2 10
//4 100
//8 1000
//(n&(n-1))==0
int main()
{
	int n = 0;
	scanf("%d", &n);
	int num = count_num_1(n);
	//算二进制补码中1的个数
	printf("%d\n", num);
	system("pause");
	return 0;
}