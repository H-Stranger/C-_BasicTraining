#define _CRT_SECURE_NO_WARNINGS

//��������
//����������һ��3 * 4�����ҳ�ÿ��������Ԫ�ز����1��Ԫ�ؽ���������Ҫ�����£�
//1. ʹ�ö�ά�����Ÿ�3 * 4����
//2. Ϊ��ά�����������ݡ�
//3. ���ԭ���󲢺ʹ����ľ�����бȽϡ�


#include<stdio.h>
int main()
{
    int n, m;
    scanf("%d%d", &n, &m);
    int i;
    int arr[100][100];
    for (i = 0; i < n; i++)
    {
        int j;
        for (j = 0; j < m; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }
    printf("ԭ����\n");
    for (i = 0; i < n; i++)
    {
        int j;
        for (j = 0; j < m; j++)
        {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }

    for (i = 0; i < n; i++)
    {
        int j;
        int max = 0;
        for (j = 1; j < m; j++)
        {
            if (arr[i][max] < arr[i][j])
            {
                max = j;
            }
        }
        int tmp = arr[i][0];
        arr[i][0] = arr[i][max];
        arr[i][max] = tmp;
    }
    printf("�����\n");
    for (i = 0; i < n; i++)
    {
        int j;
        for (j = 0; j < m; j++)
        {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }

    return 0;
}

//���ֵ���ͣ�Ū���
//1.ʲôʱ����max��¼�������ֵ
//2.ʲôʱ����max��¼�������ֵ������
//3.ʲôʱ�����Ƚϴ�С��һ�����򼴿ɣ