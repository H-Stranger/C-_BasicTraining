//#define _CRT_SECURE_NO_WARNINGS
//
//
////题目描述：输入两个正整数m和n，求其最大公约数和最小公倍数
//
////最小公倍数：两个数的乘积除以两个数的最大公约数
//
//#include<stdio.h>
//int main()
//{
//    int a, b, conmin;
//    scanf("%d%d", &a, &b);
//    int min = a > b ? b : a;
//    int max = a > b ? a : b;
//    int i = 1;
//    for (i = 1; i <= min; i++)
//    {
//        if (max % i == 0 && min % i == 0)
//        {
//            conmin = i;
//        }
//    }
//    int conmax = a * b / conmin;
//    printf("最大公约数是:%d\n", conmin);
//    printf("最小公倍数是:%d\n", conmax);
//
//    return 0;
//}
//
