//#define _CRT_SECURE_NO_WARNINGS
//
////水仙花数
////所谓水仙花数是指一个三位数，其各位数字的立方和等于该数字本身。
////比如153是一个水仙花数，因为153 = 1 ^ 3 + 5 ^ 3 + 3 ^ 3。
//
//
//#include<stdio.h>
//#include<math.h>
//int main()
//{
//    int i;
//    for (i = 100; i < 1000; i++)
//    {
//        int a = i / 100;//百位
//        int b = i / 10 % 10;//十位
//        int c = i % 10;//个位
//        if (i == a * a * a + b * b * b + c * c * c)
//        {
//            printf("%d ", i);
//        }
//    }
//    return 0;
//}
////用函数实现