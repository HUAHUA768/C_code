#pragma once

//调用头文件
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<assert.h>
#include<stdlib.h>


//定义宏
#define MAX 100
#define MAX_NAME 20
#define MAX_SEX 5
#define MAX_TELE 12
#define MAX_ADDR 30
#define DEFAULT_SZ 3
#define INC_SZ 2

// 枚举类型，表示通讯录中的操作选项
enum OPTION
{
	EXIT,// 0 - 退出程序
	ADD,// 1 - 添加联系人
	DEL,// 2 - 删除联系人
	SEARCH,// 3 - 搜索联系人
	MODIFY,// 4 - 修改联系人信息
	SHOW,// 5 - 显示所有联系人信息
	SORT // 6 - 按名字首字母为所有联系人一键排序
};

// 定义个人基本信息结构体
typedef struct PeoInfo
{
	char name[MAX_NAME];//姓名
	int age;//年龄
	char sex[MAX_SEX];//性别
	char tele[MAX_TELE];//电话
	char addr[MAX_ADDR];//地址
}PeoInfo;

// 定义通讯录结构体
typedef struct Contact
{
	struct PeoInfo* data;// 指向个人基本信息的指针
	int sz; // 当前通讯录中联系人的数量
	int capacity;// 通讯录容量
}Contact;

//初始化通讯录
void InitContact(Contact* pc);

//添加通讯录
void AddContact(Contact* pc);

//删除通讯录
void DelContact(Contact* pc);

//显示所有联系人的信息
void ShowContact(const Contact* pc);

//删除指定联系人
void DelContact(Contact* pc);

//查找指定联系人
void SearchContact(const Contact* pc);

//修改指定联系人
void ModifyContact(Contact* pc);

//销毁联系人
void DestroyContact(Contact* pc);
