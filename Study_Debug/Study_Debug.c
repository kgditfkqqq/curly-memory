#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<assert.h>

////�ȶ���arr, i�ĵ�ַ��arr�ĺ���
////i �ĵ�ַ�� arr[i] �ĵ�ַ��ͬ�ͻ���ѭ��
//int main()
//{
//	int arr[10] = { 1 };
//	int i = 0;
//	printf("%p %p\n", &arr[15], &i);
//	for (i = 0; i <= 15; i++)
//	{
//		arr[i] = 0;
//		printf("hehe\n");
//	}
//	return 0;
//}
////�ȶ���i, i�ĵ�ַ��arr��ǰ��
////arr �������� i �Ͳ�����ѭ��
//int main()
//{
//	int i = 0;
//	int arr[10] = { 1 };
//	printf("%p %p", &arr[15], &i);
//	for (i = 0; i <= 15; i++)
//	{
//		arr[i] = 0;
//		printf("hehe\n");
//	}
//	return 0;
//}


//strcpy   
//my_strcpy
//��������
//char* my_strcpy(char* destination, const char* source)// const ����ɳ������޷����ı�
////char* �����ַ���ָ��
//{
//	assert(source != NULL);//����
//	assert(destination != NULL);//����
//	while (*destination++ = *source++)
//	{
//		//����
//	}
//}
//int main()
//{
//	char arr1[] = "###########";
//	char arr2[] = "hello world";
//	printf("%s\n", my_strcpy(arr1, arr2));
//	return 0;
//}


//strlen
//my_strlen
//�ַ�������
//size_t my_strlen(const char* source)
////size_t  ---unsigned int �޷�������
////ʹ��������Ǹ���
//{
//	assert(source != NULL);
//	size_t count = 0;
//	while (*source++ != '\0')
//	{
//		count++;
//	}
//	return count;
//}
//int main()
//{
//	char arr[] = "hello world!!";
//	int len = my_strlen(arr);
//	printf("%d\n", len);
//	return 0;
//}