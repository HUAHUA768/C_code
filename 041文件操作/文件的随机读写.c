#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main()
{
	FILE* pf = fopen("test.txt", "r");
	if (pf == NULL)
	{
		perror("fopen:");
		return 1;
	}
	char ch = 0;
	//���ļ�
	//��λ�ļ�ָ��
	//fseekֻ�ж�λ���ܣ�û�ж�ȡ���ܣ���ȡ���ܻ�����Ҫfgetc
	fseek(pf, 2, SEEK_SET);
	ch = fgetc(pf);
	printf("%c\n", ch);//c
	printf("%d\n", ftell(pf));//ָ��d��ƫ����3

	//��ȡf
	/*fseek(pf, 2, SEEK_CUR);*/
	fseek(pf, -1, SEEK_END);
	ch = fgetc(pf);//����f������f����һλ
	printf("%c\n", ch);
	printf("%d\n", ftell(pf));//6
	//abcedf
	rewind(pf);
	ch = fgetc(pf);
	printf("%c\n", ch);

	fclose(pf);
	pf = NULL;
	
	system("pause");
	return 0;
}