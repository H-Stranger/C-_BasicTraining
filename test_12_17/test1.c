//#define _CRT_SECURE_NO_WARNINGS
//
//
////题目描述：编写程序，输入字符串s1和s2以及插入位置f，在字符串s1中的指定位置f处插入字符串s2。
////如输入"BEIJING"， "123"， 3，则输出:"BEI123JING"。
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