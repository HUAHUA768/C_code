#define _CRT_SECURE_NO_WARNINGS
#include "contact.h"

//ͨѶ¼��
//1.��̬�汾����ϵ��ֻ�ܿ���100��
//2.��̬�汾��Ҫ���ٿ�����
//3.�ļ��汾���˳�����֮����ϵ����Ϣ��Ȼ����

enum Option
{
	EXIT,
	ADD,
	DEL,
	SEARCH,
	MODY,
	SORT,
	SHOW
};
void menu()
{
	printf("***************************************************\n");
	printf("*****1.������ϵ��**************2.ɾ��ָ����ϵ��****\n");
	printf("*****3.������ϵ��**************4.�޸���ϵ��********\n");
	printf("*****5.����********************6.��ʾ��ϵ��********\n");
	printf("******************0.�˳�***************************\n");
	printf("***************************************************\n");
}
int main()
{
	int input = 0;
	Contact con;//ͨѶ¼

	//��ʼ��
	InitContact(&con);
	do
	{
		menu();
		printf("��ѡ��:>\n");
		scanf("%d",&input);
		switch (input)
		{
		case ADD:
			AddContact(&con);
			break;
		case DEL:
			DelContact(&con);
			break;
		case SEARCH:
			SearchContact(&con);
			break;
		case MODY:
			ModifyContact(&con);
			break;
		case SORT:
			SortContact(&con);
			break;
		case SHOW:
			ShowContact(&con);
			break;
		case EXIT:
			SaveContact(&con);
			//����ͨѶ¼
			DestroyContact(&con);
			printf("�˳�\n");
			break;
		}
	
	} while (input);
	system("pause");
	return 0;
}