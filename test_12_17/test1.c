//#define _CRT_SECURE_NO_WARNINGS
//
//
////��Ŀ��������д���������ַ���s1��s2�Լ�����λ��f�����ַ���s1�е�ָ��λ��f�������ַ���s2��
////������"BEIJING"�� "123"�� 3�������:"BEI123JING"��
//
//#include<stdio.h>
//#include<string.h>
//int main(void)
//{
//    /*********Begin*********/
//    char s1[1000];
//    char s2[100];
//    gets(s1);
//    gets(s2);
//    int pos;
//    scanf("%d", &pos);
//
//    int len1 = strlen(s1);
//    int len2 = strlen(s2);
//    int i, j;
//    for (i = len1; i >= pos; i--)
//    {
//        s1[i + len2] = s1[i];
//    }
//
//    for (j = 0; j < len2; j++)
//    {
//        s1[pos + j] = s2[j];
//    }
//
//    printf("%s\n", s1);
//    /*********End**********/
//    return 0;
//}