#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

//用递归法将一个整数n转换成字符串，然后输出，输出时要求各个字符之间用空格隔开。
//例如，输入483，应输出字符串“4 8 3”。n的位数不确定，可以是任意位数的整数。

////此递归最后不会多出空格
//void fac(int n)
//{
//	if (n < 10)
//	{
//		printf("%d", n);//n<10时，n为该数最前，例如483  ->  4
//	}
//	else
//	{
//		fac(n / 10);
//		printf(" %d",n%10);
//	}
//	//printf("\n");  不需要带换行 
//}


//#include<string.h>
//void figureTrasform(int n) {
//	if (n < 0)
//	{
//		n = -n;
//		putchar('-');
//		putchar(' ');
//	}
//
//	if (n / 10 != 0)
//	{
//		figureTrasform(n / 10);
//	}
//	putchar(n % 10 + '0');
//	putchar(32);
//
//
//	/***************** End ******************/
//}

//int main()
//{
//	int a;
//	scanf("%d", &a);
//	fac(a);
//	return 0;
//}
//n/10 != 0  >10  >=10