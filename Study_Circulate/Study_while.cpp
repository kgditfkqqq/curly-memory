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



//getchar һ�ζ�ȡһ���ַ�
//55 ��Ϊ 5 5ִ��
//int main()
//{
//	int ch = 0;
//	while ((ch = getchar()) != EOF)
//	{
//		if (ch < '0' || ch > '9')//������ĸ��Ϊ��
//			continue;
//		putchar(ch);
//
//	}
//	return 0;
//}



//getchar �õ��û����������
//putchar ����û�������
//getchar + while �������������������õ�����
//int main()
//{
//	int ret = 0;
//	int ch = 0;
//	char password[20] = { 0 };
//	printf("put in password:");
//
//	scanf("%s", password);//�������룬������password������
//	//�س��󻺴�������ʣ��'\n',
//	
//	while (ch = getchar() != '\n'); 
//	//������������Ŀո������ݺͻس����µĻ���
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



//continue ��ֹ��ǰѭ����
//����ѭ���в���ִ��continue����Ĵ���
//����ѭ����ͷ�������´�ѭ��;
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




//ѭ����ӡ1��10
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