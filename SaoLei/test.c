#define _CRT_SECURE_NO_WARNINGS 1
#include"game.h"

//打印菜单
void meun()
{
	printf("*************************************************\n");
	printf("***********     1.play     0.exit     ***********\n");
	printf("*************************************************\n");
}


void game()
{
	//定义数组
	char mine[ROWS][COLS] = {0};//雷的位置
	char show[ROWS][COLS] = {0};//排查雷的位置

	//给数组赋值
	//初始化数组
	IniArray(mine, ROWS, COLS,'0');
	IniArray(show, ROWS, COLS,'*');

	//生成雷的坐标
	Product(mine, ROW, COL, MINE_COUNT);
	//Display(mine, ROW, COL);

	//打印图形
	Display(show, ROW, COL);
	
	//用户选择扫雷的坐标
	//判断当前是否有雷
	//显示周围雷的个数
	Player(show,mine, ROW, COL,MINE_COUNT);




	//判断胜负 
}


int main()
{
	int input = 0;//定义用户选择
	srand((unsigned int)time(NULL));
	do
	{
		meun();//打印菜单
		printf("请选择：");
		scanf("%d", &input);//用户选择
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
			printf("请重新选择\n");
			break;
		}

	} while (input);


	return 0;
}