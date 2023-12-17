//#define _CRT_SECURE_NO_WARNINGS
//
//#include<stdio.h>
//#include <string.h>
//int main(void)
//{
//    /*********Begin*********/
//    int sumLength = 0, partLength = 0; //总长和每块字符串长度
//    char arr[1000];
//    int max = 0;
//    char Temp_Arr[1000];
//    gets(arr);
//    int i, j;
//    while (strcmp(arr, "stop") != 0)
//    {
//        for (i = 0; i < strlen(arr); i++)
//        {
//            //不碰到空格总长，块字符串长加一次
//            if (arr[i] != ' ')
//            {
//                sumLength++;
//                partLength++;
//            }
//            //碰到空格先比较是否是最大块字符长度，并将块字符串长度重置
//            else
//            {
//                if (partLength > max)
//                {
//                    max = partLength;
//                }
//                partLength = 0;
//            }
//        }
//        //最后一块字符串没有空格，单独判断
//        if (partLength > max)
//        {
//            max = partLength;
//        }
//        partLength = 0;
//
//        //找最长块字符串
//        for (i = 0; i < strlen(arr); i++)
//        {
//            if (arr[i] != ' ')
//            {
//                partLength++;
//                //走到块字符串的最后一个位置，才能判断它是最大块字符串
//                if (partLength == max)
//                {
//                    for (j = 0; j < max; j++)
//                    {
//                        //回头再重新复制
//                        Temp_Arr[j] = arr[j + i - max + 1];
//                    }
//                    Temp_Arr[max] = '\0';
//                    break;
//                }
//            }
//            else
//            {
//                partLength = 0;
//            }
//        }
//        printf("%d %s", sumLength, Temp_Arr);
//        printf("\n");
//        sumLength = 0;
//        partLength = 0;
//        max = 0;
//        gets(arr);//循环再来
//    }
//    /*********End**********/
//    return 0;
//}