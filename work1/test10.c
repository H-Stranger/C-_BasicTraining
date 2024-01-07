//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//#include<stdbool.h>
//int main()
//{
//	int arr[10];
//	int i;
//	for (i = 0; i < 10; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	int size = 10;//数组长度
//
//	for (i = 0; i < size-1; i++)
//	{
//		int j;
//		bool flag = false;//设置标记
//		for (j = 0; j < size-1-i; j++)
//		{
//			if (arr[j] > arr[j + 1])
//			{
//				int tmp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = tmp;
//				flag = true;//说明这一趟是比较过的，不是有序的
//			}
//		}
//		if (flag == false)
//		{
//			break;
//		}
//	}
//
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}