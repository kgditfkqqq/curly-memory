#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>


//除法
//int main()
//{
//	//整除
//	//int a = 3 / 5;
//	//int b = 6 / 5;
//	//printf("%d %d\n", a, b);
//
//	//单精度
//	//float a = 3.0 / 5;//两边有一个小数
//	//float b = 6 / 5;
//	//printf("%f %f\n", a, b);
//
//	//双精度
//	//float a = 3.0f / 5.0f;//两边有两个小数
//	//double b = 6.0 / 5.0;
//	//printf("%f %lf\n", a, b);
//
//
//
//	return 0;
//}


//移位操作符

//int main()
//{
//	int a = 100;
//	int b = a << 2;//左移
//	printf("%d %d\n", a, b);
//
//	int c = 100;
//	int d = a >> 2;//右移
//	printf("%d %d\n", c, d);
//	return 0;
//}


//按位操作符
//&与   |或    ^异或

//int main()
//{
//	//int a = 3;//0011
//	//int b = 5;//0101
//	//int c = a & b;//0001
//	//printf("%d\n", c);
//	
//	//int a = 3;//0011
//	//int b = 5;//0101
//	//int c = a | b;//0111
//	//printf("%d\n", c);
//
//	//int a = 3;//0011
//	//int b = 5;//0101
//	//int c = a ^ b;//0110
//	//printf("%d\n", c);
//
//	return 0;
//}


//交换两个数
//  +-
//  ^
//int main()
//{
//	//加减
//	//int a = 3;
//	//int b = 5;
//	//printf("%d %d\n", a, b);
//	//a = a + b;
//	//b = a - b;
//	//a = a - b;
//	//printf("%d %d\n", a, b);
//
//	//异或
//	//int a = 3;
//	//int b = 5;
//	//printf("%d %d\n", a, b);
//	//a = a ^ b;
//	//b = a ^ b;
//	//a = a ^ b;
//	//printf("%d %d\n", a, b);
//
//	return 0;
//}

//结构体
struct Book
{
	char name[20];
	char id[20];
	int price[10];
};

int main()
{
	struct Book b = {"C++","c20394",30};
	
	//printf("书名：%s\n", b.name);
	//printf("ID：%s\n", b.id);
	//printf("价格：%d\n", b.price);

	//struct Book* pb = &b;
	//printf("书名：%s\n", (*pb).name);
	//printf("ID：%s\n", (*pb).id);
	//printf("价格：%d\n", (*pb).price);

	struct Book* pb = &b;
	printf("书名：%s\n", pb->name);
	printf("ID：%s\n", pb->id);
	printf("价格：%d\n", pb->price);

	return 0;
}