#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
//int main()
//{
//    int input;
//    scanf("%d", &input);
//    int a = input / 100;//百位
//    int b = input / 10 % 10; //十位
//    int c = input % 10;//个位
//    a = (a + 7) % 10;
//    b = (b + 7) % 10;
//    c = (c + 7) % 10;
//    int output = c * 100 + b * 10 + a;
//    printf("%d\n", output);
//
//    return 0;
//}

//如果位数过多最好用数组搭配循环进行处理



//简单的冒泡排序
//#include<stdio.h>
//int main()
//{
//    int arr[5];
//    int i,j;
//    for (i = 0; i < 5; i++)
//    {
//        scanf("%d", &arr[i]);
//    }
//
//    for (i = 0; i < 4; i++)
//    {
//        for (j = 0; j <= 4-i-1; j++)
//        {
//            if (arr[j] > arr[j + 1])
//            {
//                int tmp = arr[j];
//                arr[j] = arr[j + 1];
//                arr[j + 1] = tmp;
//            }
//        }
//    }
//
//    for (i = 0; i < 5; i++)
//    {
//        if (i == 4)
//        {
//            printf("%d\n", arr[i]);
//            break;
//        }
//        printf("%d ", arr[i]);
//    }
//    return 0;
//}