////#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//
////��λ��ˮ�ɻ�
////�ж�һ�����Ƿ���ˮ�ɻ���
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
////		printf("%d��ˮ�ɻ���\n", num);
////	}
////	else
////	{
////		printf("%d����ˮ�ɻ���\n", num);
////	}
////	
////	return 0;
////}
//
////�ҳ���λ���е�ˮ�ɻ���
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