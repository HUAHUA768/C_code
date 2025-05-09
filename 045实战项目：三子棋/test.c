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
	//初始化棋牌（数组），给每个元素放上空格
	InitBoard(board, ROW, COL);
	//打印棋盘
	DisplayBoard(board,ROW,COL);
	//开始下棋
	while (1)
	{
		Playermove(board, ROW, COL);
		//判断输赢
		ret= Iswin(board, ROW, COL);
		if (ret != 'C')
		{
			break;
		}
		DisplayBoard(board, ROW, COL);
		
		Computermove(board, ROW, COL);
		//判断输赢
		ret = Iswin(board, ROW, COL);
		if (ret != 'C')
		{
			break;
		}
		DisplayBoard(board, ROW, COL);
		

	}
	if (ret == '*')
	{
		printf("玩家获胜\n");
	}
	else if (ret == '#')
	{
		printf("人机获胜\n");
	}
	else
	{
		printf("平局\n");
	}
	DisplayBoard(board, ROW, COL);
}
int main()
{
	int input = 0;
	//先在这里设置随机数的生成起点
	srand((unsigned int)time(NULL));
	do
	{
		menu();
		printf("请选择模式\n");
		
		scanf("%d", &input);
		switch (input)
		{
		case 1:game();
			break;
		case 0:printf("退出游戏\n");
			break;
		default:printf("选择错误\n");
			break;
		}

	} while (input);
	system("pause");
	return 0;
}