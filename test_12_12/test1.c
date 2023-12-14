#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main(void)
{
    /*********Begin*********/
    int n;
    scanf("%d", &n);
    int arr[100];
    int i;
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    int number;
    scanf("%d", &number);
    int right = n - 1, left = 0;
    int mid = (right + left) / 2;

    while (left <= right)
    {
        if (number > arr[mid])
        {
            left = mid + 1;
            mid = (left + right) / 2;
        }
        else if (number < arr[mid])
        {
            right = mid - 1;
            mid = (left + right) / 2;
        }
        else
        {

        }
    }
    return 0;
}