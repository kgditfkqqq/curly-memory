#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>


//
int main()
{
	int a = 10;
	int* pa = &a;//pa һ��ָ��*
	int** ppa = &pa;//ppa ����ָ��**
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
//	printf("%d\n", arr);//������Ϊ������λԪ�صĵ�ַ
//	printf("%d\n", arr[0]);//ȡ�±�0��Ԫ��
//	printf("%p\n", &arr[0]);//ȡ��ַ
//	return 0;
//}


//ָ��-ָ�� ͳ���ַ�������
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

 
//������ ͳ���ַ�������
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


//����ָ�����Ҫָ��ͬһ��
//ָ�����--ָ��֮��ĸ���
//int main()
//{
//	int arr[] = { 10,20,30,40,50,60,70,80,90,100 };
//	printf("%d\n", &arr[9] - &arr[0]);
//	return 0;
//}


//ָ�����͵Ĳ�ͬ
//int main()
//{
//	//int һ����4���ֽ�
//	int arr[10] = { 0 };
//	int* pa = arr;/////���ﲻͬ
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		*(pa + i) = 1;
//	}
//	//char һ����1���ֽ�
//	int arr[10] = { 0 };
//	char* pa = arr;//////���ﲻͬ
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		*(pa + i) = 1;
//	}
//
//	return 0;
//}