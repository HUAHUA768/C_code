#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main()
{
	char arr[20] = { 0 };
	//�� ����Ϊabcdef
	
	int i = 0;
	for (i = 0; i < 3; i++)
	{
		scanf("%s", arr);
		if (strcmp(arr, "abcdef") == 0)//==0˵�������ַ������
			//�Ƚ������ַ����Ƿ���ͬ�������á�==��������strcmp��һ���⺯����
		{
			printf("������ȷ\n");
			break;
		}
		else
		{
			printf("�������\n");
		}
	}
	if (i == 3)
	{
		printf("��������Ѵ�3�Σ��˺��Ѷ���\n");
	}
	system("pause");
	return 0;
}