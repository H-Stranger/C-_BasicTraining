//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
////题目描述:找出具有m行n列二维数组Array的“鞍点”，即该位置上的元素在该行上最大，在该列上最小，其中1<=m,n<=10。
////一行最大即数组的列最大
//int Colmax(int(*arr)[10],int row,int n)
//{
//	int i;
//	int colmax = 0;
//	for (i = 1; i < n; i++)
//	{
//		if (arr[i][colmax] < arr[row][i])
//		{
//			colmax = i;
//		}
//	}
//	return colmax;
//}
////一列最小即数组的行最小
//int Rowmin(int(*arr)[10], int col,int m)
//{
//	int i;
//	int rowmin = 0;
//	for (i = 1; i < m; i++)
//	{
//		if (arr[rowmin][col] > arr[i][col])
//		{
//			rowmin = i;
//		}
//	}
//	return rowmin;
//}
//
//int main()
//{
//	int m, n;//行，列
//	scanf("%d%d", &m, &n);
//	int i;
//	int arr[10][10];
//	for (i = 0; i < m; i++)
//	{
//		int j;
//		for(j=0;j<n;j++)
//			scanf("%d", &arr[i][j]);
//	}
//
//	for (i = 0; i < m; i++)
//	{
//		int colmax = Colmax(arr,i,n);
//		int rowmin = Rowmin(arr,colmax,m);
//		if (rowmin == i)
//			break;
//	}
//	
//	return 0;
//}