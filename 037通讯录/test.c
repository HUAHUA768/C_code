#define _CRT_SECURE_NO_WARNINGS
#include "contact.h"

//通讯录：
//1.静态版本：联系人只能开辟100个
//2.动态版本：要多少开多少
//3.文件版本：退出程序之后联系人信息依然保留

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
	printf("*****1.增加联系人**************2.删除指定联系人****\n");
	printf("*****3.查找联系人**************4.修改联系人********\n");
	printf("*****5.排序********************6.显示联系人********\n");
	printf("******************0.退出***************************\n");
	printf("***************************************************\n");
}
int main()
{
	int input = 0;
	Contact con;//通讯录

	//初始化
	InitContact(&con);
	do
	{
		menu();
		printf("请选择:>\n");
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
			//保存通讯录
			DestroyContact(&con);
			printf("退出\n");
			break;
		}
	
	} while (input);
	system("pause");
	return 0;
}