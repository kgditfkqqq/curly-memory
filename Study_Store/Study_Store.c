#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>


////判断当前系统是大端存储还是小端存储
//int judge_sys()
//{
//	int a = 1;
//	char* pa = (char*)&a;
//	return *pa;
//}
//int main()
//{
//	int ret = judge_sys();
//	if (ret == 1)
//	{
//		printf("小端");
//	}
//	else
//	{
//		printf("大端");
//	}
//	return 0;
//}

////问：输出什么？
//int main()
//{
//	char a = -1;
//	signed char b = -1;
//	unsigned char c = -1;
//	printf("a=%d, b=%d, c=%d", a, b, c);
//	return 0;
//}

////解释
//int main()
//{
//	char a = -1;
//	//11111111--补码
//	//11111111111111111111111111111111--整型提升(补码)
//	//11111111111111111111111111111110--反码
//	//10000000000000000000000000000001--源码
//	signed char b = -1;
//	//11111111--补码
//	//11111111111111111111111111111111--整型提升(补码)
//	//11111111111111111111111111111110--反码
//	//10000000000000000000000000000001--源码
// 	unsigned char c = -1;
//	//11111111--没有符号位，源码，反码，补码一致
//	//00000000000000000000000011111111--整型提升
//	printf("a=%d, b=%d, c=%d", a, b, c);//char - %d整型提升
//	return 0;
//}

