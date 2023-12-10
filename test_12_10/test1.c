//#define _CRT_SECURE_NO_WARNINGS
//
////题目描述:按如下函数原型编程从键盘输入一个m行n列的二维数组，
////然后计算数组中元素的最大值及其所在的行列下标值。
////其中m和n的值由用户键盘输入。已知m和n的值都不超过10。
//
////输入：
////5, 5
////1 2 3 4 5
////4 5 6 100 2
////3 2 1 5 6
////1 2 3 5 4
////3 5 6 4 8
//
//
//#include<stdio.h>
//int main(void)
//{
//    int row, col;
//    printf("Input m, n:");
//    scanf("%d,%d", &row, &col);
//    int arr[100][100];
//    int i, j;
//    printf("Input %d*%d array:\n", row, col);
//    for (i = 0; i < row; i++)
//    {
//        for (j = 0; j < col; j++)
//        {
//            scanf("%d", &arr[i][j]);
//        }
//    }
//    int max = arr[0][0];
//    int row1 = 1, col1 = 1;
//    for (i = 0; i < row; i++)
//    {
//        for (j = 0; j < col; j++)
//        {
//            if (max < arr[i][j])
//            {
//                max = arr[i][j];
//                row1 = i + 1;//序号对应的都是从1开始的，不是按照数组索引
//                col1 = j + 1;
//            }
//        }
//    }
//    printf("max=%d, row=%d, col=%d\n", max, row1, col1);
//    return 0;
//}

//二维数组找最大值，刚开始用了数组相邻元素比较，类似冒泡，但这不现实，因为不同行的元素不好比较
//采用元素记录最大，j<col和j<col-1两种情况主要是看最后一次比较是否会出现越界