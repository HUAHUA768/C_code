//��ʼ������
#include "game.h"
void InitBoard(char board[ROW][COL], int row, int col)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < ROW; i++)
	{
		for (j = 0; j < COL; j++)
		{
			board[i][j] = ' ';
		}
	}
}
//void DisplayBoard(char board[ROW][COL], int row, int col)
//{
//	int i = 0;
//	for (i = 0; i < ROW; i++)
//	{
//		printf(" %c | %c | %c\n",board[i][0],board[i][1],board[i][2]);
//		if(i<ROW-1)
//		printf("---|---|---\n");
//		//д���ˣ������̴�С������д
//	}
//}

//��ӡ����
void DisplayBoard(char board[ROW][COL], int row, int col)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < ROW; i++)
	{
		for (j = 0; j < COL; j++)
		{
			printf(" %c ", board[i][j]);
			if (j < COL - 1)
				printf("|");
		}
		printf("\n");
		if (i < ROW - 1)
		{
			for (j = 0; j < COL; j++)
			{
				printf("---");
				if (j < COL - 1)
					printf("|");
			}
			printf("\n");
		}
	}
			/*printf("---|---|---\n");*/
	
}

//�������
void Playermove(char board[ROW][COL], int row, int col)
{
	int x = 0;
	int y = 0;
	printf("���������:>\n");
	printf("�������������\n");
	//���������1ת�������0����һλ��
	
	//�ж������Ƿ�Ϸ�
	while (1)
	{
		//�����ж������Ƿ��Ѿ�������
		scanf("%d %d", &x, &y);
		if (x >= 1 && x <= row && y >= 1 && y <= col)
		{
			if (board[x - 1][y - 1] == ' ')
			{
				board[x - 1][y - 1] = '*';
				break;
			}
			else
			{
				printf("��λ���ѱ�ռ�ã���ѡ������λ��\n");
			}
		}
		else
		{
			printf("�����������Ƿ�\n");//������ѭ����ֱ���������Ϊֹ
		}
	}
}
//��������
void Computermove(char board[ROW][COL], int row, int col)
{
	printf("��������:>\n");
	int x = 0;
	int y = 0;
	//�õ��������������
	while (1)
	{
		x = rand() % ROW;//0~2
		y = rand() % COL;//0~2
		if (board[x][y] == ' ')
		{
			board[x][y] = '#';
			break;
		}
	}
}
int Isfull(char board[ROW][COL], int row, int col)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
		{
			if (board[i][j] == ' ')
			{
				return 0;
			}
		}
	}
	return 1;
}


char Iswin(char board[ROW][COL], int row, int col)
{
	//�ж��ֱ�д���ˣ�
	
	
	//���ж���
	int i = 0;
	for (i = 0; i < row; i++)
	{
		if (board[i][0] == board[i][1] && board[i][1] == board[i][2] && board[i][1] != ' ')
		{
			return board[i][1];
		}
	}
	//��
	int j = 0;
	for (j = 0; j < col; j++)
	{
		if (board[0][j] == board[1][j] && board[1][j] == board[2][j] && board[1][j] != ' ')
		{
			return board[1][j];
		}
	}
	//б
	if (board[0][0] == board[1][1] && board[1][1] == board[2][2] && board[1][1] != ' ')
	{
		return board[1][1];
	}
	if (board[0][2] == board[1][1] && board[1][1] == board[2][0] && board[1][1] != ' ')
	{
		return board[1][1];
	}
	//���ˣ�
	if (Isfull(board, ROW, COL))
	{
		return 'Q';
	}
	else
		return 'C';
}
