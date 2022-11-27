#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>



//do while
//int main()
//{
//	int i = 1;
//	do
//	{
//		printf("%d ", i);
//		i++;
//	} while (i <= 10);
//	return 0;
//}



//getchar 一次读取一个字符
//55 分为 5 5执行
//int main()
//{
//	int ch = 0;
//	while ((ch = getchar()) != EOF)
//	{
//		if (ch < '0' || ch > '9')//输入字母则为真
//			continue;
//		putchar(ch);
//
//	}
//	return 0;
//}



//getchar 得到用户输入的内容
//putchar 输出用户的内容
//getchar + while 可以消除缓存区中无用的内容
//int main()
//{
//	int ret = 0;
//	int ch = 0;
//	char password[20] = { 0 };
//	printf("put in password:");
//
//	scanf("%s", password);//输入密码，并存入password数组中
//	//回车后缓存区还会剩下'\n',
//	
//	while (ch = getchar() != '\n'); 
//	//用来消除输入的空格后的内容和回车留下的缓存
//	
//	printf("please sure your password(Y/N)");
//	ret = getchar();
//	if (ret == 'Y')
//		printf("YES");
//	else
//		printf("NO");
//	return 0;
//}
//



//continue 终止当前循环，
//本次循环中不在执行continue后面的代码
//跳回循环开头，进行下次循环;
//int main()
//{
//	int i = 0;
//	while (i <= 10)
//	{
//		if (5 == i)
//			continue;
//		printf("%d", i);
//		i++;
//	}
//	return 0;
//}
//




//循环打印1到10
//int main()
//{
//	int i = 0;
//	while (i <= 10)
//	{
//		printf("%d\n", i);
//		i++;
//	}
//
////	return 0;
//}