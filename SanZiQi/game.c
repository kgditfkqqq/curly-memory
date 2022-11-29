#define _CRT_SECURE_NO_WARNINGS 1

#include"game.h"

void Display_space(char board[ROW][COL], int row, int col)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
		{
			board[i][j]= ' ';
		}
	}

}


void Display_picture(char board[ROW][COL],int row,int col)
{
	int i = 0;
	int j = 0;

	for (i = 0; i < row; i++)
	{
		//"  |  |  "
		for (j = 0; j < col; j++)
		{
			printf(" %c ", board[i][j]);
			if (j < col - 1)
			{
				printf("|");
			}

		}
		printf("\n");

		//"---|---|---"
		if(i<row-1)
		{
			for (j = 0; j < col; j++)
			{
				printf("---");
				if (j < col - 1)
				{
					printf("|");
				}
			}
			printf("\n");
		}

	}

}

void Player(char board[ROW][COL], int row, int col)
{
	int x = 0;
	int y = 0;
	printf("�����\n");
	while (1)
	{
		printf("��ѡ������λ�ã�");
		scanf("%d %d", &x, &y);
		//�ж�����Ϸ���
		if (x>=1 && x<=row  && y>=1 && y<=col)
		{
			//�ж��Ƿ�����
			if (board[x - 1][y - 1] == ' ')
			{
				board[x - 1][y - 1] = '*';
				break;
			}
			else
			{
				printf("�˴�����");
			}
		}
		else
		{
			printf("������ѡ��");
		}
	}
}


void Computer(char board[ROW][COL], int row, int col)
{
	printf("�����ߣ�\n");
	while (1)
	{

		int x = rand()%row;
		int y = rand()%col;
		printf("%d %d\n",x+1,y+1);
			if (board[x][y] == ' ')
			{
				board[x][y] = '#';
				break;
			}
	}

}

int Isfull(char board[ROW][COL],int row,int col)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
		{
			if (board[i][j] == ' ')
				return 0;
		}

	}
	return 1;
}


char Iswin(char board[ROW][COL], int row, int col)
{
	int i = 0;
	int j = 0;

	//�ж���һ��ǵ��Ի�ʤ

	//�ж�����
	for(i=0;i<row;i++)
	{
		if (board[i][0] == board[i][1] && board[i][1] == board[i][2] && board[i][0]!=' ')
			return board[i][0];
	}

	//�ж�����
	for (i = 0; i < row; i++)
	{
		if (board[0][i] == board[1][i] && board[1][i] == board[2][i] && board[0][i]!=' ')
			return board[0][i];
	}

	//�ж϶Խ���
	if (board[0][0] == board[1][1] && board[1][1] == board[2][2] && board[1][1]!=' ')
		return board[1][1];
	if (board[0][2] == board[1][1] && board[1][1] == board[2][0] && board[1][1]!=' ')
		return board[1][1];

	//�ж��Ƿ�ƽ�ֺ��Ƿ����
	//��Ϊ1��δ��Ϊ0
	int ret = Isfull(board, row, col);
	if (ret == 1)
	{
		return 'Q';
	}
	return 'C';

}