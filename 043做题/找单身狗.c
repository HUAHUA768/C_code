#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
void Find_single(int arr[], int sz, int* num1, int* num2)
{
	//�����һ��
	int i = 0;
	int ret = 0;
	for (i = 0; i < sz; i++)
	{
		ret ^= arr[i];
		//һ�������0����������
	}
	//�����ұߵ�1�����ڵڼ�λ
	int yd = 0;
	for (i = 0; i < 32; i++)
	{
		if (((ret >> i) & 1) == 1)
		{
			break;
		}
		//���ȷ�����λ�Ƿ�Ϊ1����λ��1����
		yd++;
		//yd=0��ʾ���λ����1
	}
	//����
	for (i = 0; i < sz; i++)
	{
		if (((arr[i] >> yd)&1) == 1)
		{
			(*num1) ^= arr[i];
		}
		else
		{
			(*num2) ^= arr[i];
		}
	}
}
int main()
{
	//1��2��3��4��5��1��2��3��4��6
	//�ҳ�����һ�Ե���������
	//������ֻ��һ����ȫ����λ�����һ����ܵó����
	//����������
	int arr[] = { 1,2,3,4,5,1,2,3,4,6 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	int num1 = 0;
	int num2 = 0;
	Find_single(arr, sz, &num1, &num2);
	printf("%d %d\n", num1, num2);
	system("pause");
	return 0;
}