#define _CRT_SECURE_NO_WARNINGS 
//包含一个stdio的函数
//std -标准 standard input output
#include<stdio.h>


//数据类型

//int main()
//{
//	char ch = 'A';
//	printf("hello world\n");
//	printf("%c\n", ch); //%c -- 打印字符数据
//
//	int age = 20;
//	printf("%d\n", age); //%d -- 整型十进制数据
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