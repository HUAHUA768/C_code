#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main()
{
	int arr[5] = { 0 };
	
	printf("������һ������\n");
	int i = 0;
	int n = 0;
	for (i = 0; i < 5; i++)
	{
		scanf("%d", &arr[i]);
	}
	printf("������Ҫɾ��������");
	scanf("%d", & n);
		//�ò������ڶ�������ķ�ʽ��ɾ�������е�ָ������
	int j = 0;
	for (i = 0; i < 5; i++)
	{
		if (arr[i] != n)
		{
			arr[j] = arr[i];
			j++;
			//Ҳ�������кϳ�һ��arr[j++]
		}
	}
	//��j=3��˵��������һ����4������,��д��i<j
	for (i = 0; i < j; i++)
	{
		printf("%d ", arr[i]);
	}
	system("pause");
	return 0;
}