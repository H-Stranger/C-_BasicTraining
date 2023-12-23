#define _CRT_SECURE_NO_WARNINGS

//任务描述：幻方（Magic Square）是一种将数字安排在正方形格子中，使每行、列和对角线上的数字和都相等的方法。
//幻方也是一种中国传统游戏。旧时在官府、学堂多见。
//它是将从一到若干个连续的自然数排成纵横各为若干个数的正方形，使在同一行、同一列和同一对角线上的几个数的和都相等。

#include<stdio.h>
int main()
{
    int N;
    scanf("%d", &N);
    int arr[20][20];
    int i;
    for (i = 0; i < N; i++)
    {
        int j;
        for (j = 0; j < N; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }

    int sum = 0;
    for (i = 0; i < N; i++)
    {
        sum += arr[0][i];
    }

    for (i = 1; i < N; i++)
    {
        int j;
        int sum1 = 0;
        for (j = 0; j < N; j++)
        {
            sum1 += arr[i][j];
        }
        if (sum != sum1)
        {
            printf("No\n");
            return 0;
        }
    }

    for (i = 0; i < N; i++)
    {
        int j;
        int sum1 = 0;
        for (j = 0; j < N; j++)
        {
            sum1 += arr[j][i];
        }
        if (sum != sum1)
        {
            printf("No\n");
            return 0;
        }
    }

    int sum1 = 0;
    for (i = 0; i < N; i++)
    {
        sum1 += arr[i][i];
    }
    if (sum1 != sum)
    {
        printf("No\n");
        return 0;
    }

    sum1 = 0;
    for (i = 0; i < N; i++)
    {
        sum1 += arr[i][N - 1 - i];
    }
    if (sum1 != sum)
    {
        printf("No\n");
        return 0;
    }

    printf("Yes\n");

    return 0;
}




//二维数组遍历行中的每列，遍历列中的每行，遍历副对角线（用O(n)的方法）