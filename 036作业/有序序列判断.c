#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main()
{
	//flag1��flag2�����ڰ�flag1�Ƴ�1��С�ڰ�flag2�Ƴ�1����������������Ϊ1
	//N<=50
	int N = 0;
	scanf("%d", &N);
	int arr[50] = { 0 };
	int i = 0;
	//�����ʱ��˳���ж�
	int flag1 = 0;
	int flag2 = 0;
	for (i = 0; i < N; i++)
	{
		scanf("%d", &arr[i]);
		//��ʼ�ж�
		if (i > 0)
		{
			if (arr[i] > arr[i - 1])//��
			{
				flag1 = 1;
			}
			else if (arr[i] < arr[i - 1])
			{
				flag2 = 1;
			}
		}
	}
	if (flag1 + flag2 <= 1)//����1 1 1 1���������Ϊ0
	{
		printf("����������\n");
	}
	else
	{
		printf("��������\n");
	}
	system("pause");
	return 0;
}