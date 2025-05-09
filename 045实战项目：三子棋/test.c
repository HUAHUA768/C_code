#include "game.h"
void menu()
{
	printf("***************************\n");
	printf("***1.play   2.exit*********\n");
	printf("***************************\n");
}
void game()
{
	char board[ROW][COL] = { 0 };
	char ret = 0;
	//��ʼ�����ƣ����飩����ÿ��Ԫ�ط��Ͽո�
	InitBoard(board, ROW, COL);
	//��ӡ����
	DisplayBoard(board,ROW,COL);
	//��ʼ����
	while (1)
	{
		Playermove(board, ROW, COL);
		//�ж���Ӯ
		ret= Iswin(board, ROW, COL);
		if (ret != 'C')
		{
			break;
		}
		DisplayBoard(board, ROW, COL);
		
		Computermove(board, ROW, COL);
		//�ж���Ӯ
		ret = Iswin(board, ROW, COL);
		if (ret != 'C')
		{
			break;
		}
		DisplayBoard(board, ROW, COL);
		

	}
	if (ret == '*')
	{
		printf("��һ�ʤ\n");
	}
	else if (ret == '#')
	{
		printf("�˻���ʤ\n");
	}
	else
	{
		printf("ƽ��\n");
	}
	DisplayBoard(board, ROW, COL);
}
int main()
{
	int input = 0;
	//��������������������������
	srand((unsigned int)time(NULL));
	do
	{
		menu();
		printf("��ѡ��ģʽ\n");
		
		scanf("%d", &input);
		switch (input)
		{
		case 1:game();
			break;
		case 0:printf("�˳���Ϸ\n");
			break;
		default:printf("ѡ�����\n");
			break;
		}

	} while (input);
	system("pause");
	return 0;
}