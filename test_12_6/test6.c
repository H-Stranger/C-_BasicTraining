#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//int main()
//{
//    int i = 0;
//    double sum = 0;
//    double a = 1, b = 2;
//    for (i = 1; i <= 20; i++)
//    {
//        sum += b / a;
//        //b为ab的和，a为b的值
//        b = a + b;
//        a = b - a;
//    }
//    printf("%lf", sum);
//    return 0;
//}

//知识点遗忘，用sizeof来算出数组的空间大小不太效
//sizeof 算出来的是数组可以存储的元素个数
// strlen 也不行
//#include<string.h>
//int main()
//{
//	int arr[5];
//	arr[0] = 1;
//	arr[1] = 1;
//	arr[2] = 1;
//	int length = sizeof(arr) / sizeof(arr[0]);
//	//int length = strlen(arr);
//	printf("%d", length);
//	
//	return 0;
//}