#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

//��Ŀ������ʹ�ø�ʽ�ַ�o��x��X������û������������������ת��Ϊʮ����
//���룺һ�У��ÿո������������������ ��һ�����ǰ˽��ơ� �ڶ����͵���������ʮ�����ơ�
//027 0x17 0X17


//int main()
//{
//	//int a, b,c;
//	//scanf("%o", &a);//�˽���
//	//scanf("%x", &b);//ʮ������  0x
//	//scanf("%x", &c);//ʮ������  0X
//	//printf("%d\n", a);
//	//printf("%d\n", b);
//	//printf("%d\n", c);
//
//	//�����ƴ洢
//	int d = 0b11101;
//	printf("%d\n", d);
//	
//	//�˽��ƴ洢
//	int e = 023;
//	printf("%o\n", e);
//	printf("%d\n", e);
//
//	//ʮ�����ƴ洢
//	int f = 0x12AD;
//	printf("%0x\n", f);
//	printf("%x\n", f);
//	printf("%d\n", f);
//	return 0;
//}
////�����Ʋ�����ռλ���������Դ洢��������
////���ƴ洢����ͨ��ռλ���Ĵﵽ��ͬ���Ƶ����Ч��


////������ʧ�����Ժ͸��������ݴ洢���ƴ������
//int main()
//{
//    float f = 0.1;
//    double lf = 0.1;
//    printf("%.20f\n", f);
//    printf("%.20lf", lf);
//    return 0;
//}


//int main()
//{
//    //err  float f= 3.0 % 2.0  ���ʽ����Ϊ����
//    printf("%f\n", 3.0 / 2.0);
//    //printf("%f\n", f);
//    printf("%f\n", 1 / 3 * 3);
//    return 0;
//}

//#include<stdio.h>
//#include<math.h>
//int main()
//{
//    float a, b, c;
//    scanf("%f%f%f", &a, &b, &c);
//    if (b * b - 4 * a * c > 0 && a != 0)
//    {
//        float x1 = (-b + sqrt(b * b - 4 * a * c)) / (2 * a);
//        float x2 = (-b - sqrt(b * b - 4 * a * c)) / (2 * a);
//    }
//    else if (b* b - 4 * a * c = 0 && a != 0)
//    {
//        float x1, x2;
//        x1 = x2 = (-b + sqrt(b * b - 4 * a * c)) / 2 * a;
//    }
//    printf("%.2f %.2f\n", x1, x2);
//    return 0;
//}