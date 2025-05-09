#pragma once
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>  //随机数
#define ROW 9
#define COL 9
#define ROWS 11
#define COLS 11
#include <time.h>

void Init(char board[ROWS][COLS], int rows, int cols,char ch);
void Show(char board[ROWS][COLS], int rows, int cols);
void Setmine(char mine[ROWS][COLS], int row, int cols,int n);
//埋雷
#define number 10 //埋雷个数
//计算雷数
int get_mine_count(char mine[ROWS][COLS], int rows, int cols);

//排查雷
void Findmine(char mine[ROWS][COLS], char show[ROWS][COLS], int row, int col, int n);