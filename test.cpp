#define _CRT_SECURE_NO_WARNINGS 
//����һ��stdio�ĺ���
//std -��׼ standard input output
#include<stdio.h>


//��������

//int main()
//{
//	char ch = 'A';
//	printf("hello world\n");
//	printf("%c\n", ch); //%c -- ��ӡ�ַ�����
//
//	int age = 20;
//	printf("%d\n", age); //%d -- ����ʮ��������
//		
//	return 0;
//}


//scanf

int main()
{
	int num1 = 0;
	int num2 = 0;
	int sum = 0;
	scanf("%d%d", &num1, &num2);
	sum = num1 + num2;
	printf("sum = %d\n", sum);
}