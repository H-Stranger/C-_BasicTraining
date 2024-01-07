//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//#include<math.h>
////int cal(int n)
////{
////	if (n == 1)
////		return 1;
////	return n * cal(n - 1);
////}
////
////int main()
////{
////	double sum = 1;
////	int i = 1;
////	double item;
////	do
////	{
////		sum += 1.0 / cal(i);
////		item = 1.0 / cal(i);
////		i++;
////	} while (fabs(item) > 1e-6);//精度小于10^-6时循环结束
////	//注意这个循环的截止条件
////	printf("%.6lf", sum);
////
////	return 0;
////}
//////1e6表示的是1*10^6
//
////泰勒公式
//int main()
//{
//	double sum,x;
//	int k = 1;
//	scanf("%lf", &x);
//	double item = x;
//	//sum = x;
//	sum = 0;
//	do
//	{
//		//1.
//		item = pow(-1.0, k - 1) * pow(x, 2 * k - 1) / cal(2 * k - 1);
//		sum += item;
//		k++;
//		//可以选择不用函数
//		
//		//2.
//		//item = -item * x * x / ((2 * k) * (2 * k+1));//不太好理解
//		//sum += item;
//		//k++;
//	} while (fabs(item) > 1e-11);//精度小于等于10^-11循环停止
//	printf("%.11lf\n", sum);
//	return 0;
//}