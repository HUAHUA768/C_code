#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
//int mystrlen(char str[])��������д���������ʽ
//int mystrlen(char* n)  //����arr���ַ��ĵ�ַ����������д��ָ�����ʽ
//{
//	int count = 0; //��������ʱ����
//	while (*n != '\0')
//	{
//		count++; 
//		n++; //����һ���ַ�
//	}
//	return count;
//}

//�õݹ����
int mystrlen(char* str)
{
	if (*str != '\0')
	{
		return 1 + mystrlen(str + 1);
	}
	else
	{
		return 0;
	}
}
int main02()
{
	char arr[] = "abc";
	int len = mystrlen(arr);
	printf("%d\n", len);
	system("pause");
	return 0;
}