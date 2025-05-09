#define _CRT_SECURE_NO_WARNINGS
#include "contact.h"

//后期要解决内存回收数据消失的问题:使用文件的读写函数
//我们在退出通讯录前保存一下

//增容
void CheckCapacity(Contact* pc)
{
	if (pc->count == pc->capacity)
	{
		PeoInfo* ptr = (PeoInfo*)realloc(pc->data, (pc->capacity + INC_SZ) *
			sizeof(PeoInfo));
		if (ptr == NULL)
		{
			printf("AddContact::%s\n", strerror(errno));
			return;
		}
		else
		{
			pc->data = ptr;
			pc->capacity += INC_SZ;
			printf("增容成功\n");
		}
	}
}

//静态版本
//初始化通讯录
//void InitContact(Contact* pc)
//{
//	assert(pc);
//	pc->count = 0;
//	memset(pc->data, 0, sizeof(pc->data));
//}

//加载文件的信息到通讯录中
void LoadContact(Contact* pc)
{
	FILE* pfRead = fopen("Contact.txt", "rb");
	if (pfRead == NULL)
	{
		perror("LoadContact:");
		return;
	}
	
	
	//先拿一个临时变量tmp接收从文件读取的信息
	PeoInfo tmp = { 0 };
	//什么时候停下
	//fread返回的是读取到的元素的个数，当返回的是0时，说明数据读完了
	while (fread(&tmp, sizeof(PeoInfo), 1, pfRead) == 1)
	{
		//通讯录初始大小只有3，能否放得下？需要扩容
		CheckCapacity(pc);
		pc->data[pc->count] = tmp;
		//用count即可，无需另外新增变量i
		pc->count++;
	}
	fclose(pfRead);
	pfRead = NULL;
}


//动态版本
int InitContact(Contact* pc)
{
	assert(pc);
	pc->count = 0;
	//data为指针，此时尚未开辟空间
	pc->data = (PeoInfo*)calloc(Default_SZ, sizeof(PeoInfo));
	//默认大小为3，可以写成宏定义
	if (pc->data == NULL)
	{
		printf("InitContact::%s\n", strerror(errno));
		return 1;
	}
	pc->capacity = Default_SZ;//默认大小
	//加载文件的信息到通讯录中
	LoadContact(pc);
	return 0;
}


//查找联系人
int FindByName(Contact* pc, char name[])
{
	assert(pc);
	int i = 0;
	for (i = 0; i < pc->count; i++)
	{
		if (strcmp(name, pc->data[i].name) == 0)
		{
			return i;
		}
	}
	return -1;
}

//静态版本
//添加联系人到通讯录
//void AddContact(Contact* pc)
//{
//	assert(pc);
//	//通讯录不满才能增加
//	if (pc->count == MAX)//又来个100，我们把100弄成宏定义
//	{
//		printf("通讯录已满，无法添加\n");
//		return;
//	}
//	printf("请输入名字:>\n");
//	scanf("%s", pc->data[pc->count].name);//name是个数组名，不用取地址
//	printf("请输入年龄:>\n");
//	scanf("%d", &(pc->data[pc->count].age));//age是整型，要取地址
//	printf("请输入性别:>\n");
//	scanf("%s", pc->data[pc->count].sex);
//	printf("请输入电话:>\n");
//	scanf("%s", pc->data[pc->count].tele);
//	printf("请输入地址:>\n");
//	scanf("%s", pc->data[pc->count].addr);
//	pc->count++;
//	printf("增加成功\n");
//}



//动态增容
void AddContact(Contact* pc)
{
	assert(pc);
	//增容
	CheckCapacity(pc);
	printf("请输入名字:>\n");
	scanf("%s", pc->data[pc->count].name);//name是个数组名，不用取地址
	printf("请输入年龄:>\n");
	scanf("%d", &(pc->data[pc->count].age));//age是整型，要取地址
	printf("请输入性别:>\n");
	scanf("%s", pc->data[pc->count].sex);
	printf("请输入电话:>\n");
	scanf("%s", pc->data[pc->count].tele);
	printf("请输入地址:>\n");
	scanf("%s", pc->data[pc->count].addr);
	pc->count++;
	printf("增加成功\n");
}


//显示通讯录信息
void ShowContact(const Contact* pc)
{
	assert(pc);
	int i = 0;
	printf("%-20s\t%-5s\t%-10s\t%-12s\t%-30s\n", "姓名", "年龄", "性别", "电话", "地址");
	//汉字占用两个字符，算上\0,得给5s
	for (i = 0; i < pc->count; i++)
	{
		printf("%-20s\t%-5d\t%-10s\t%-12s\t%-30s\n",pc->data[i].name,
			pc->data[i].age ,pc->data[i].sex,pc->data[i].tele ,
			pc->data[i].addr);
		//加负号实现左对齐
	}
}

