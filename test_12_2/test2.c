#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main(void)
{
    /*********Begin*********/
    int a;
    int sum = 0;
    int m = 1;
    scanf("%d", &a);
    if (a < 0)
    {
        printf("0");
    }
    else
    {
        int i, j;
        for (i = 1; i <= a; i++)
        {
            for (j = 1; j <= i; j++)
            {
                m *= j;
            }
            sum += m;
        }
    }
    printf("%d", sum);
    /*********End**********/
    return 0;
}
