#pragma once
#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <errno.h>
#define MAX 100
#define MAX_NAME 20  //�Ժ����ָĶ�ֻ�������
#define MAX_SEX 10
#define MAX_TELE 12
#define MAX_ADDR 30
#define Default_SZ 3//��ʼ��С
#define INC_SZ 2
typedef struct PeoInfo
{
	char name[MAX_NAME];
	int age;
	char sex[MAX_SEX];
	char tele[MAX_TELE];
	char addr[MAX_ADDR];
}PeoInfo;

//��̬�汾�����ڴ���Ҫ���գ���exit������

//��̬�汾
//typedef struct Contact
//{
//	PeoInfo data[MAX];//100�˵���Ϣ
//	int count;//��¼���˶����˵���Ϣ
//	//����������һ��
//}Contact;

//��̬�İ汾��3+2+2+2+...��
typedef struct Contact
{
	PeoInfo* data;//100�˵���Ϣ
	int count;//��¼���˶����˵���Ϣ
	//����������һ��
	int capacity;//��¼����
}Contact;


//��ʼ��ͨѶ¼
int InitContact(Contact* pc);

//�����ϵ�˵�ͨѶ¼
void AddContact(Contact* pc);

//��ʾͨѶ¼��Ϣ
void ShowContact(const Contact* pc);

//ɾ��ͨѶ¼
void DelContact(Contact* pc);

//����
//int FindByName(Contact* pc, char name[]);
//ֻ��contact.c�е��ã���������

//������ϵ��
void SearchContact(Contact* pc);

//�޸���ϵ��
void ModifyContact(Contact* pc);

//����ͨѶ¼�е���Ϣ
void SortContact(Contact* pc);

//��������Ŀռ�
void DestroyContact(Contact* pc);

//����ͨѶ¼���ļ�
void SaveContact(Contact* pc);

//��ͨѶ¼��ʱ���ٴζ��룬���޸ĳ�ʼ��ͨѶ¼�Ĳ���
//��ȡ�ļ���Ϣ��ͨѶ¼
void LoadContact(Contact* pc);