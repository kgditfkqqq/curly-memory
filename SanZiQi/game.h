#define _CRT_SECURE_NO_WARNINGS 1

#define ROW 3
#define COL 3
#include<stdio.h>
#include<stdlib.h>
#include<time.h>


//初始化棋盘
void Display_space(char board[ROW][COL],int row,int col);
//打印图形
void Display_picture(char board[ROW][COL],int row,int col);


// 玩家下棋
void Player(char board[ROW][COL], int row, int col);

// 电脑下棋
void Computer(char board[ROW][COL], int row, int col);

//胜负判断
//玩家胜利 - '#'
//电脑胜利 - '*'
//平局     -  0
//游戏继续 -  1
char Iswin(char board[ROW][COL], int row, int col);