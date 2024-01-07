//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//
////判断矩阵每行、每列、主对角线及反对角线上元素之和都相等
//
//int Judge(int (*arr)[20],int n)
//{
//	int i;
//	//找参考
//	int sum = 0,sum1 = 0;
//	for (i = 0; i < n; i++)
//	{
//		sum += arr[i][i];//简便
//	}
//
//	//判断行
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
//			return 0;//不相等直接返回
//		}
//	}
//
//	//判断列
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
//	//判断反对角线
//	sum1 = 0;
//	for (i = n - 1; i >= 0; i--)
//	{
//		sum1 += arr[i][n - 1 - i];//矩阵反对角线之和为相等
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