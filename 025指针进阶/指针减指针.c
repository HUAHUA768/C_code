#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
//ѭ����
//int my_strlen(char* str)
//{
//	int count = 0;
//	while (*str != '\0')//������
//	{
//		count++;
//		str++;
//	}
//	return count;
//}
//2.�ݹ��
//3.ָ���
int my_strlen(char* str)//���δ������ַ����ĵ�ַ
{
	char* start = str;
	while (*str != '\0')
	{
		str++;
	}
	return (str - start);
}
int main()
{
	/*int arr[10] = { 0 };
	printf("%d\n", &arr[9] - &arr[0]);*/
	//�ô�����д�Զ��庯��my_strlen�������ַ�������
	int str = my_strlen("abcdefg");
	printf("%d\n", str);
	system("pause");
	return 0;
}