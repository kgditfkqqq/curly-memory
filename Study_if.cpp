#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

//输出0到100 的奇数
//int main()
//{
//	for (int i = 0; i <= 100; i++)
//	{
//		int num = i;
//		if (num % 2 == 1)
//			printf("odd = %d\n", num);
//	}
//	return 0;
//}
//

// 用5 == num （常量在左边）判断；
// 避免 num = 5 出错而不报错；
//int main()
//{
//	int num = 4;
//	if (5 == num) {
//		printf("hehe\n");
//	}
//	return 0;
//}



//两个if 一个else ，
//else 匹配最近的if
//用{}把内部的if包住 ， else则和外部的if对齐
//int main()
//{
//	int a = 10;
//	int b = 5;
//	if (a==1)
//	{
//		if (b == 5)
//			printf("a = %d and b = %d\n", a, b);
//	}
//	else
//		printf("fault\n");
//	return 0;
//}



//有两行代码要用{}包住
//int main()
//{
//	int age = 10;
//	if (age < 18)
//	{
//		printf("teenager\n");
//		printf("Can't fall in love\n");
//	}
//	else
//		printf("adult\n");
//	return 0;
//}


//if else 语句
//int main()
//{
//	int age = 10;
//	if (age < 18)
//		printf("teenager\n");
//	else
//		printf("adult\n");
//	return 0;
//}