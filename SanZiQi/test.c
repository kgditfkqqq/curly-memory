#define _CRT_SECURE_NO_WARNINGS 1

#include"game.h"


//�˵�
void menu()
{
	printf("*************************************\n");
	printf("*******  1.play       0.exit  *******\n");
	printf("*************************************\n");
}

void game()
{	
	//�洢��ά����
	char board[ROW][COL];
	//��ʼ������
	Display_space(board, ROW, COL);
	//��ӡͼ��
	Display_picture(board, ROW, COL);

	char ret = 0;
	while (1)
	{
		// �������
		Player(board, ROW, COL);
		Display_picture(board, ROW, COL);

		//ʤ���ж�
		//���ʤ�� - '*'
		//����ʤ�� - '#'
		//ƽ��     - 'Q'
		//��Ϸ���� - 'C'
		ret = Iswin(board, ROW, COL);
		if (ret != 'C')
		{
			break;
		}

		// ��������
		Computer(board, ROW, COL);
		Display_picture(board, ROW, COL);

		ret = Iswin(board, ROW, COL);
		if (ret != 'C')
		{
			break;
		}
	}
	//�ж�˭��ʤ
	if (ret == '*')
	{
		printf("��һ�ʤ\n");
	}
	else if (ret == '#')
	{
		printf("���Ի�ʤ\n");
	}
	else
	{
		printf("ƽ��\n");
	}
	Display_picture(board, ROW, COL);

}


int main()
{
	int input = 0;
	srand((unsigned int)time(NULL));

	do 
	{
		menu();//��ӡ�˵�
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			printf("��ʼ��Ϸ\n");
			game();
			break;
		case 0:
			printf("�˳���Ϸ\n");
			break;
		default:
			printf("��������\n");
			break;
		}

	} while (input);

	return 0;
}