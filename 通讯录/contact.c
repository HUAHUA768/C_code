#include "contact.h"

// 初始化通讯录，分配内存并设置初始容量和大小
void InitContact(Contact* pc)
{
	assert(pc);
	pc->sz = 0;

	pc->data = (PeoInfo*)malloc(DEFAULT_SZ * sizeof(PeoInfo));
	// 分配内存以存储联系人信息
	if (pc->data == NULL)
	{
		// 如果内存分配失败，打印错误信息
		perror("InitContact");
		return;
	}
	pc->sz = 0;
	pc->capacity = DEFAULT_SZ;
	// 设置初始容量
}

// 检查通讯录容量并增容，如果需要则增加容量
int CheckCapacity(Contact* pc)
{
	if (pc->sz == pc->capacity)
	{
		PeoInfo* ptr = (PeoInfo*)realloc(pc->data, (pc->capacity + INC_SZ) * sizeof(PeoInfo));
		if (ptr == NULL)
		{
			perror("CheckCapacity");
			return 0;
		}
		else
		{
			pc->data = ptr;
			pc->capacity += INC_SZ;
			printf("增容成功\n");
			return 1;
		}
	}
	return 1;
}

// 添加联系人到通讯录
void AddContact(Contact* pc)
{
	assert(pc);
	if (0 == CheckCapacity(pc))
	{
		printf("通讯录已满，无法添加\n");
		return;
	}
	printf("请输入名字：>");
	scanf("%s", pc->data[pc->sz].name);
	printf("请输入年龄:>");
	scanf("%d", &(pc->data[pc->sz].age));
	printf("请输入性别:>");
	scanf("%s", pc->data[pc->sz].sex);
	printf("请输入电话:>");
	scanf("%s", pc->data[pc->sz].tele);
	printf("请输入地址:>");
	scanf("%s", pc->data[pc->sz].addr);
	pc->sz++;
	printf("成功添加联系人\n");
}

// 显示所有联系人信息
void ShowContact(const Contact* pc)
{
	assert(pc);
	int i = 0;
	printf("%-10s\t%-4s\t%-5s\t%-12s\t%-30s\n", "名字", "年龄", "性别", "电话", "地址");

	for (i = 0; i < pc->sz; i++)
	{
		printf("%-10s\t%-4d\t%-5s\t%-12s\t%-30s\n",
			pc->data[i].name,
			pc->data[i].age,
			pc->data[i].sex,
			pc->data[i].tele,
			pc->data[i].addr);
	}
}

// 根据名字查找联系人
static int FindByName(const Contact* pc, char name[])
{
	int i = 0;
	for (i = 0; i < pc->sz; i++)
	{
		if (strcmp(pc->data[i].name, name) == 0)
		{
			return i;//找到了
		}
	}
	return -1;//找不到
}

// 删除指定联系人
void DelContact(Contact* pc)
{
	if (pc->sz == 0)
	{
		printf("通讯录为空，无法删除\n");
		return;
	}
	char name[MAX_NAME] = { 0 };
	assert(pc);
	printf("请输入你要删除的人名字：>");
	scanf("%s", name);
	//找到要删除的人
	int del = FindByName(pc, name);
	if (del == -1)
	{
		printf("要删除的人不存在\n");
		return;
	}
	int i = 0;
	for (i = del; i < pc->sz - 1; i++)
	{
		pc->data[i] = pc->data[i + 1];
	}
	pc->sz--;
	printf("成功删除联系人\n");
}

// 查找指定联系人
void SearchContact(const Contact* pc)
{
	assert(pc);
	char name[MAX_NAME] = { 0 };
	printf("请输入要查找人的名字：>");
	scanf("%s", name);
	int pos = FindByName(pc, name);
	if (pos == -1)
	{
		printf("要查找的人不存在\n");
	}
	else
	{
		printf("%-10s\t%-4s\t%-5s\t%-12s\t%-30s\n", "名字", "年龄", "性别", "电话", "地址");
		//打印数据
		printf("%-10s\t%-4d\t%-5s\t%-12s\t%-30s\n",
			pc->data[pos].name,
			pc->data[pos].age,
			pc->data[pos].sex,
			pc->data[pos].tele,
			pc->data[pos].addr);
	}
}

// 修改指定联系人信息
void ModifyContact(Contact* pc)
{
	assert(pc);
	char name[MAX_NAME] = { 0 };
	printf("请输入要修改人的名字:>");
	scanf("%s", name);
	int pos = FindByName(pc, name);
	if (pos == -1)
		printf("要修改的人不存在\n");
	else
	{
		printf("请输入名字:>");
		scanf("%s", pc->data[pos].name);
		printf("请输入年龄:>");
		scanf("%d", &(pc->data[pos].age));
		printf("请输入性别:>");
		scanf("%s", pc->data[pos].sex);
		printf("请输入电话:>");
		scanf("%s", pc->data[pos].tele);
		printf("请输入地址:>");
		scanf("%s", pc->data[pos].addr);

		printf("修改成功\n");
	}
}

// 销毁通讯录，释放内存
void DestroyContact(Contact* pc)
{
	free(pc->data);
	pc->data = NULL;
	pc->capacity = 0;
	pc->sz = 0;
}


//按照名字排序
void SortContact(Contact* pc)
{
	if (pc->sz <= 0)
	{
		printf("通讯录没有联系人，请添加\n");
	}
	else
	{
		int i = 0;
		for (i = 0; i < pc->sz - 1; i++)
		{
			int j = 0;
			for (j = 0; j < pc->sz - 1 - i; j++)
			{
				if (strcmp(pc->data[j].name, pc->data[j + 1].name) > 0)
				{
					PeoInfo tmp = pc->data[j];
					pc->data[j] = pc->data[j + 1];
					pc->data[j + 1] = tmp;
				}
			}
		}
		printf("排序成功！");
	}
}


