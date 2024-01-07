#define _CRT_SECURE_NO_WARNINGS
//题目描述:有n人围成一圈，顺序排号。
//从第1个人开始报数（从1到3报数），凡报到3的人退出圈子，问最后留下的是原来的第几号的那位。

//#include<stdio.h>
//int main()
//{
//	int n;
//	scanf("%d", &n);
//	int arr[100] = { 0 };//初始值都设置为0，碰到3则设置为1
//
//	int time = 0;
//	int count = 0;
//	int i = 0;
//	while (1)
//	{
//		for (i = 0; i < n; i++)
//		{
//			if (arr[i] == 0)
//			{
//				count++;
//			}
//			if (count == 3)
//			//count%3 == 0会出现死循环
//			{
//				count = 0;
//				arr[i] = 1;
//				time++;
//			}
//		}
//
//		if (n == time+1)
//		{
//			break;
//		}
//	}
//	//找到那个不为1的元素
//	for(i=0;i<n;i++)
//	{
//		if (arr[i] == 0)
//		{
//			printf("%d\n", i);
//			break;
//		}
//	}
//	return 0;
//}
//对数组索引初步循环过一次以后，不知道如何再从头开始早
//用count实现这个数组的循环圈





//指针写法
//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//#include<stdlib.h>
//
//int fac(int n)
//{
//	int* p = (int*)malloc(n * 4);//开辟一个数组，因为数组需要定长度，所以这里可以采用malloc开辟固定所需长度的数组
//	//int arr[100]; 也可以用这种方式，但是在后续循环的时候，注意不要越界
//	int num=0,time=0;
//	int i;
//
//	//给数组元素初始值都设为1
//	//循环报数时，报到3的号给它设置为0即可
//	for (i = 0; i < n; i++)
//	{
//		*(p + i) = 1;
//	}
//
//	//循环报数
//	while (1)
//	{
//		for (i = 0; i < n; i++)
//		{
//			if (*(p+i) != 0)
//			{
//				num++;
//			}
//			if (num == 3)
//			{
//				*(p+i) = 0;
//				num = 0;
//				time++;
//			}
//		}
//		if (n == time + 1)
//		{
//			break;
//		}
//	}
//
//	//查找最后剩下来的人
//	for (i = 0; i < n; i++)
//	{
//		if (*(p + i) != 0)
//		{
//			break;
//		}
//	}
//	
//	free(p);//释放完内存再返回序号
//	return i + 1;
//
//}
//
//int main()
//{
//	int n;
//	scanf("%d", &n);
//	int res = fac(n);
//
//	printf("%d\n", res);
//
//	return 0;
//}
//
////复习了malloc函数，指针的运用再次复习下
////循环报数的思维值得注意，每报到一个就把它的数组对应的数值设置一下
////也可以用calloc函数初始值设置为0后，每次报数一次把数组的值设置为1