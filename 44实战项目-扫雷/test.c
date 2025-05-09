#include "game.h"
void menu()
{
	printf("****************************\n");
	printf("****1.play   0.exit*********\n");
	printf("****************************\n");
}
void game()
{
	//创建棋盘
	char mine[ROWS][COLS] = { 0 };//埋雷
	char show[ROWS][COLS] = { 0 };//展示信息
	//初始化棋盘
	Init(mine, ROWS, COLS, '0');
	Init(show, ROWS, COLS, '*');
	//展示棋盘

	Show(show, ROWS, COLS);
	//埋雷
	Setmine(mine, ROW, COL, number);
	/*Show(mine, ROWS, COLS);*/
	//排查雷
	Findmine(mine, show, ROW, COL, number);
}
int main()
{
	int input = 0;
	srand((unsigned int)time(NULL));//设置随机数生成起点
	do
	{
		menu();
		printf("请选择模式\n");
		scanf("%d", &input);
		switch (input)
		{
		case 1:printf("游戏开始\n");
			game();
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