#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

//�õݹ鷨��һ������nת�����ַ�����Ȼ����������ʱҪ������ַ�֮���ÿո������
//���磬����483��Ӧ����ַ�����4 8 3����n��λ����ȷ��������������λ����������

////�˵ݹ���󲻻����ո�
//void fac(int n)
//{
//	if (n < 10)
//	{
//		printf("%d", n);//n<10ʱ��nΪ������ǰ������483  ->  4
//	}
//	else
//	{
//		fac(n / 10);
//		printf(" %d",n%10);
//	}
//	//printf("\n");  ����Ҫ������ 
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