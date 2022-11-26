#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<string.h>//strlen字符串长度，strcmp比较两个字符串(相等为0)
#include<windows.h>//sleep
#include<stdlib.h>//system
#include<math.h>//sqrt平方根




//99乘法口诀表
//int main()
//{
//	int i = 0;
//	int j = 0;
//	for (i = 1; i <= 19; i++)
//	{
//		for (j = 1; j <= i; j++)
//		{
//			printf("%d*%d= %2d  ",i,j,i*j);
//			//%2d对个位数左边加一个空格，两位数不变
//			//%2d在左边加一个空格；%-2d在右边加一个空格
//		}
//		printf("\n");
//	}
//	return 0;
//}



//MAX
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int max = arr[0];
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		if (arr[i] > max)
//		{
//			max = arr[i];
//		}
//	}
//	printf("max = %d", max);
//	return 0;
//}


//1/1-1/2+1/3-1/4+...+1/99-1/100的值
//int main()
//{
//	int i = 0;
//	double sum = 0.0;//双精度
//	int flag = 1;
//	for (i = 1; i <= 100; i++)
//	{
//		sum += flag*1.0 / i; //sum是小数要1.0
//		flag = -flag; //偶数乘负数
//	}
//	printf("%lf", sum);
//	return 0;
//}



//***优化***
//100-200之间的素数
//int main()
//{
//	int i = 0;
//	int j = 0;
//	for (i = 101; i <= 200; i+=2)
//	{
//		for (j = 2; j <= sqrt(i); j++)
//		{	
//			if (i % j == 0)
//			{
//			break;
//			}
//		}
//		if (j>sqrt(i))
//		{
//		printf("%d\n", i);
//		}
//	}
//	return 0;
//}





//***试除法***
//100-2*/00之间的素数
//int main()
//{
//	int i = 0;
//	int j = 0;
//	for (i = 10; i <= 12; i++)
//	{
//		for (j = 2; j < i; j++)
//		{	
//			if (i % j == 0)
//			{
//			break;
//			}
//		}
//		if (i == j)
//		{
//		printf("%d\n", i);
//		}
//	}
//	return 0;
//}




//1000-2000之间的闰年
//int main()
//{
//	int count = 0;
//	int year = 0;
//
//	for (year = 1000; year <= 2000; year++)
//	{
//		if (((year % 4 == 0) && (year % 100 != 0))|| (year % 400 == 0))
//		{
//			printf("%d是闰年\n", year);
//			count++;
//		}
//	}
//	printf("%d\n", count);
//	return 0;
//}


//辗转相除法
//给定两个数
//求两个数的最大公约数
//int main()
//{
//	int m = 0;
//	int n = 0;
//	int c = 0;
//	scanf("%d%d", &m, &n);
//	
//	while (c = m % n)
//	{
//		m = n;
//		n = c;
//	}
//	printf("%d", n);
//	return 0;
//}
//

//打印1-100中3的倍数
//int main()
//{
//	int i = 0;
//	for (i = 1; i <= 100; i++)
//	{
//		if (i % 3 == 0)
//		{
//			printf("%d\n", i);
//		}
//	}
//	return 0;
//}



//输入a b c
//比较a b c 的大小
//从大到小排列
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	scanf("%d%d%d", &a, &b, &c);
//
//	if (a < b)
//	{
//		int tem = a;
//		a = b;
//		b = tem;
//	}
//	if (a < c)
//	{
//		int tem = a;
//		a = c;
//		c = tem;
//	}
//	if (b < c);
//	{
//		int tem = b;
//		b = c;
//		c = tem;
//	}
//	printf("%d%d%d", a,b,c);
//	return 0;
//}



//输错3次结束程序
//int main()
//{
//	int i = 0;
//	char password[20] = {0};
//	for (i = 0; i < 3; i++)
//	{
//		printf("put in password:");
//		scanf("%s", &password);
//		if (strcmp(password ,"123456") == 0)//strcmp比较两个字符串
//		{
//			printf("ok\n");
//			break;
//		}
//		else
//		{
//			printf("again\n");
//		}
//	}
//	if (i == 3)
//	{
//		printf("not again\n");
//	}
//	return 0;
//}





//从两边逐个显示字符
//int main()
//{
//	char arr1[] = "Welcome to China!!!!";
//	char arr2[] = "####################";
//	int left = 0;
//	int righ = strlen(arr1) - 1;
//
//	while (left <= righ)
//	{
//		arr2[left] = arr1[left];
//		arr2[righ] = arr1[righ];
//		printf("%s\n",arr2);
//		Sleep(1000);//延迟1秒
//		system("cls");//清屏
//		left++;
//		righ--;
//
//	}
//	return 0;
//}
//


//*********有序二分查找法**********
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int k = 7;
//	//int mid = 0;
//	
//	int sz = sizeof(arr) / sizeof(arr[0]);  //计算元素个数
//	int left = 0;  //左下标
//	int righ = sz-1;  //右下标
//
//	while(left<=righ)
//	{
//		int mid = (left + righ) / 2;  //中间元素下标
//		if (arr[mid]>k)
//		{
//			righ = mid - 1;
//		}
//		else if (arr[mid] < k)
//		{
//			left = mid + 1;
//		}
//		else
//		{
//			printf("找到了，下标是%d\n", mid);
//			break;
//		}
//	}
//	if (left > righ)
//	{
//		printf("找不到\n");
//	}
//	return 0;
//}






//计算输入n的阶乘的和
//int main()
//{
//	int n = 1;
//	int i = 0;
//	int num = 1;
//	int sum = 0;
//	printf("please put in n =");
//	scanf("%d", &n);
//	for (i = 1; i <=n ; i++)
//	{		
//		num = num*i;
//		sum += num;
//	}
//	printf("%d",sum);
//	return 0;
//}



//计算输入n的阶乘
//int main()
//{
//	int n = 0;
//	int i = 0;
//	int num = 1;
//	printf("please put in n =");
//	scanf("%d", &n);
//	for (i = 1; i <=n ; i++)
//	{
//		num = num*i;
//	}
//	printf("%d",num);
//	return 0;
//}