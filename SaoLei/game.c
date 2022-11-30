#define _CRT_SECURE_NO_WARNINGS 1
#include"game.h"

//初始化数组
void IniArray(char board[ROWS][COLS], int rows, int cols, char set)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < rows; i++)
	{
		for (j = 0; j < cols; j++)
		{
			board[i][j] = set;
		}
	}

}


//打印图形
void Display(char board[ROWS][COLS], int row, int col)
{
	int i = 0;
	int j = 0;
	printf("-----------------------------------\n");
	for (i = 0; i <= col; i++)
	{
		printf("%d ", i);
	}
	printf("\n");
	for (i = 1; i <= row; i++)
	{
		printf("%d ", i);
		for (j = 1; j <= col; j++)
		{
			printf("%c ", board[i][j]);
		}
		printf("\n");
	}
	printf("\n");
	printf("-----------------------------------\n");

}

//生成雷的坐标
void Product(char mine[ROWS][COLS], int row, int col,int mine_count)
{
	int count = mine_count;
	while(count)
	{
		int x = rand() % row + 1;
		int y = rand() % col + 1;
		if (mine[x][y] == '0')
		{
			//printf("%d%d \n", x, y);//打印雷的坐标
			mine[x][y] = '1';
			count--;
		}
	}


}


//显示周围雷的个数
static int ShowMine(char show[ROWS][COLS], char mine[ROWS][COLS], int x, int y) 
{
	int i = x; 
	int j = y;
	int count = 0;
	for (i = x - 1; i <= x + 1; i++)
	{
		for (j = y - 1; j <= y + 1; j++)
		{
			if (mine[i][j] == '1')
			{
				count++;
			}
		}
	}
	return count;
}

//用户选择扫雷的坐标
//判断当前是否有雷
//显示周围雷的个数
void Player(char show[ROWS][COLS],char mine[ROWS][COLS], int row, int col,int mine_count) {
	int x = 0;
	int y = 0;
	int count = row*col-mine_count;

	while (count)
	{
		printf("%d\n", count);
		printf("请选择要点击的位置：");
		scanf("%d%d", &x, &y);
		if (mine[x][y] == '1')//判断当前是否有雷
		{
			printf("gameover\n");
			count = 0;
			break;
		}
		else
		{
			if (show[x][y] == '*')
			{
				int ret = ShowMine(show, mine, x, y);	//ret为周围雷的个数
				show[x][y] = ret + '0';
				Display(show, ROW, COL);
				count--;
			}
			else
			{
				printf("当前区域以排查过，请重新选择：\n");
			}

		}
	}
	if (count == 1)
	{
		printf("win!!\n");
	}


}
