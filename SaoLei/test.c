#define _CRT_SECURE_NO_WARNINGS 1
#include"game.h"

//��ӡ�˵�
void meun()
{
	printf("*************************************************\n");
	printf("***********     1.play     0.exit     ***********\n");
	printf("*************************************************\n");
}


void game()
{
	//��������
	char mine[ROWS][COLS] = {0};//�׵�λ��
	char show[ROWS][COLS] = {0};//�Ų��׵�λ��

	//�����鸳ֵ
	//��ʼ������
	IniArray(mine, ROWS, COLS,'0');
	IniArray(show, ROWS, COLS,'*');

	//�����׵�����
	Product(mine, ROW, COL, MINE_COUNT);
	//Display(mine, ROW, COL);

	//��ӡͼ��
	Display(show, ROW, COL);
	
	//�û�ѡ��ɨ�׵�����
	//�жϵ�ǰ�Ƿ�����
	//��ʾ��Χ�׵ĸ���
	Player(show,mine, ROW, COL,MINE_COUNT);




	//�ж�ʤ�� 
}


int main()
{
	int input = 0;//�����û�ѡ��
	srand((unsigned int)time(NULL));
	do
	{
		meun();//��ӡ�˵�
		printf("��ѡ��");
		scanf("%d", &input);//�û�ѡ��
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
			printf("������ѡ��\n");
			break;
		}

	} while (input);


	return 0;
}