#define _CRT_SECURE_NO_WARNINGS 1

#define ROW 3
#define COL 3
#include<stdio.h>
#include<stdlib.h>
#include<time.h>


//��ʼ������
void Display_space(char board[ROW][COL],int row,int col);
//��ӡͼ��
void Display_picture(char board[ROW][COL],int row,int col);


// �������
void Player(char board[ROW][COL], int row, int col);

// ��������
void Computer(char board[ROW][COL], int row, int col);

//ʤ���ж�
//���ʤ�� - '#'
//����ʤ�� - '*'
//ƽ��     -  0
//��Ϸ���� -  1
char Iswin(char board[ROW][COL], int row, int col);