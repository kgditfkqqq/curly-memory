#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>


//����
//int main()
//{
//	//����
//	//int a = 3 / 5;
//	//int b = 6 / 5;
//	//printf("%d %d\n", a, b);
//
//	//������
//	//float a = 3.0 / 5;//������һ��С��
//	//float b = 6 / 5;
//	//printf("%f %f\n", a, b);
//
//	//˫����
//	//float a = 3.0f / 5.0f;//����������С��
//	//double b = 6.0 / 5.0;
//	//printf("%f %lf\n", a, b);
//
//
//
//	return 0;
//}


//��λ������

//int main()
//{
//	int a = 100;
//	int b = a << 2;//����
//	printf("%d %d\n", a, b);
//
//	int c = 100;
//	int d = a >> 2;//����
//	printf("%d %d\n", c, d);
//	return 0;
//}


//��λ������
//&��   |��    ^���

//int main()
//{
//	//int a = 3;//0011
//	//int b = 5;//0101
//	//int c = a & b;//0001
//	//printf("%d\n", c);
//	
//	//int a = 3;//0011
//	//int b = 5;//0101
//	//int c = a | b;//0111
//	//printf("%d\n", c);
//
//	//int a = 3;//0011
//	//int b = 5;//0101
//	//int c = a ^ b;//0110
//	//printf("%d\n", c);
//
//	return 0;
//}


//����������
//  +-
//  ^
//int main()
//{
//	//�Ӽ�
//	//int a = 3;
//	//int b = 5;
//	//printf("%d %d\n", a, b);
//	//a = a + b;
//	//b = a - b;
//	//a = a - b;
//	//printf("%d %d\n", a, b);
//
//	//���
//	//int a = 3;
//	//int b = 5;
//	//printf("%d %d\n", a, b);
//	//a = a ^ b;
//	//b = a ^ b;
//	//a = a ^ b;
//	//printf("%d %d\n", a, b);
//
//	return 0;
//}

//�ṹ��
struct Book
{
	char name[20];
	char id[20];
	int price[10];
};

int main()
{
	struct Book b = {"C++","c20394",30};
	
	//printf("������%s\n", b.name);
	//printf("ID��%s\n", b.id);
	//printf("�۸�%d\n", b.price);

	//struct Book* pb = &b;
	//printf("������%s\n", (*pb).name);
	//printf("ID��%s\n", (*pb).id);
	//printf("�۸�%d\n", (*pb).price);

	struct Book* pb = &b;
	printf("������%s\n", pb->name);
	printf("ID��%s\n", pb->id);
	printf("�۸�%d\n", pb->price);

	return 0;
}