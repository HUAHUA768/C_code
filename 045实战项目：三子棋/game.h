#pragma once
#define ROW 3
#define COL 3
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h> //srand函数
#include <time.h>  //time函数
//为什么要宏定义行列？
//如果要改五子棋的话，需要一个个相关数字去改，而把它们替换为宏，将来只需修改宏定义即可

//初始化棋盘
void InitBoard(char board[ROW][COL], int row, int col);
//打印棋盘
void DisplayBoard(char board[ROW][COL], int row, int col);
//玩家下棋
void Playermove(char board[ROW][COL], int row, int col);
//电脑下棋
void Computermove(char board[ROW][COL], int row, int col);
//情况-返回值
//人机赢-‘#’
//玩家赢-‘*’
//平局（棋盘满了）-‘Q’
//游戏继续-‘C’

//横3，竖3，斜3
char Iswin(char board[ROW][COL], int row, int col);
int Isfull(char board[ROW][COL], int row, int col);

