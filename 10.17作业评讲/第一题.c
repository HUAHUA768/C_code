#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main01()
{
	char arr[] = { 'h','i','t' };
	printf("%d\n", strlen(arr));  //strlen�󳤶ȣ�strlen����'0'�Ż�ͣ����
	//�������ڴ��Сδ֪����strlen�����ֵ
	char arr1[4] = { 'h','i','t' };
	printf("%d\n", strlen(arr1));//����ȫ��ʼ����ʣ��Ĳ���Ĭ�ϳ�ʼ��Ϊ0
	//��[ ]��Ϊ8�����涼��0���������3
	system("pause");
	return 0;
}