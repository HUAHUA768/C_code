#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
//void reverse(char *arr)
//{
//	char tmp = *arr;  
//	int len = strlen(arr);   //len=6
//	*arr = *(arr + len - 1);
//	*(arr + len - 1) = '\0'; //f bcde \0 \0
//	if (strlen(arr + 1) >= 2)
//	{
//		reverse(arr + 1);
//	}
//	*(arr + len - 1) = tmp;
//}
//int main()
//{
//	char arr[] = "abcdef";   //abcdef\0
//	//����һ��right/left�������ǵݹ飩
//	//�������������ݹ�+��������
//	//�ǵ��ã����������ӡ�����鱾���Ѿ������˸ı�
//	//�������������ݹ�+�������
//	reverse(arr);
//	printf("%s\n", arr);
//	system("pause");
//	return 0;
//}
  


//���������������ģ�������\0ռλ��

//void reverse(char arr[], int left, int right)
//{
//	char tmp = arr[left];
//	arr[left] = arr[right];
//	arr[right] = tmp;
//	if (left < right)
//	{
//		reverse(arr, left + 1, right - 1);
//		//ԭ�������һѭ�����
//	}
//	
//}

//bug������
void reverse(char arr[], int left, int right)
{
	
	if (left < right)
	{
		char tmp = arr[left];
		arr[left] = arr[right];
		arr[right] = tmp;
		reverse(arr, left + 1, right - 1);
		//ԭ�������һѭ�����
	}
	
}
int main()
{
	char arr[] = "abcdef";
	int left = 0;
	int right = 0;
	right = strlen(arr) - 1;
	reverse(arr, left, right);
	printf("%s\n",arr);
	return 0;
}