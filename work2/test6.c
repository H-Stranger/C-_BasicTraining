//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
////递归求1+2+3……n
//
//int sum(int n)
//{
//	if (n == 1)
//	{
//		return 1;
//	}
//	else
//	{
//		return n + sum(n-1);
//	}
//}
//
//int main()
//{
//	int n;
//	scanf("%d", &n);
//
//	printf("%d\n", sum(n));
//	return 0;
//}
//
//
//////猴子吃桃
//////每次吃原来的一半多一个
//////第十天只有一个桃子
////
////int res(int n)
////{
////	if (n == 10)
////	{
////		return 1;
////	}
////	else
////	{
////		return (res(n + 1) + 1) * 2;
////	}
////}
////
////int main()
////{
////	int n;
////	printf("%d\n",res(1));
////
////	return 0;
////}
//
//////n的阶乘
////int cal(n)
////{
////	if (n == 1)
////		return 1;
////	return n*cal(n-1);
////}
////int main()
////{
////	int n;
////	scanf("%d", &n);
////	printf("%d", cal(n));
////	return 0;
////}
//
