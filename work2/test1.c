//#define _CRT_SECURE_NO_WARNINGS
//
////��ln(x+1)	   0<x<1	 ���� x-x^2/2+x^3/3����  ������С����ĵھ�λ
//#include<stdio.h>
//#include<math.h>
//
//int main()
//{
//	int k = 1;
//	
//	float x;
//	printf("������x��ֵ\n");
//	scanf("%f", &x);
//	
//	double sum = 0;
//	double item;//ͨ�����һ�������ж�С�����Ƿ�ﵽ�ھ�λ  
//	do
//	{
//		item = pow(-1, k - 1) * pow(x, k) / k;//������Ŀ�Թ�ʽ��Ҫ��д��
//		sum += item;
//		k++;
//	} while (fabs(item) > 1e-9);//itemѭ���л���ָ��������Ӿ���ֵ��ѭ����ǰ��ֹ
//
//	printf("%.9lf\n", sum);
//	return 0;
//}