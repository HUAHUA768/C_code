#pragma once
#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <errno.h>
#define MAX 100
#define MAX_NAME 20  //以后数字改动只需改这里
#define MAX_SEX 10
#define MAX_TELE 12
#define MAX_ADDR 30
#define Default_SZ 3//起始大小
#define INC_SZ 2
typedef struct PeoInfo
{
	char name[MAX_NAME];
	int age;
	char sex[MAX_SEX];
	char tele[MAX_TELE];
	char addr[MAX_ADDR];
}PeoInfo;

//动态版本最终内存需要回收，在exit处进行

//静态版本
//typedef struct Contact
//{
//	PeoInfo data[MAX];//100人的信息
//	int count;//记录存了多少人的信息
//	//把这俩合在一块
//}Contact;

//动态的版本（3+2+2+2+...）
typedef struct Contact
{
	PeoInfo* data;//100人的信息
	int count;//记录存了多少人的信息
	//把这俩合在一块
	int capacity;//记录容量
}Contact;


//初始化通讯录
int InitContact(Contact* pc);

//添加联系人到通讯录
void AddContact(Contact* pc);

//显示通讯录信息
void ShowContact(const Contact* pc);

//删除通讯录
void DelContact(Contact* pc);

//查找
//int FindByName(Contact* pc, char name[]);
//只在contact.c中调用，无需声明

//查找联系人
void SearchContact(Contact* pc);

//修改联系人
void ModifyContact(Contact* pc);

//排序通讯录中的信息
void SortContact(Contact* pc);

//销毁申请的空间
void DestroyContact(Contact* pc);

//保存通讯录到文件
void SaveContact(Contact* pc);

//打开通讯录的时候再次读入，得修改初始化通讯录的部分
//读取文件信息到通讯录
void LoadContact(Contact* pc);