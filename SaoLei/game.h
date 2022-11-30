#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<stdlib.h>
#include<time.h>

#define MINE_COUNT 10

#define ROW 9
#define COL 9

#define ROWS ROW+2
#define COLS COL+2

//初始化数组
void IniArray(char board[ROWS][COLS], int rows, int cols, char set);

//打印图形
void Display(char board[ROWS][COLS], int row, int col);

//生成雷的坐标
void Product(char mine[ROWS][COLS], int row, int col, int mine_count);

//用户选择扫雷的坐标
//判断当前是否有雷
//显示周围雷的个数
void Player(char show[ROWS][COLS],char mine[ROWS][COLS], int row, int col,int mine_count);