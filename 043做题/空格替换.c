#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
void Replace(char* p, int length)
{
	int num = 0;
	char* str = p;
	//���±�
	int end1 = length - 1;
	//ͳ�ƿո�
	while (*str)
	{
		if (*str == ' ')
		{
			num++;
		}
		str++;
	}
	//���±�
	int end2 = end1 + num*2;
	//��ʼ�û�
	while (end1 != end2)
	{
		if (p[end1] != ' ')
		{
			p[end2] =p[end1];
			end1--;
			end2--;
		}
		else
		{
			p[end2] = '0';
			end2--;
			p[end2] = '2';
			end2--;
			p[end2] = '%';
			end2--;
			//������end2�����end1ҲҪ����ո�
			end1--;
		}
	}
}
int main()
{
	//��we are happy.�Ŀո񻻳�%20
	char arr[100] = "we are happy.";
	int length = (int)strlen(arr);
	Replace(arr, length);
	//ͳ�ƿո������Ϊn��Ҫ��2*n��λ��
	//���ַ���������Ų��ֱ�������ո�
	//��end1��¼��ʼĩβ��end2��¼�ı���ĩβ
	//Ȼ��end1��end2�ֱ���ǰŲ�����ÿ���ַ��İ���
	//end1�����ո�ʱ����ͣ�²�����end2�����Σ�0��2��%
	//��û�пո�ʱ��end1=end2
	printf("%s\n", arr);
	system("pause");
	return 0;
}