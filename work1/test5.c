//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//
////�жϾ���ÿ�С�ÿ�С����Խ��߼����Խ�����Ԫ��֮�Ͷ����
//
//int Judge(int (*arr)[20],int n)
//{
//	int i;
//	//�Ҳο�
//	int sum = 0,sum1 = 0;
//	for (i = 0; i < n; i++)
//	{
//		sum += arr[i][i];//���
//	}
//
//	//�ж���
//	for (i = 0; i < n; i++)
//	{
//		int j;
//		sum1 = 0;
//		for (j = 0; j < n; j++)
//		{
//			sum1 += arr[i][j];
//		}
//		if (sum != sum1)
//		{
//			return 0;//�����ֱ�ӷ���
//		}
//	}
//
//	//�ж���
//	for (i = 0; i < n; i++)
//	{
//		int j;
//		sum1 = 0;
//		for (j = 0; j < n; j++)
//		{
//			sum1 += arr[j][i];
//		}
//		if (sum != sum1)
//		{
//			return 0;
//		}
//	}
//
//	//�жϷ��Խ���
//	sum1 = 0;
//	for (i = n - 1; i >= 0; i--)
//	{
//		sum1 += arr[i][n - 1 - i];//���󷴶Խ���֮��Ϊ���
//	}
//	if (sum != sum1)
//	{
//		return 0;
//	}
//	return 1;
//}
//
//int main()
//{
//	int arr[20][20];
//	int i,j,n;
//	scanf("%d", &n);
//	for (i = 0; i < n; i++)
//		for (j = 0; j < n; j++)
//			scanf("%d", &arr[i][j]);
//	int res = Judge(arr, n);
//	if (res == 0)
//	{
//		printf("No\n");
//	}
//	else
//	{
//		printf("Yes\n");
//	}
//
//	return 0;
//}