//删除联系人
void DelContact(Contact* pc) 
{
	assert(pc);
	//通讯录中没有联系人则不需要删
	if (pc->count == 0)
	{
		printf("通讯录为空，没有信息可以删除\n");
	}
	char name[MAX_NAME] = { 0 };
	printf("请输入要删除的联系人的名字\n");
	scanf("%s", name);
	//1.查找
	//删除、搜索、修改，都需要查找，故把查找分装成一个函数
	int pos = FindByName(pc, name);//找到返回下标，找不到返回-1

	if (pos == -1)
	{
		printf("要删除的人不存在\n");
		return;
	}
	//2.删除:往前覆盖
	int i = 0;
	for (i = pos; i < pc->count-1; i++)//count为什么-1？
		//因为当count=100时，data[i+1]=data[100],越界了
	{
		pc->data[i] = pc->data[i + 1];
	}
	//这样最后一个元素还留着，需要额外删除吗？
	//不需要
	pc->count--;//count--,这样在其他函数里访问不到最后一个元素
	printf("删除成功\n");

}

//查找联系人
void SearchContact(Contact* pc)
{
	assert(pc);
	if (pc->count == 0)
	{
		printf("通讯录为空，没有联系人可以查找\n");
	}
	char name[MAX_NAME] = { 0 };
	printf("请输入要查找的联系人的名字\n");
	scanf("%s", name);
	int pos = FindByName(pc, name);//找到返回下标，找不到返回-1

	if (pos == -1)
	{
		printf("要查找的人不存在\n");
		return;
	}
	int i = pos;
	printf("%-20s\t%-5s\t%-10s\t%-12s\t%-30s\n", "姓名", "年龄", "性别", "电话", "地址");
	printf("%-20s\t%-5d\t%-10s\t%-12s\t%-30s\n", pc->data[i].name,
		pc->data[i].age, pc->data[i].sex, pc->data[i].tele,
		pc->data[i].addr);
}

//修改联系人
void ModifyContact(Contact* pc)
{
	assert(pc);
	if (pc->count == 0)
	{
		printf("通讯录为空，没有联系人可以修改\n");
	}
	char name[MAX_NAME] = { 0 };
	printf("请输入要修改的联系人的名字\n");
	scanf("%s", name);
	int pos = FindByName(pc, name);//找到返回下标，找不到返回-1

	if (pos == -1)
	{
		printf("要修改的人不存在\n");
		return;
	}
	printf("要修改的人信息成功找到，下面开始修改\n");
	printf("请输入新的名字:>\n");
	scanf("%s", pc->data[pos].name);//name是个数组名，不用取地址
	printf("请输入新的年龄:>\n");
	scanf("%d", &(pc->data[pos].age));//age是整型，要取地址
	printf("请输入新的性别:>\n");
	scanf("%s", pc->data[pos].sex);
	printf("请输入新的电话:>\n");
	scanf("%s", pc->data[pos].tele);
	printf("请输入新的地址:>\n");
	scanf("%s", pc->data[pos].addr);
	printf("修改成功\n");
}

int cmp_peo_by_name(const void* e1, const void* e2)
{
	return strcmp(((PeoInfo*)e1)->name, ((PeoInfo*)e2)->name);
	//e1、e2是指针，应当使用箭头而非点

}
//排序
//按照名字来排序
void SortContact(Contact* pc)
{
	assert(pc);
	qsort(pc->data, pc->count, sizeof(PeoInfo), cmp_peo_by_name);
	printf("排序成功\n");
}

//销毁
void DestroyContact(Contact* pc)
{
	assert(pc);
	free(pc->data);
	pc->data = NULL;
	//空间回收
}

//保存通讯录
void SaveContact(const Contact* pc)
{
	FILE* pfWrite = fopen("Contact.txt", "wb");
	if (pfWrite == NULL)
	{
		perror("SaveContact:");
		return;
	}
	//count:一次写一个
	//用二进制来保存
	int i = 0;
	for (i = 0; i < pc->count; i++)
	{
		fwrite(pc->data+i, sizeof(PeoInfo), 1, pfWrite);
		//数组别忘了i，否则每次都写到首元素地址去了
		//data[i]不是一个地址
	}
	fclose(pfWrite);
	pfWrite = NULL;

}