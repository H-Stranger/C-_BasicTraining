//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
////��Ŀ����:�ҳ�����m��n�ж�ά����Array�ġ����㡱������λ���ϵ�Ԫ���ڸ���������ڸ�������С������1<=m,n<=10��
////һ���������������
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
////һ����С�����������С
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
//	int m, n;//�У���
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