#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<string.h>//strlen�ַ������ȣ�strcmp�Ƚ������ַ���(���Ϊ0)
#include<windows.h>//sleep
#include<stdlib.h>//system
#include<math.h>//sqrtƽ����




//99�˷��ھ���
//int main()
//{
//	int i = 0;
//	int j = 0;
//	for (i = 1; i <= 19; i++)
//	{
//		for (j = 1; j <= i; j++)
//		{
//			printf("%d*%d= %2d  ",i,j,i*j);
//			//%2d�Ը�λ����߼�һ���ո���λ������
//			//%2d����߼�һ���ո�%-2d���ұ߼�һ���ո�
//		}
//		printf("\n");
//	}
//	return 0;
//}



//MAX
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int max = arr[0];
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		if (arr[i] > max)
//		{
//			max = arr[i];
//		}
//	}
//	printf("max = %d", max);
//	return 0;
//}


//1/1-1/2+1/3-1/4+...+1/99-1/100��ֵ
//int main()
//{
//	int i = 0;
//	double sum = 0.0;//˫����
//	int flag = 1;
//	for (i = 1; i <= 100; i++)
//	{
//		sum += flag*1.0 / i; //sum��С��Ҫ1.0
//		flag = -flag; //ż���˸���
//	}
//	printf("%lf", sum);
//	return 0;
//}



//***�Ż�***
//100-200֮�������
//int main()
//{
//	int i = 0;
//	int j = 0;
//	for (i = 101; i <= 200; i+=2)
//	{
//		for (j = 2; j <= sqrt(i); j++)
//		{	
//			if (i % j == 0)
//			{
//			break;
//			}
//		}
//		if (j>sqrt(i))
//		{
//		printf("%d\n", i);
//		}
//	}
//	return 0;
//}





//***�Գ���***
//100-2*/00֮�������
//int main()
//{
//	int i = 0;
//	int j = 0;
//	for (i = 10; i <= 12; i++)
//	{
//		for (j = 2; j < i; j++)
//		{	
//			if (i % j == 0)
//			{
//			break;
//			}
//		}
//		if (i == j)
//		{
//		printf("%d\n", i);
//		}
//	}
//	return 0;
//}




//1000-2000֮�������
//int main()
//{
//	int count = 0;
//	int year = 0;
//
//	for (year = 1000; year <= 2000; year++)
//	{
//		if (((year % 4 == 0) && (year % 100 != 0))|| (year % 400 == 0))
//		{
//			printf("%d������\n", year);
//			count++;
//		}
//	}
//	printf("%d\n", count);
//	return 0;
//}


//շת�����
//����������
//�������������Լ��
//int main()
//{
//	int m = 0;
//	int n = 0;
//	int c = 0;
//	scanf("%d%d", &m, &n);
//	
//	while (c = m % n)
//	{
//		m = n;
//		n = c;
//	}
//	printf("%d", n);
//	return 0;
//}
//

//��ӡ1-100��3�ı���
//int main()
//{
//	int i = 0;
//	for (i = 1; i <= 100; i++)
//	{
//		if (i % 3 == 0)
//		{
//			printf("%d\n", i);
//		}
//	}
//	return 0;
//}



//����a b c
//�Ƚ�a b c �Ĵ�С
//�Ӵ�С����
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	scanf("%d%d%d", &a, &b, &c);
//
//	if (a < b)
//	{
//		int tem = a;
//		a = b;
//		b = tem;
//	}
//	if (a < c)
//	{
//		int tem = a;
//		a = c;
//		c = tem;
//	}
//	if (b < c);
//	{
//		int tem = b;
//		b = c;
//		c = tem;
//	}
//	printf("%d%d%d", a,b,c);
//	return 0;
//}



//���3�ν�������
//int main()
//{
//	int i = 0;
//	char password[20] = {0};
//	for (i = 0; i < 3; i++)
//	{
//		printf("put in password:");
//		scanf("%s", &password);
//		if (strcmp(password ,"123456") == 0)//strcmp�Ƚ������ַ���
//		{
//			printf("ok\n");
//			break;
//		}
//		else
//		{
//			printf("again\n");
//		}
//	}
//	if (i == 3)
//	{
//		printf("not again\n");
//	}
//	return 0;
//}





//�����������ʾ�ַ�
//int main()
//{
//	char arr1[] = "Welcome to China!!!!";
//	char arr2[] = "####################";
//	int left = 0;
//	int righ = strlen(arr1) - 1;
//
//	while (left <= righ)
//	{
//		arr2[left] = arr1[left];
//		arr2[righ] = arr1[righ];
//		printf("%s\n",arr2);
//		Sleep(1000);//�ӳ�1��
//		system("cls");//����
//		left++;
//		righ--;
//
//	}
//	return 0;
//}
//


//*********������ֲ��ҷ�**********
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int k = 7;
//	//int mid = 0;
//	
//	int sz = sizeof(arr) / sizeof(arr[0]);  //����Ԫ�ظ���
//	int left = 0;  //���±�
//	int righ = sz-1;  //���±�
//
//	while(left<=righ)
//	{
//		int mid = (left + righ) / 2;  //�м�Ԫ���±�
//		if (arr[mid]>k)
//		{
//			righ = mid - 1;
//		}
//		else if (arr[mid] < k)
//		{
//			left = mid + 1;
//		}
//		else
//		{
//			printf("�ҵ��ˣ��±���%d\n", mid);
//			break;
//		}
//	}
//	if (left > righ)
//	{
//		printf("�Ҳ���\n");
//	}
//	return 0;
//}






//��������n�Ľ׳˵ĺ�
//int main()
//{
//	int n = 1;
//	int i = 0;
//	int num = 1;
//	int sum = 0;
//	printf("please put in n =");
//	scanf("%d", &n);
//	for (i = 1; i <=n ; i++)
//	{		
//		num = num*i;
//		sum += num;
//	}
//	printf("%d",sum);
//	return 0;
//}



//��������n�Ľ׳�
//int main()
//{
//	int n = 0;
//	int i = 0;
//	int num = 1;
//	printf("please put in n =");
//	scanf("%d", &n);
//	for (i = 1; i <=n ; i++)
//	{
//		num = num*i;
//	}
//	printf("%d",num);
//	return 0;
//}