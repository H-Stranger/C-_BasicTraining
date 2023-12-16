//#define _CRT_SECURE_NO_WARNINGS
//
//#include<stdio.h>
//int main()
//{
//    int arr[10];
//    int i;
//    for (i = 0; i < 10; i++)
//    {
//        scanf("%d", &arr[i]);
//    }
//
//    int max = 0;
//    int n = 0;
//    for (i = 0; i < 10; i++)
//    {
//        if (arr[n] < arr[i])
//        {
//            n = i;
//        }
//    }
//    //刚开始的错误写法，错在数组里面只要前一个小于后一个就把后一个数的下标存下来，但我要的是整个数组的最大值下标
//    //if (arr[i] < arr[i + 1])
//    //{
//    //    n = i + 1;
//    //}
//    
//    //类似顺序表的中间删，n的判断条件是size-1，不是size，不然会越界
//    for (n; n < 10 - 1; n++)
//    {
//        arr[n] = arr[n + 1];
//    }
//    for (i = 0; i < 9; i++)
//    {
//        printf("%d ", arr[i]);
//    }
//    /*********End**********/
//    return 0;
//}
