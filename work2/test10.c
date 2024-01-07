////#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//
////三位数水仙花
////判断一个数是否是水仙花数
////int main()
////{
////	int num;
////	scanf("%d", &num);
////	int ge = num % 10;
////	int shi = num / 10 % 10;
////	int bai = num / 100;
////
////	if (ge*ge*ge + shi*shi*shi + bai*bai*bai == num)
////	{
////		printf("%d是水仙花数\n", num);
////	}
////	else
////	{
////		printf("%d不是水仙花数\n", num);
////	}
////	
////	return 0;
////}
//
////找出三位数中的水仙花数
//int judgeis(int num)
//{
//	int ge = num % 10;
//	int shi = num / 10 % 10;
//	int bai = num / 100;
//
//	if (ge * ge * ge + shi * shi * shi + bai * bai * bai == num)
//		return 1;
//	else
//		return 0;
//}
//
//int main()
//{
//	int i;
//	for (i = 100; i <= 999; i++)
//	{
//		if (judgeis(i) == 1)
//		{
//			printf("%d ", i);
//		}
//	}
//	return 0;
//}