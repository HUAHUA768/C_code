#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main()
{
	char ch = 0;
	//����дתСд����Сдת��д
	while (scanf("%c", &ch) == 1)
	//scanf����ȡ�ɹ�������ֵΪ��ȡ�����ݵĸ���������ȡʧ�ܣ�����ֵΪEOF���� = 1��
	{
		if (islower(ch))
			//�⺯����Ҳ���жϴ�Сд��ĸ�ĺ���
		{
			printf("%c\n", toupper(ch));
			//�⺯����Ҳ��ת����Сд�ĺ���
		}
		if (isupper(ch))
		{
			printf("%c\n", tolower(ch));
		}
		//getchar();//����\n
		//��15����ȷ������������getchar�̵��س���
	}
	system("pause");
	return 0;
}