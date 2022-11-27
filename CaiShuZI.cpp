#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
#include<stdlib.h>srand
#include<time.h>time_t
void menu()
{
	printf("**********   1.play    0.exit   **********\n");
}

void game()
{
	int guess = 0;
	//1、生成随机数1-100
	int ret = 0;
	ret = rand()&100+1;
	while (1)
	{
		printf("cai: ");
		scanf("%d",&guess);
		if (guess < ret)
		{
			printf("small\n");
		}
		else if (guess > ret)
		{
			printf("big\n");
		}
		else
		{
			printf("perfect/n");
			break;
		}
	}
}
int main()
{
	//设置时间戳；
	//time_t;
	srand((unsigned int)time_t(NULL));
	int input = 0;
	do 
	{
		menu();
		printf("choise: ");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("exit\n");
			break;
		default:
			printf("default\n");
			break;
		}

	} while (input);

	return 0;

}