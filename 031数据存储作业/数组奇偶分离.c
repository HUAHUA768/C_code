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

//дһ��������
void move_odd_even(int* L, int* R)
{
//���ҷֿ��ж�
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
		//��������
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
	//ʹ���������������ǰ�벿�֣�ż���ں�벿��
	int arr[10] = { 0 };
	int i = 0;
	int sz = sizeof(arr) / sizeof(arr[0]);
	for (i = 0; i < sz; i++)
	{
		scanf("%d", &arr[i]);
	}

	//����
	//1.ֱ��˼ά���ٴ�һ������

	//2.������˼ά�����߽�����
	//�����ż�����ұ����������ٷֱ𽻻�����������������������ұ�����ż��������
	int* L = arr;
	int* R = arr + sz - 1;
	move_odd_even(L,R);

	//���
	for (i = 0; i < sz; i++)
	{
		printf("%d ", arr[i]);
	}
	system("pause");
	return 0;
}