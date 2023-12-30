//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//
////交换数值，利用指针进行交换
////复习知识点，对知识点有所遗忘
//
//
////传参相当于重新找了指针a，b的形参，用*可以找到a，b指针存储的值(pa,pb)
////但若是还对a，b进行操作依然属于操作形参的范围
//
////void swap(int* a, int* b)
////{
////    int* tep = a;
////    a = b;
////    b = tep;
////}
//
//void swap(int* pa, int* pb)
//{
//    int temp = *pa;
//    *pa = *pb;
//    *pb = temp;
//}
//
//int main(void)
//{
//    int a, b;
//    scanf("%d%d", &a, &b);
//    /*********Begin*********/
//    swap(&a, &b);
//    printf("%d %d\n", a, b);
//    /*********End**********/
//    return 0;
//}