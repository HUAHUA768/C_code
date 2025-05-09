#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
//void left_rotate(char arr[], int k)
//{
//	int len = strlen(arr);
//	k %= len;
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < k; i++)
//	{
//		char tmp = arr[0];
//		for (j = 0; j < len - 1; j++)
//		{
//			arr[j] = arr[j + 1];
//		}
//		arr[len - 1] = tmp;
//	}
//}
//��һ��˼·
//ab cdef
//ba fedc
//cdefab ��������
//�������������ַ�������
void reverse(char* left, char* right)
{
	assert(left && right);
	while (left < right)
	{
		char tmp = *left;
		*left = *right;
		*right = tmp;
		left++;
		right--;
	}
}
void left_rotate(char arr[], int k)
{
	assert(arr);
	int len = strlen(arr);
	k %= len;
	//��
	reverse(arr, arr + k - 1);
	//���k=8�أ�Խ���ˣ�����Ҫת��
	//��
	reverse(arr + k, arr + len - 1);
	//��
	reverse(arr, arr + len - 1);
}
int main()
{
	//ʵ������k���ַ�
	//abcdef bcdefa
	char arr[] = "abcdef";
	int k = 0;
	scanf("%d", &k);
	left_rotate(arr, k);
	printf("%s\n", arr);
	system("pause");
	return 0;
}