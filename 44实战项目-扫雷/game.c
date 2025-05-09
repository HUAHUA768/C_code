#include "game.h"
void Init(char board[ROWS][COLS], int rows, int cols,char ch)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < rows; i++)
	{
		for (j = 0; j < cols; j++)
		{
			board[i][j] = ch;
		}
	}
}
void Show(char board[ROWS][COLS], int rows, int cols)
{
	int i = 1;
	int j = 1;
	for (i = 0; i <= ROW; i++)
	{
		printf("%d ", i);
	}
	printf("\n");
	for (i = 1; i <= ROW; i++)
	{
		printf("%d ", i);
		for (j = 1; j <= COL; j++)
		{
			printf("%c ", board[i][j]);
		}
		printf("\n");
	}
}
void Setmine(char board[ROWS][COLS], int row, int col,int n)
{
	int i = 1;
	while(i<=n)
	{
		int x = rand() % row + 1;  //0~8,��+1
		int y = rand() % col + 1;
		//�ж��Ƿ��ظ�����
		if (board[x][y] == '0')
		{
			board[x][y] = '1';
			i++;
		}
	}
}

//������

//�Ų���
void Findmine(char mine[ROWS][COLS], char show[ROWS][COLS], int row, int col, int n)
{
	int i = 0;
	while( i < row * col - number)
	{
		int x = 0;
		int y = 0;
		printf("��������Ҫ��ѯ������\n");
		scanf("%d %d", &x, &y);
		//�ж��Ƿ�Խ��
		if (x >= 1 && x <= 9 && y >= 1 && y <= 9)
		{
			if (mine[x][y] == '1')
			{
				printf("���ź�����������\n");
				Show(mine, ROWS, COLS);
				break;
			}
			else
			{
				if (show[x][y] == '*')
				{
					show[x][y] = mine[x - 1][y - 1] + mine[x - 1][y] + mine[x + 1][y] 
						+ mine[x][y + 1]+ mine[x + 1][y + 1] + mine[x + 1][y] 
						+ mine[x + 1][y - 1] + mine[x][y - 1] - 8 * '0' + '0';
					Show(show, ROWS, COLS);
					i++;
				}
				else
				{
					printf("����������������Ų�,����������\n");
				}
			}
		}
		else
		{
			printf("�Ƿ����꣬����������\n");
		}
	}
	if (i == row * col - number)
	{
		printf("��ϲ�����׳ɹ�\n");
		Show(mine, ROWS, COLS);
	}
	
}