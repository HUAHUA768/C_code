#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main03()
{
	int arr[] = { 1,2,3,4,5,6,7,8,9 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	int left = 0;
	int right = sz - 1;
	int mid;
	int k = 8;
	while (left <= right)
	{
		mid= (left + right) / 2;
		//��mid=left+(right-left)/2���Է�ֹ��ֵ���
		if (arr[mid] < k)
		{
			left = mid + 1;
		}
		else if (arr[mid] > k)
		{
			right = mid - 1;
		}
		else
		{
			printf("�ҵ��ˣ��±��ǣ�%d\n", mid);
			break;  //����������ѭ��
		}
	}
	if (left > right)
	{
		printf("û�ҵ�\n");
	}

	system("pause");
	return 0;
}