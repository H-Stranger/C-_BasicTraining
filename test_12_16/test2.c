//#define _CRT_SECURE_NO_WARNINGS
//
//#include<stdio.h>
//int main()
//{
//    int arr[10];
//    int i;
//    for (i = 0; i < 10; i++)
//    {
//        scanf("%d", &arr[i]);
//    }
//
//    int max = 0;
//    int n = 0;
//    for (i = 0; i < 10; i++)
//    {
//        if (arr[n] < arr[i])
//        {
//            n = i;
//        }
//    }
//    //�տ�ʼ�Ĵ���д����������������ֻҪǰһ��С�ں�һ���ͰѺ�һ�������±������������Ҫ����������������ֵ�±�
//    //if (arr[i] < arr[i + 1])
//    //{
//    //    n = i + 1;
//    //}
//    
//    //����˳�����м�ɾ��n���ж�������size-1������size����Ȼ��Խ��
//    for (n; n < 10 - 1; n++)
//    {
//        arr[n] = arr[n + 1];
//    }
//    for (i = 0; i < 9; i++)
//    {
//        printf("%d ", arr[i]);
//    }
//    /*********End**********/
//    return 0;
//}
