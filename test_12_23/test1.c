#define _CRT_SECURE_NO_WARNINGS

//�����������÷���Magic Square����һ�ֽ����ְ����������θ����У�ʹÿ�С��кͶԽ����ϵ����ֺͶ���ȵķ�����
//�÷�Ҳ��һ���й���ͳ��Ϸ����ʱ�ڹٸ���ѧ�ö����
//���ǽ���һ�����ɸ���������Ȼ���ų��ݺ��Ϊ���ɸ����������Σ�ʹ��ͬһ�С�ͬһ�к�ͬһ�Խ����ϵļ������ĺͶ���ȡ�

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




//��ά����������е�ÿ�У��������е�ÿ�У��������Խ��ߣ���O(n)�ķ�����