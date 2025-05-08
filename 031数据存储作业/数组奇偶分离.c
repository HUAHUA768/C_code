#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
//void move_odd_even(int* L,int* R)
//{
//	while (L < R)
//	{
//		if (*L % 2 == 0 && *R % 2 == 1)
//		{
//			int tmp = *L;
//			*L = *R;
//			*R = tmp;
//			L++;
//			R--;
//		}
//		else
//		{
//			if (*L % 2 == 0)
//			{
//				R--;
//			}
//			else if (*R % 2 == 1)
//			{
//				L++;
//			}
//			else
//			{
//				L++;
//				R--;
//			}
//		}
//	}
//
//}

//写一个更简洁的
void move_odd_even(int* L, int* R)
{
//左右分开行动
	while (L < R)
	{
		while ((L < R) && (*L % 2 == 1))
		{
			L++;
		}
		while ((L < R) && (*R % 2 == 0))
		{
			R--;
		}
		//交换余生
		if (L < R)
		{
			int tmp = *L;
			*L = *R;
			*R = tmp;
		}
	}
}
int main()
{
	//使输入的数组奇数在前半部分，偶数在后半部分
	int arr[10] = { 0 };
	int i = 0;
	int sz = sizeof(arr) / sizeof(arr[0]);
	for (i = 0; i < sz; i++)
	{
		scanf("%d", &arr[i]);
	}

	//调整
	//1.直接思维：再创一个数组

	//2.别样的思维：两边交换法
	//左边找偶数，右边找奇数，再分别交换。左边遇到奇数就跳过，右边遇到偶数就跳过
	int* L = arr;
	int* R = arr + sz - 1;
	move_odd_even(L,R);

	//输出
	for (i = 0; i < sz; i++)
	{
		printf("%d ", arr[i]);
	}
	system("pause");
	return 0;
}