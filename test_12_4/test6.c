//#define _CRT_SECURE_NO_WARNINGS
//
////题目描述：编写程序计算   
////1 - 1/2 + 1/3 - 1/4 + ..... +1/99 - 1/100 的值,
////并显示出来(保留结果为小数点后三位)。
//
//
//#include<stdio.h>
//int main(void)
//{
//    /*********Begin*********/
//    float sum;
//    int i;
//    for (i = 1; i <= 100; i++)
//    {
//        if (i % 2 == 0)
//        {
//            sum += -1.0 / i;
//            continue;
//        }
//        sum += 1.0 / i;
//    }
//    printf("%.3f", sum);
//    /*********End**********/
//    return 0;
//}
