#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
	//int ch = 0;
	//while ((ch = getchar()) != EOF)//EOF:��Ч�ַ���ʵ��ֵΪ-1
	//	putchar(ch); //Ϊʲô���Զ����У�
	////�������ڴ�֮���и����뻺���������������ַ�+�س������������ַ���\n
	////�ַ���getcharȡ�ߣ�ʣ��һ��\n����ָ��
	////�˴�������ã�������ջ����������������������ַ���ԭ��һ��
	////Ҳ���ǰѻس������ɵ�\n����
	//char password[20] = { 0 };
	//printf("��������������>");
	//scanf("%s", password); //����ȡ��ַ������ԭ�������
	////scanf�����ԣ������ո��ֹͣ��ȡ

	int ch = 0;
	while ((ch = getchar()) != '\n')//'\n'�����˵�����
	{
		;    //���������ã�����whileǣ���������printf
	}//�����̵��ո��\n
		printf("��ȷ����������>('Y'or'N')");
		int ter = getchar();
		if (ter == 'Y')
			printf("ȷ��\n");
		else
			printf("ȡ��\n");
		char ah = '\0';
		while((ah = getchar()) != EOF)
		{
			if (ah < '0' || ah>'9')
				continue;
			putchar(ah);
		}//ֻ��ӡ�����ַ�
	system("pause");
	return 0;
}