#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int Add(int x, int y)
{
	return x + y;
}
int Sub(int x, int y)
{
	return x - y;
}
int Mul(int x, int y)
{
	return x * y;
}
int Div(int x, int y)
{
	return x / y;
}
void menu()
{
	printf("*****************\n");
	printf("***1.��***2.��***\n");
	printf("***3.��***4.��***\n");
	printf("*****0.�˳�******\n");
		
}
int main()
{
	//����ָ������
	int (*arr[5])(int, int) = { 0,Add,Sub,Mul,Div };
	//ָ����ָ�������ָ��
	int (*(*pfarr)[5])(int, int) = &arr;

	int input = 0;
	int x = 0;
	int y = 0;
	
	do
	{
		menu();
		printf("������:>\n");
		scanf("%d", &input);
		if (input == 0)
		{
			printf("�˳�������\n");
		}
		else if (input >= 1 && input <= 4)
		{
			printf("����������������\n");
			scanf("%d %d", &x, &y);
			int result=arr[input](x, y);
			printf("%d\n", result);
		}
		else
		{
			printf("ѡ�����\n");
		}
	} while (input);
	
	return 0;
}