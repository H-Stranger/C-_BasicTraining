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
////	} while (fabs(item) > 1e-6);//����С��10^-6ʱѭ������
////	//ע�����ѭ���Ľ�ֹ����
////	printf("%.6lf", sum);
////
////	return 0;
////}
//////1e6��ʾ����1*10^6
//
////̩�չ�ʽ
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
//		//����ѡ���ú���
//		
//		//2.
//		//item = -item * x * x / ((2 * k) * (2 * k+1));//��̫�����
//		//sum += item;
//		//k++;
//	} while (fabs(item) > 1e-11);//����С�ڵ���10^-11ѭ��ֹͣ
//	printf("%.11lf\n", sum);
//	return 0;
//}