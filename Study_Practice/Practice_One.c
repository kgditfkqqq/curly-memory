#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<math.h>


////ͳ��һ������������1�ĸ���
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


////�ж�һ���� �ǲ���2��n�η�
////��Ϊ1 ����Ϊ0
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
//		printf("��");
//	}
//	else
//	{
//		printf("����");
//	}
//	return 0;
//}


////ͳ�������� �����Ʋ�ͬ��λ��
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


