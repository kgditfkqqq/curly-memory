#define _CRT_SECURE_NO_WARNINGS 1

#include"game.h"


//菜单
void menu()
{
	printf("*************************************\n");
	printf("*******  1.play       0.exit  *******\n");
	printf("*************************************\n");
}

void game()
{	
	//存储二维数组
	char board[ROW][COL];
	//初始化棋盘
	Display_space(board, ROW, COL);
	//打印图形
	Display_picture(board, ROW, COL);

	char ret = 0;
	while (1)
	{
		// 玩家下棋
		Player(board, ROW, COL);
		Display_picture(board, ROW, COL);

		//胜负判断
		//玩家胜利 - '*'
		//电脑胜利 - '#'
		//平局     - 'Q'
		//游戏继续 - 'C'
		ret = Iswin(board, ROW, COL);
		if (ret != 'C')
		{
			break;
		}

		// 电脑下棋
		Computer(board, ROW, COL);
		Display_picture(board, ROW, COL);

		ret = Iswin(board, ROW, COL);
		if (ret != 'C')
		{
			break;
		}
	}
	//判断谁获胜
	if (ret == '*')
	{
		printf("玩家获胜\n");
	}
	else if (ret == '#')
	{
		printf("电脑获胜\n");
	}
	else
	{
		printf("平局\n");
	}
	Display_picture(board, ROW, COL);

}


int main()
{
	int input = 0;
	srand((unsigned int)time(NULL));

	do 
	{
		menu();//打印菜单
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			printf("开始游戏\n");
			game();
			break;
		case 0:
			printf("退出游戏\n");
			break;
		default:
			printf("重新输入\n");
			break;
		}

	} while (input);

	return 0;
}