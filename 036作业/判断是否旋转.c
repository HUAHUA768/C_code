#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
//int is_left_rotate(char arr1[], char arr2[])
//{
//	int len = strlen(arr1);
//	//��k��0��len��һ�Σ����αȽ�
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < len; i++)//��תlen�ε�����ת0��
//	{
//		//��ת��
//		char tmp = arr1[0];
//		for (j = 0; j <= len - 2; j++)//9 8 7
//		{
//			arr1[j] = arr1[j + 1];
//		}
//		arr1[len - 1] = tmp;
//		if (strcmp(arr1,arr2)==0)
//		{
//			return 1;
//		}
//	}
//	return 0;
//
//}


int is_left_rotate(char arr1[], char arr2[])
{
	int len1 = strlen(arr1);
	int len2 = strlen(arr2);
	if (len1 != len2)
	{
		return 0;
	}
	strncat(arr1, arr1, len1);
	//Ϊʲô��strncat��������strcat
	//��Ϊstrcat��\0���ǳ�a���ͻ�һֱ���ƣ�����ֹͣ
	int ret = strstr(arr1, arr2);
	if (ret == NULL)
	{
		return 0;
	}
	else
		return 1;
}
int main()
{
	//char arr1[] = "abcdef";
	//char arr2[] = "cdefab";
	////�ж�arr2�Ƿ���arr1��ת����
	//int ret = is_left_rotate(arr1,arr2);
	//printf("%d\n", ret);

	//��һ��˼·
	//abcdef
	//bcdefa
	//cdefab
	//defabc
	//efabcd
	//fabcde
	//abcdefabcdef
	//����һ�ݣ�����ַ�������������ת�Ŀ�����

	char arr1[20] = "abcdef";
	char arr2[] = "cdef";
	int ret = is_left_rotate(arr1,arr2);
	if (ret == 1)
	{
		printf("��������okk\n");
	}
	else
	{
		printf("��OK\n");
	}
	
	//��©�������arr2��cdef�أ�
	//��һ�������жϾ��ܽ������
	system("pause");
	return 0;
}