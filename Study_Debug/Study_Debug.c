#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<assert.h>

////先定义arr, i的地址在arr的后面
////i 的地址和 arr[i] 的地址相同就会死循环
//int main()
//{
//	int arr[10] = { 1 };
//	int i = 0;
//	printf("%p %p\n", &arr[15], &i);
//	for (i = 0; i <= 15; i++)
//	{
//		arr[i] = 0;
//		printf("hehe\n");
//	}
//	return 0;
//}
////先定义i, i的地址在arr的前面
////arr 触碰不到 i 就不会死循环
//int main()
//{
//	int i = 0;
//	int arr[10] = { 1 };
//	printf("%p %p", &arr[15], &i);
//	for (i = 0; i <= 15; i++)
//	{
//		arr[i] = 0;
//		printf("hehe\n");
//	}
//	return 0;
//}


//strcpy   
//my_strcpy
//拷贝函数
//char* my_strcpy(char* destination, const char* source)// const 定义成常数，无法被改变
////char* 返回字符串指针
//{
//	assert(source != NULL);//断言
//	assert(destination != NULL);//断言
//	while (*destination++ = *source++)
//	{
//		//拷贝
//	}
//}
//int main()
//{
//	char arr1[] = "###########";
//	char arr2[] = "hello world";
//	printf("%s\n", my_strcpy(arr1, arr2));
//	return 0;
//}


//strlen
//my_strlen
//字符串长度
//size_t my_strlen(const char* source)
////size_t  ---unsigned int 无符号整型
////使结果不会是负数
//{
//	assert(source != NULL);
//	size_t count = 0;
//	while (*source++ != '\0')
//	{
//		count++;
//	}
//	return count;
//}
//int main()
//{
//	char arr[] = "hello world!!";
//	int len = my_strlen(arr);
//	printf("%d\n", len);
//	return 0;
//}