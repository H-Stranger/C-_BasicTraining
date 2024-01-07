//#define _CRT_SECURE_NO_WARNINGS
//
////求ln(x+1)	   0<x<1	 等于 x-x^2/2+x^3/3……  保留到小数点的第九位
//#include<stdio.h>
//#include<math.h>
//
//int main()
//{
//	int k = 1;
//	
//	float x;
//	printf("请输入x的值\n");
//	scanf("%f", &x);
//	
//	double sum = 0;
//	double item;//通过最后一个数来判断小数点是否达到第九位  
//	do
//	{
//		item = pow(-1, k - 1) * pow(x, k) / k;//按照题目对公式的要求写出
//		sum += item;
//		k++;
//	} while (fabs(item) > 1e-9);//item循环中会出现负数，不加绝对值，循环提前截止
//
//	printf("%.9lf\n", sum);
//	return 0;
//}