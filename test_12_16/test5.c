//#define _CRT_SECURE_NO_WARNINGS
//
//#include<stdio.h>
//int main(void)
//{
//    /*********Begin*********/
//    int row;
//    char arr[20][100];
//    int i;
//    scanf("%d", &row);
//    for (i = 0; i < row; i++)
//    {
//        scanf("%s", arr[i]);//二维数组每个行的首元素地址都是其行的第一个元素的地址
//    }
//    for (i = 0; i < row; i++)
//    {
//        int j = 0;
//        int count = 0;
//        while (arr[i][j] != '\0')
//        {
//            if (arr[i][j] >= '0' && arr[i][j] <= '9')
//            {
//                count++;
//            }
//            j++;
//        }
//        printf("%d\n", count);
//    }
//    /*********End**********/
//    return 0;
//}