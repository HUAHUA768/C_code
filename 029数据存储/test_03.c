#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
unsigned char i = 0;
//ȡֵ��Χ0~255
int main()
{
	for (i = 0; i <= 255; i++)
	{
		printf("hello world\n");
	}
	//0 1 ...255
	// 11111111��1��00000000���ض�
	//255��0����ѭ��
	

	//strlen����������unsigned int(size_t)
	system("pause");
	return 0;
}