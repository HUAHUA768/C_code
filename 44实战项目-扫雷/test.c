#include "game.h"
void menu()
{
	printf("****************************\n");
	printf("****1.play   0.exit*********\n");
	printf("****************************\n");
}
void game()
{
	//��������
	char mine[ROWS][COLS] = { 0 };//����
	char show[ROWS][COLS] = { 0 };//չʾ��Ϣ
	//��ʼ������
	Init(mine, ROWS, COLS, '0');
	Init(show, ROWS, COLS, '*');
	//չʾ����

	Show(show, ROWS, COLS);
	//����
	Setmine(mine, ROW, COL, number);
	/*Show(mine, ROWS, COLS);*/
	//�Ų���
	Findmine(mine, show, ROW, COL, number);
}
int main()
{
	int input = 0;
	srand((unsigned int)time(NULL));//����������������
	do
	{
		menu();
		printf("��ѡ��ģʽ\n");
		scanf("%d", &input);
		switch (input)
		{
		case 1:printf("��Ϸ��ʼ\n");
			game();
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