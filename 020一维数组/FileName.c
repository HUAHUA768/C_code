#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main()
{
	//int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
	////��ӡ����ÿ��Ԫ�صĵ�ַ
	//int i = 0;
	//for (i = 0; i < 10; i++)
	//{
	//	printf("&arr[%d] = %p\n", i,&arr[i]);
	//	//�������ڴ�����������ŵ�
	//}

	//1 2 3 4
	//3 4 5 6
	//4 5 6 7
	//int arr1[3][4] = { 1,2,3,4,3,4,5,6,4,5,6,7 };
	////û������Ԫ�ؿ�λ��0����
	//int arr2[3][4] = { {1,2},{3,4},{5,6} };//�ֶ�����

	int arr[][3] = { {1,2},{4,5} };//����ʡ���е��ǲ���ʡ����
	system("pause");
	return 0;
}