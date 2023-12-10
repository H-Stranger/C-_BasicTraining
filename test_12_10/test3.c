#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
    int i;
    int count = 0;
    for (i = 2; i <= 100; i++)
    {
        int j;
        int flag = 1;
        for (j = 2; j < i; j++)
        {
            if (i % j == 0)
            {
                flag = 0;
                break;
            }
        }
        if (flag == 1)
        {
            printf("%-3d", i);
            count++;
            if (count % 10 == 0)
            {
                printf("\n");
            }
        }

    }
    return 0;
}