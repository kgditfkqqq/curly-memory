#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <string.h>

//int main() 
//{
//	const int num = 4;
//	printf("%d\n", num);
//}

//int main()
//{
//	char arr1[] = "abc";
//	char arr2[] = { 'a','b','c','\0'};  // '\0' �ַ����Ľ�����־��
//	printf("%s\n", arr1);
//	printf("%s\n", arr2);
//	printf("%d\n", strlen(arr1));
//	printf("%d\n", strlen(arr2));
//	printf("%s\n", "c:\test\32\test.c");
//	printf("%d\n", strlen("c:\test\32\test.c"));
//	return 0;
//}

int main()
{
	int line = 0;
	printf("�տ�ʼ\n");
	while (line <= 20000)
	{
		printf("��һ�д���");
		printf("%d\n", line);
		line++;
	}
	printf("�ɹ���");
	return 0;
}