#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
    char a;
    int sum = 0;
    while (a = getchar() != '\n')
    {
        printf("%d\n",a);
        sum += (a - '1'+1);
    }
    printf("%d\n", sum);
    return 0;
}