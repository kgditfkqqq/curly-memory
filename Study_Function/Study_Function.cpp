#define _CRT_SECURE_NO_WARNINGS 1j

#include<stdio.h>
#include<string.h>
#include<math.h>

//*******库函数函数*******
//*******库函数函数*******


// strcpy
//int main()
//{
//	char arr1[] = "copy";
//	char arr2[] = "#########";
//	strcpy(arr2, arr1);
//	printf("%s\n", arr2);
//	return 0;
//}


//memset
//int main()
//{
//	char arr1[] = "hello world";
//	memset(arr1, '*', 5);
//	printf("%s\n", arr1);
//	return 0;
//}



//*******自定义函数*******
//*******自定义函数*******



// GetMax
//int getmax(int x,int y)
//{
//	if (x > y)
//		return x;
//	else
//		return y;
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int max = getmax(a, b);
//	printf("%d", max);
//	return 0;
//}



//交换两个整型的值 
//void Swap(int* pa,int* pb)
//{
//	int tem = 0;
//	tem = *pa;
//	*pa = *pb;
//	*pb = tem;
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	printf("a = %d,b = %d\n", a, b);
//	Swap(&a, &b);
//	printf("a = %d,b = %d\n", a, b);
//	return 0;
//}



//素数判断函数
//int if_SuShu(int x)
//{
//	int num = 0;
//	for(num =2;sqrt(x)>=num;num++)
//	{
//		if ((x % num) == 0)
//		{
//			return 0;
//			break;
//		}
//	}
//		return 1;
//}
//int main()
//{
//	int i = 0;
//	for (i = 100; i <= 200; i++)
//	{
//		if (if_SuShu(i) == 1)
//			printf("%d\n", i);
//	}
//	return 0;
//}


//闰年判断函数
//int if_RunNian(int x)
//{
//	if (((x % 4 == 0) && (x % 100 != 0))|| (x % 400 == 0))
//	{
//		return 1;
//	}
//	return 0;
//}
//int main()
//{
//	int year = 0;
//	for (year = 1000; year <= 2000; year++)
//	{
//		if ((if_RunNian(year)) == 1)
//		{
//			printf("%d\n", year);
//		}
//	}
//	return 0;
//}


//二分查找
//        数组只能传首位，不能都传
//int erfen(int arr[],int k,int sz)
//{
//	int i = 0;
//  //int sz = sizeof(arr) / sizeof(arr[0]);arr只有一位数
//	int left = 0;
//	int righ = sz - 1;
//	int mid = 0;
//	
//	while (left<=righ)
//	{
//		mid = (left + righ) / 2;
//		if (arr[mid] < k)
//		{
//			left = mid+1;
//			continue;
//		}
//		else if (arr[mid] > k)
//		{
//			righ = mid-1;
//			continue;
//		}
//		else
//			return mid;
//	}
//	return -1;
//}
//int main()
//{
//	int arr[] = {1,2,3,4,5,6,7,8,9,10};
//	int k = 6;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int s = erfen(arr,k,sz);
//	if (s == -1)
//	{
//		printf("default");
//	}
//	else
//	{
//		printf("下标是 %d\n", s);
//	}
//	return 0;
//}