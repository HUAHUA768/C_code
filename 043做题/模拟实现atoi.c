#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include <ctype.h>//isspace
#include <limits.h>//�ж��Ƿ�Խ��
//1.��ָ���
//2.���ַ�����ֻ��\0����
//3.+-��
//4.�ո��
//5.Խ����ʣ���ֵ̫�󣩡�
//6.�������ַ�(��ֹת��)���Ƿ����أ���

enum Status
{
	VALID,//0
	INVALID//1
}sta = INVALID;//Ĭ�ϷǷ�
int my_atoi(const char* arr)
{
	assert(arr);//��ָ��
	long long ret = 0;
	int flag = 1;
	if (*arr == '\0')
	{
		return 0;//�Ƿ�0
	}
	//ɾ���ո�
	while (isspace(*arr) == 1)
	{
		arr++;
	}
	if (isdigit(*arr) ==0)
	{
		//�ж�������
		if (*arr == '-')
		{
			flag = -1;
			arr++;
		}
		else
		{
			return 0;
		}//abc-1
	}
	
	
	while (*arr != '\0')
	{
		//�ж��Ƿ�����
		if (isdigit(*arr) !=0)
		{
			ret = ret * 10 + (*arr - '0') * flag;
			//�ж��Ƿ�Խ�磬��long long
			if (ret > INT_MAX || ret < INT_MIN)
			{
				return 0;
			}
			
		}
		//�������� 123abc
		else
		{
			return (int)ret;
		}
		arr++;
	}
	sta = VALID;
	return (int)ret;
	
}
int main()
{
	char arr[20] = "123456";
	/*int a = atoi(arr);*/
	int a = my_atoi(arr);
	if (sta == INVALID)
	{
		printf("�Ƿ����أ�%d\n", a);
	}
	else if (sta == VALID)
	{
		printf("�Ϸ�ת����%d\n", a);
	}
	return 0;
}