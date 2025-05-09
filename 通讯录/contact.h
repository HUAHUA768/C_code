#pragma once

//����ͷ�ļ�
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<assert.h>
#include<stdlib.h>


//�����
#define MAX 100
#define MAX_NAME 20
#define MAX_SEX 5
#define MAX_TELE 12
#define MAX_ADDR 30
#define DEFAULT_SZ 3
#define INC_SZ 2

// ö�����ͣ���ʾͨѶ¼�еĲ���ѡ��
enum OPTION
{
	EXIT,// 0 - �˳�����
	ADD,// 1 - �����ϵ��
	DEL,// 2 - ɾ����ϵ��
	SEARCH,// 3 - ������ϵ��
	MODIFY,// 4 - �޸���ϵ����Ϣ
	SHOW,// 5 - ��ʾ������ϵ����Ϣ
	SORT // 6 - ����������ĸΪ������ϵ��һ������
};

// ������˻�����Ϣ�ṹ��
typedef struct PeoInfo
{
	char name[MAX_NAME];//����
	int age;//����
	char sex[MAX_SEX];//�Ա�
	char tele[MAX_TELE];//�绰
	char addr[MAX_ADDR];//��ַ
}PeoInfo;

// ����ͨѶ¼�ṹ��
typedef struct Contact
{
	struct PeoInfo* data;// ָ����˻�����Ϣ��ָ��
	int sz; // ��ǰͨѶ¼����ϵ�˵�����
	int capacity;// ͨѶ¼����
}Contact;

//��ʼ��ͨѶ¼
void InitContact(Contact* pc);

//���ͨѶ¼
void AddContact(Contact* pc);

//ɾ��ͨѶ¼
void DelContact(Contact* pc);

//��ʾ������ϵ�˵���Ϣ
void ShowContact(const Contact* pc);

//ɾ��ָ����ϵ��
void DelContact(Contact* pc);

//����ָ����ϵ��
void SearchContact(const Contact* pc);

//�޸�ָ����ϵ��
void ModifyContact(Contact* pc);

//������ϵ��
void DestroyContact(Contact* pc);
