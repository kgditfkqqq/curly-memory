#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>


//for 结束后还会再加一次
//int main()
//{
//	int i = 0;
//	for (i = 1; i < 10; i+=2)
//	{
//		printf("%d\n", i);
//	}
//	printf("%d\n", i);
//	return 0;
//}




//判断条件k = 0，k为假，不循环；
//判断条件k ！= 0，k为真，死循环；
//int main()
//{
//	int i = 0;
//	int k = 0;
//	for (i = 0, k = 0; k = 0; i++, k++)
//		k++;
//	return 0;
//}



//int main()
//{
//	int x, y;
//	for (x = 0, y = 0; x < 2 && y < 5; ++x, y++)
//	{
//		printf("hh\n");
//	}
//	return 0;
//}


//int main()
//
//{//判断条件被省略，则恒为真
//	for (;;)
//	{
//		printf("hh\n");
//	}
//	return 0;
//}
//



//int main()
//{
//	int i = 0;
//	for (i = 1; i < 11; i++)
//	{
//		if (i == 5)
//			continue;
//		printf("%d ", i);
//
//	}
//}