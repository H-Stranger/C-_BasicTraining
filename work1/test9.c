//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//
////杨辉三角形，打印十行
//int main()
//{
//	int arr[10][10] = { 0 };
//	int i;
//
//	//最左边的一列全设置为1
//	for (i = 0; i < 10; i++)
//	{
//		arr[i][0] = 1;
//	}
//
//	//从第二行开始
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