#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

//�ṹ�����͵�����
// // �ṹ���ʼ��
//����
//struct Stu {
//	//��Ա����
//	char name[20];//����
//	int age;//����
//	char id[20];//ѧ��
//};
//����
//int main()
//{
//	struct Stu s = { "hhh",20,"123456" };//����
// //�ṹ���Ա����
//	printf("%s %d %s\n", s.name, s.age, s.id);
//	//ָ��--�ṹ��
//	struct Stu* ps = &s;
//	printf("%d", (*ps).age);
//	printf("%d", ps->age);
//
//	return 0;
//}


// �ṹ�崫��
//struct Stu {
//	//��Ա����
//	char name[20];//����
//	int age;//����
//	char id[20];//ѧ��
//};
//void print1(struct Stu s)
//{
//	printf("%s %d %s\n", s.name, s.age, s.id);
//
//}
//void print2(struct Stu* ps)
//{
//	printf("%s %d %s\n", ps->name, ps->age, ps->id);
//
//}
//int main()
//{
//	struct Stu s = { "hhh",20,"123456" };//����
//	printf("%s %d %s\n", s.name, s.age, s.id);
//	print1(s);//  ��ֵ(ռ���ڴ��)
//	print2(&s);// ��ַ(����)
//	return 0;
//}