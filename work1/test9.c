//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//
////��������Σ���ӡʮ��
//int main()
//{
//	int arr[10][10] = { 0 };
//	int i;
//
//	//����ߵ�һ��ȫ����Ϊ1
//	for (i = 0; i < 10; i++)
//	{
//		arr[i][0] = 1;
//	}
//
//	//�ӵڶ��п�ʼ
//	for (i = 1; i < 10; i++)
//	{
//		int j;
//		for (j = 1; j <= i; j++)
//		{
//			arr[i][j] = arr[i - 1][j-1] + arr[i - 1][j];
//		}
//	}
//
//	for (i = 0; i < 10; i++)
//	{
//		int j;
//		for (j = 0; j <= i; j++)
//		{
//			printf("%d ", arr[i][j]);
//		}
//		printf("\n");
//	}
//
//	return 0;
//}