#include <stdio.h>
#include <string.h>

//��Ŀ����:���������ַ���a��b����b���е�����ַ����뵽a������С�ַ����档

int main(void)
{
    /*********Begin*********/
    char arr1[100];
    char arr2[100];
    scanf("%s", arr1);
    scanf("%s", arr2);

    int len1 = strlen(arr1);
    int len2 = strlen(arr2);
    int i;
    char max = arr1[0];
    for (i = 0; i < len2; i++)
    {
        if (max < arr2[i])
        {
            max = arr2[i];
        }
    }
    int pos = 0;
    for (i = 0; i < len1; i++)
    {
        if (arr1[pos] > arr1[i])
        {
            pos = i;
        }
    }
    for (i = len1; i > pos; i--)
    {
        arr1[i + 1] = arr1[i];
    }
    arr1[pos + 1] = max;
    printf("%s\n", arr1);
    /*********End**********/
    return 0;
}