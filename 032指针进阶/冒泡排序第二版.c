#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
void bubble_sort(int arr[], int sz)
{
	//n��Ԫ�أ�n-1������
	int i = 0;
	int j = 0;
	//��������Ѿ�����Ҫ�������أ�����Ż��㷨��
	int flag = 1;
	//�����һ�˹���flag��ȻΪ1��˵������Ҫ����ѭ����ֹ
	for (i = 0; i < sz - 1; i++)
	{
		for (j = 0; j < sz - 1 - i; j++)
		{
			if (arr[j] > arr[j + 1])
			{
				int tmp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = tmp;
				flag = 0;
			}
		}
		if (flag == 1)
		{
			break;
		}
	}
}




//qsortָ����ʽ�ĺ���
int cmp_int(const void* e1, const void* e2)
{
	return (*(int*)e1 - *(int*)e2);
	//���������͵���������0�͸���������
}
int main()
{
	int arr[] = { 9,8,7,6,5,4,3,2,1,0 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	int i = 0;
	/*bubble_sort(arr,sz);*/  


	//��qsort��ôд
	//��ʼλ��+Ԫ�ظ���+����Ԫ�صĴ�С���ֽڣ�+�ض���ʽ�ĺ����ĵ�ַ����������
	//�ض���ʽ�� int (*cmp) (const void* e1,const void* e2)
	qsort(arr, sz, sizeof(arr[0]), cmp_int);
	for (i = 0; i < sz; i++)
	{
		printf("%d ",arr[i]);
	}

	
	system("pause");
	return 0;
}