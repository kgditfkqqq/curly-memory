#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<stdlib.h>
#include<time.h>

#define MINE_COUNT 10

#define ROW 9
#define COL 9

#define ROWS ROW+2
#define COLS COL+2

//��ʼ������
void IniArray(char board[ROWS][COLS], int rows, int cols, char set);

//��ӡͼ��
void Display(char board[ROWS][COLS], int row, int col);

//�����׵�����
void Product(char mine[ROWS][COLS], int row, int col, int mine_count);

//�û�ѡ��ɨ�׵�����
//�жϵ�ǰ�Ƿ�����
//��ʾ��Χ�׵ĸ���
void Player(char show[ROWS][COLS],char mine[ROWS][COLS], int row, int col,int mine_count);