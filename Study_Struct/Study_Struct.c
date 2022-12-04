#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

//结构体类型的声明
// // 结构体初始化
//类型
//struct Stu {
//	//成员变量
//	char name[20];//名字
//	int age;//年龄
//	char id[20];//学号
//};
//对象
//int main()
//{
//	struct Stu s = { "hhh",20,"123456" };//对象
// //结构体成员访问
//	printf("%s %d %s\n", s.name, s.age, s.id);
//	//指针--结构体
//	struct Stu* ps = &s;
//	printf("%d", (*ps).age);
//	printf("%d", ps->age);
//
//	return 0;
//}


// 结构体传参
//struct Stu {
//	//成员变量
//	char name[20];//名字
//	int age;//年龄
//	char id[20];//学号
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
//	struct Stu s = { "hhh",20,"123456" };//对象
//	printf("%s %d %s\n", s.name, s.age, s.id);
//	print1(s);//  传值(占用内存大)
//	print2(&s);// 传址(更好)
//	return 0;
//}