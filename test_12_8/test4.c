#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
//int main()
//{
//    int input;
//    scanf("%d", &input);
//    int a = input / 100;//��λ
//    int b = input / 10 % 10; //ʮλ
//    int c = input % 10;//��λ
//    a = (a + 7) % 10;
//    b = (b + 7) % 10;
//    c = (c + 7) % 10;
//    int output = c * 100 + b * 10 + a;
//    printf("%d\n", output);
//
//    return 0;
//}

//���λ������������������ѭ�����д���



//�򵥵�ð������
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