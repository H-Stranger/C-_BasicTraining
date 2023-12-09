#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

//题目描述：使用格式字符o和x（X）获得用户输入的整数并将他们转换为十进制
//输入：一行，用空格隔开的三个进制数。 第一个数是八进制。 第二个和第三个数是十六进制。
//027 0x17 0X17


//int main()
//{
//	//int a, b,c;
//	//scanf("%o", &a);//八进制
//	//scanf("%x", &b);//十六进制  0x
//	//scanf("%x", &c);//十六进制  0X
//	//printf("%d\n", a);
//	//printf("%d\n", b);
//	//printf("%d\n", c);
//
//	//二进制存储
//	int d = 0b11101;
//	printf("%d\n", d);
//	
//	//八进制存储
//	int e = 023;
//	printf("%o\n", e);
//	printf("%d\n", e);
//
//	//十六进制存储
//	int f = 0x12AD;
//	printf("%0x\n", f);
//	printf("%x\n", f);
//	printf("%d\n", f);
//	return 0;
//}
////二进制不存在占位符，但可以存储二进制数
////进制存储可以通过占位更改达到不同进制的输出效果


////精度损失，可以和浮点型数据存储机制搭配理解
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
//    //err  float f= 3.0 % 2.0  表达式必须为整形
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