//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//
////�۰����
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
//			left = mid + 1;//�����м�ֵ������Ұ�������Ѱ
//		}
//		else if (n < arr[mid])
//		{
//			right = mid - 1;//С���м�ֵ��������������Ѱ
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
//	printf("���鳤�ȣ�\n");
//	scanf("%d",& n);
//
//	for (i = 0; i < n; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	//getchar();
//
//	int num;
//	printf("������Ҫ���ҵ���\n");
//	scanf("%d", &num);
//
//	int res = HalfSearch(arr, num, n);
//
//	if (res == 0)
//	{
//		printf("����ʧ��\n");
//	}
//	else
//	{
//		printf("index = %d\n", res);
//	}
//
//	return 0;
//}