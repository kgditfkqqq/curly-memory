#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<string.h>


//n 的 k 次方
//double mul(int n,int k)
//{
//	if (k >= 1)
//	{
//		return n * mul(n,k - 1);
//	}
//	else if(k==0)
//	{
//		return 1.0;
//	}
//	else
//	{
//		return 1.0/mul(n,-k);
//	}
//}
//int main()
//{
//	int n = 0;
//	int k = 0;
//	scanf("%d %d", &n,&k);
//	printf("%lf",mul(n, k));
//	return 0;
//}


//int sum(int n)
//{ 
//	if (n > 9)
//	{
//		return sum(n / 10) + n % 10;
//	}
//	else
//	{
//		return n;
//	}
//}
//int main()
//{
//	int num = 15529;
//	printf("%d", sum(num));
//	return 0;
//}


//斐波那契
//递归计算效率太低
//int fbnq(int n)
//{
//	if (n <= 2)
//	{
//		return 1;
//	}
//	else
//	{
//		n = fbnq(n-2) + fbnq(n - 1);
//		return n;
//	}
//
//}
//int main()
//{
//	int num = 40;
//	printf("%d", fbnq(num));
//	return 0;
//}


//  n的阶乘
//int mul(int n)
//{
//	if (n>1)
//	{
//		n = n * mul(n - 1);
//	}
//	return n;
//}
//int main()
//{
//	int n = 5;
//	printf("%d", mul(n));
//	return 0;
//}




//求字符串长度
//int my_strlen(char* str)
//{
//	if (*str != '\0')
//	{
//		return 1+my_strlen(str+1);
//	}
//	return 0;
//
//}
//int main()
//{
//	char arr[] = "hellow world";
//	printf("%d",my_strlen(arr));
//	return 0;
//}




//逐个打印数字
//void print(int n)
//{
//	if (n > 9)
//	{
//		print(n /10);
//	}
//	printf("%d ", n%10);
//}
//int main()
//{
//	int input = 0;
//	scanf("%d", &input);
//	print(input);
//	return 0;
//}
