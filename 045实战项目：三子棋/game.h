#pragma once
#define ROW 3
#define COL 3
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h> //srand����
#include <time.h>  //time����
//ΪʲôҪ�궨�����У�
//���Ҫ��������Ļ�����Ҫһ�����������ȥ�ģ����������滻Ϊ�꣬����ֻ���޸ĺ궨�弴��

//��ʼ������
void InitBoard(char board[ROW][COL], int row, int col);
//��ӡ����
void DisplayBoard(char board[ROW][COL], int row, int col);
//�������
void Playermove(char board[ROW][COL], int row, int col);
//��������
void Computermove(char board[ROW][COL], int row, int col);
//���-����ֵ
//�˻�Ӯ-��#��
//���Ӯ-��*��
//ƽ�֣��������ˣ�-��Q��
//��Ϸ����-��C��

//��3����3��б3
char Iswin(char board[ROW][COL], int row, int col);
int Isfull(char board[ROW][COL], int row, int col);

