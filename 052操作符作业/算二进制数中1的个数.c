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
//}//�˷����޷����㸺���ĸ���
////-1�Ĳ���
////11111111111111111111111111111111

//������
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
//		//Ҳ��д������
//	}
//	return count;
//}


//�������������뵽��
//15 1111
//n=n&(n-1)
//1111 n
//1110 n-1
//1110 n һ��
//1101 n-1
//1100 n ���Σ�ѭ��һ����һ��1
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
//�˷���Ҳ���������ж�һ�����ǲ���2��n�η�
//2 10
//4 100
//8 1000
//(n&(n-1))==0
int main()
{
	int n = 0;
	scanf("%d", &n);
	int num = count_num_1(n);
	//������Ʋ�����1�ĸ���
	printf("%d\n", num);
	system("pause");
	return 0;
}