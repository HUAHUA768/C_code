#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h> //�⺯����ͷ�ļ�
int main05()
{
	char arr1[] = "welcome to Newyork!";
	char arr2[] = "###################";
	int left = 0;
	int right = strlen(arr1) - 1; //strlen��������β��'\0'
	//����sizeof����Ԫ�ظ�����
	//int right=sizeof(arr1)/sizeof(arr1[0])-2,Ϊʲô-2?
	//��Ϊsizeof����㵽�����ַ��ĸ��������±꣬�С�\0�����±��0��ʼ��ԭ�򣬹�-2
	while(left<=right)
	{
		arr2[left] = arr1[left];
		arr2[right] = arr1[right];
		left++;
		right--;
		printf("%s\n", arr2);
		Sleep(1000); //ͣ��1000�������춯̬Ч��
		system("cls"); //�����Ļ
		//system��һ���⺯��������ִ��ϵͳ����
	}
	printf("%s\n", arr2);
	system("pause");
	return 0;
}