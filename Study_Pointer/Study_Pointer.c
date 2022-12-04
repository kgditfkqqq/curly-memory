#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>


//
int main()
{
	int a = 10;
	int* pa = &a;//pa 一级指针*
	int** ppa = &pa;//ppa 二级指针**
	return 0;
}



//int main()
//{
//	int arr[10] = { 0 };
//	int* p = arr;
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		printf("%p == %p\n",&arr[i], p+i);
//
//	}
//	return 0;
//}


//
//int main()
//{
//	int arr[10] = { 0 };
//	printf("%d\n", arr);//数组名为数组首位元素的地址
//	printf("%d\n", arr[0]);//取下标0的元素
//	printf("%p\n", &arr[0]);//取地址
//	return 0;
//}


//指针-指针 统计字符串长度
//int my_strlen(char* str)
//{
//	char* start = str;
//	while (*str != '\0')
//	{
//		str++;
//	}
//	return str - start;
//}
//int main()
//{
//	int len = my_strlen("abc");
//	printf("%d\n", len);
//	return 0;
//}

 
//计数器 统计字符串长度
//int my_strlen(char* str)
//{
//	int count = 0;
//	while (*str != '\0')
//	{
//		count++;
//		str++;
//	}
//	return count;
//
//int main()
//{
//	int len = my_strlen("abc");
//	printf("%d\n", len);
//	return 0;
//}


//两个指针相减要指向同一块
//指针相减--指针之间的个数
//int main()
//{
//	int arr[] = { 10,20,30,40,50,60,70,80,90,100 };
//	printf("%d\n", &arr[9] - &arr[0]);
//	return 0;
//}


//指针类型的不同
//int main()
//{
//	//int 一次走4个字节
//	int arr[10] = { 0 };
//	int* pa = arr;/////这里不同
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		*(pa + i) = 1;
//	}
//	//char 一次走1个字节
//	int arr[10] = { 0 };
//	char* pa = arr;//////这里不同
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		*(pa + i) = 1;
//	}
//
//	return 0;
//}