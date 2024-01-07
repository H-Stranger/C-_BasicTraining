//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//
////找出矩阵每行最大的元素并与第一列交换
//
//#include<stdio.h>
//int main()
//{
//    int n, m;
//    scanf("%d%d", &n, &m);
//    int i;
//    int arr[100][100];
//    for (i = 0; i < n; i++)
//    {
//        int j;
//        for (j = 0; j < m; j++)
//        {
//            scanf("%d", &arr[i][j]);
//        }
//    }
//    printf("原矩阵：\n");
//    for (i = 0; i < n; i++)
//    {
//        int j;
//        for (j = 0; j < m; j++)
//        {
//            printf("%d ", arr[i][j]);
//        }
//        printf("\n");
//    }
//
//    for (i = 0; i < n; i++)
//    {
//        int j;
//        int max = 0;
//        for (j = 1; j < m; j++)
//        {
//            if (arr[i][max] < arr[i][j])
//            {
//                max = j;
//            }
//        }
//        int tmp = arr[i][0];
//        arr[i][0] = arr[i][max];
//        arr[i][max] = tmp;
//    }
//    printf("处理后：\n");
//    for (i = 0; i < n; i++)
//    {
//        int j;
//        for (j = 0; j < m; j++)
//        {
//            printf("%d ", arr[i][j]);
//        }
//        printf("\n");
//    }
//
//    return 0;
//}
//
//
//
////最大值类型，弄清楚
////1.什么时候用max记录数组最大值
////2.什么时候用max记录数组最大值的索引
////3.什么时候仅需比较大小（一般排序即可）