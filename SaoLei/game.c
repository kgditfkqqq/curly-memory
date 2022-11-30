#define _CRT_SECURE_NO_WARNINGS 1
#include"game.h"

//��ʼ������
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


//��ӡͼ��
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

//�����׵�����
void Product(char mine[ROWS][COLS], int row, int col,int mine_count)
{
	int count = mine_count;
	while(count)
	{
		int x = rand() % row + 1;
		int y = rand() % col + 1;
		if (mine[x][y] == '0')
		{
			//printf("%d%d \n", x, y);//��ӡ�׵�����
			mine[x][y] = '1';
			count--;
		}
	}


}


//��ʾ��Χ�׵ĸ���
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

//�û�ѡ��ɨ�׵�����
//�жϵ�ǰ�Ƿ�����
//��ʾ��Χ�׵ĸ���
void Player(char show[ROWS][COLS],char mine[ROWS][COLS], int row, int col,int mine_count) {
	int x = 0;
	int y = 0;
	int count = row*col-mine_count;

	while (count)
	{
		printf("%d\n", count);
		printf("��ѡ��Ҫ�����λ�ã�");
		scanf("%d%d", &x, &y);
		if (mine[x][y] == '1')//�жϵ�ǰ�Ƿ�����
		{
			printf("gameover\n");
			count = 0;
			break;
		}
		else
		{
			if (show[x][y] == '*')
			{
				int ret = ShowMine(show, mine, x, y);	//retΪ��Χ�׵ĸ���
				show[x][y] = ret + '0';
				Display(show, ROW, COL);
				count--;
			}
			else
			{
				printf("��ǰ�������Ų����������ѡ��\n");
			}

		}
	}
	if (count == 1)
	{
		printf("win!!\n");
	}


}
