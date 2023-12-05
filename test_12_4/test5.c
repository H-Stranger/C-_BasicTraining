//#define _CRT_SECURE_NO_WARNINGS
////题目描述：一个数如果恰好等于它的因子之和，这个数就称为"完数"。 
////例如，6的因子为1、2、3，而6=1+2+3，因此6是"完数"。 
////编程序找出1000之内的所有完数。
//
//#include<stdio.h>
//int found(int num)
//{
//    int i, sum = 0;
//    for (i = 1; i < num; i++)
//    {
//        if (num % i == 0)
//        {
//            sum += i;
//        }
//    }
//    if (sum == num)
//    {
//        return num;
//    }
//    else
//    {
//        return 0;
//    }
//}
//int main(void)
//{
//    /*********Begin*********/
//    int i = 0;
//    for (i = 1; i <= 1000; i++)
//    {
//        if (found(i) != 0)
//        {
//            printf("%d\n", i);
//        }
//    }
//    /*********End**********/
//    return 0;
//}
