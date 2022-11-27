#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<string.h>


int fbnl(int n)
{
	if (n <= 1)
	{
		return 1;
	}
	else
	{
		n =  + fbnl(n - 1);
	}

}
int main()
{
	int num = 2;
	printf("%d", fbnl(num));
	return 0;
}


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
