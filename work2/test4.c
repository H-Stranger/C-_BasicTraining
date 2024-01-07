//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
////100以内的质数输入到文本中
//
//int prime(int num)
//{
//	if (num <= 2)
//		return 0;
//	else
//	{
//		int i;
//		for (i = 2; i < num; i++)
//		{
//			if (num % i == 0)
//				return 0;//非质数
//		}
//		return 1;//质数
//	}
//	
//}
//
//int main() 
//{	
//	int i;
//	FILE* pf = fopen("prime.txt", "w");
//	for (i = 1; i <= 100; i++)
//	{
//		if (prime(i) == 1)
//		{
//			fprintf(pf, "%d ", i);
//			//printf("%d ", i);
//		}
//	}
//	fclose(pf);
//
//	return 0;
//}