//#define _CRT_SECURE_NO_WARNINGS
//
////杨辉三角形
//#include<stdio.h>
//int main(void)
//{
//    int i, j;
//    int arr[10][10];
//    for (i = 0; i < 10; i++)
//    {
//        for (j = 0; j < 10; j++)
//        {
//            //行首和行尾赋值1
//            if (j == 0 || j == i)
//            {
//                arr[i][j] = 1;
//            }
//            else
//            {
//                arr[i][j] = arr[i - 1][j - 1] + arr[i - 1][j];
//            }
//        }
//    }
//    for (i = 0; i < 10; i++)
//    {
//        for (j = 0; j <= i; j++)
//        {
//            printf("%d ", arr[i][j]);
//        }
//        printf("\n");
//    }
//    return 0;
//}