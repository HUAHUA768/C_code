#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main()
{
	int i = 0;
	for (i = 1; i <= 10; i++)
	{
		if (i == 5)
			continue;  //˼���������ʲô��
		printf("%d ", i);
	}
	//forѭ�����жϲ���ʡ����ζ���жϻ�����

	////����ʹ�ö����������ѭ��
	//int x, y;
	//for(x=0,y=0;x<2&&y<5;++x,y++);
	//ע�⣺for(int i=0; ; )��д��ֻ��C99�﷨�ı�������֧�֣�C++Ҳ����ôд�ģ�
	system("pause");
	return 0;
}