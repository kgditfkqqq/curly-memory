#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<math.h>


////统计一个数二进制中1的个数
//int count_one(int n)
//{
//	int count = 0;
//	while (n)
//	{
//		n= n & (n - 1) ;
//		count++;
//
//	}
//	return count;
//}
//int main()
//{
//	int a = 7;
//	printf("%d\n", count_one(a));
//	return 0;
//}


////判断一个数 是不是2的n次方
////是为1 不是为0
//int if_two(int n)
//{
//	int count = 0;
//	while (n)
//	{
//		n = n & (n - 1);
//		count++;
//	}
//	if (count == 1)
//	{
//		return 1;
//	}
//	return 0;
//}
//int main()
//{
//	int a = 8;
//	if (if_two(a) == 1)
//	{
//		printf("是");
//	}
//	else
//	{
//		printf("不是");
//	}
//	return 0;
//}


////统计两个数 二进制不同的位数
//int count_different(int a,int b)
//{
//	int count = 0;
//	int i = 0;
//	for (i = 0; i < 32; i++)
//	{
//		if (((a >> i) & 1) != ((b >> i) & 1))
//		{
//			count++;
//		}
//	}
//	return count;
//}
//int main()
//{
//	int a = 1;
//	int b = 3;
//	printf("%d\n", count_different(a,b));
//	return 0;
//}


