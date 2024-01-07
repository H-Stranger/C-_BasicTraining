//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//
////折半查找
//
//int HalfSearch(int* arr,int n,int len)
//{
//	int left = 0;
//	int right = len - 1;
//	int mid;
//	while (left <= right)
//	{
//		mid = (left + right) / 2;
//		if (n > arr[mid])
//		{
//			left = mid + 1;//大于中间值，则从右半块查找搜寻
//		}
//		else if (n < arr[mid])
//		{
//			right = mid - 1;//小于中间值，则从左半块查找搜寻
//		}
//		else
//		{
//			return mid;
//		}
//	}
//	return 0;
//}
//
//int main()
//{
//	int arr[100];
//	int n, i;
//	printf("数组长度：\n");
//	scanf("%d",& n);
//
//	for (i = 0; i < n; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	//getchar();
//
//	int num;
//	printf("请输入要查找的数\n");
//	scanf("%d", &num);
//
//	int res = HalfSearch(arr, num, n);
//
//	if (res == 0)
//	{
//		printf("查找失败\n");
//	}
//	else
//	{
//		printf("index = %d\n", res);
//	}
//
//	return 0;
//}