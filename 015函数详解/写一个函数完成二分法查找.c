#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
//ʹ��bool���͹���������Ҫ����ͷ�ļ�
#include <stdbool.h>
//C99��׼��֧��bool
int binary_search(int arr[], int number, int sz)
//arr��һ��ָ�����������������������ĵ�ַ��ֱ�ӷ��ʵ�ַ
// ���鴫��ʵ���ϴ�����������Ԫ�صĵ�ַ
//�βκ�ʵ�ε����ֿ�����ͬ��Ҳ���Բ�ͬ
{
	//�����sz�ŵ������������㣿
	// ��sizeof(arr)��ò��������ܴ�С������ָ������Ĵ�С����4or8��
	// int sz = sizeof(arr) / sizeof(arr[0]);
	int left = 0;
	int right = sz - 1;
	while (left <= right)
	{
		int mid = left + (right - left) / 2;
		if (arr[mid] < number)
		{
			left = mid + 1;
		}
		else if (arr[mid] > number)
		{
			right = mid - 1;
		}
		else
		{
			return mid;
		}
	}
	return -1;
}
int main()
{
	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
	//�����������������
	int number = 0;
	int sz = sizeof(arr) / sizeof(arr[0]);
	scanf("%d", &number);
	int n = binary_search(arr, number, sz);
	if (n == -1)
	{
		printf("û�ҵ�\n");
	}
	else
	{
		printf("�ҵ��ˣ��±���%d\n", n);
	}
	system("pause");
	return 0;
}