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
	printf("玩家走\n");
	while (1)
	{
		printf("请选择落子位置：");
		scanf("%d %d", &x, &y);
		//判断坐标合法性
		if (x>=1 && x<=row  && y>=1 && y<=col)
		{
			//判断是否有子
			if (board[x - 1][y - 1] == ' ')
			{
				board[x - 1][y - 1] = '*';
				break;
			}
			else
			{
				printf("此处有子");
			}
		}
		else
		{
			printf("请重新选择");
		}
	}
}


void Computer(char board[ROW][COL], int row, int col)
{
	printf("电脑走：\n");
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

	//判断玩家还是电脑获胜

	//判断三行
	for(i=0;i<row;i++)
	{
		if (board[i][0] == board[i][1] && board[i][1] == board[i][2] && board[i][0]!=' ')
			return board[i][0];
	}

	//判断三列
	for (i = 0; i < row; i++)
	{
		if (board[0][i] == board[1][i] && board[1][i] == board[2][i] && board[0][i]!=' ')
			return board[0][i];
	}

	//判断对角线
	if (board[0][0] == board[1][1] && board[1][1] == board[2][2] && board[1][1]!=' ')
		return board[1][1];
	if (board[0][2] == board[1][1] && board[1][1] == board[2][0] && board[1][1]!=' ')
		return board[1][1];

	//判断是否平局和是否结束
	//满为1；未满为0
	int ret = Isfull(board, row, col);
	if (ret == 1)
	{
		return 'Q';
	}
	return 'C';

}