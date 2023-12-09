#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>

//题目描述：对一个字符串中的所有单词，如果单词的首字母不是大写字母，则把单词的首字母变成大写字母。
//在字符串中，单词之间通过空白符分隔，空白符包括：空格(' ')、制表符('\t')、回车符('\r')、换行符('\n')。

//int main()
//{
//    char str[101];
//    while (gets(str) != NULL)
//    {
//        //第一个字符独立判断
//        if (str[0] >= 'a' && str[0] <= 'z')
//        {
//            str[0] = str[0] - 32;
//        }
//        //从第二个字符开始判断
//        int i;
//        for (i = 1; i < strlen(str); i++)
//        {
//            if (str[i - 1] == ' ' || str[i - 1] == '\t' ||
//                str[i - 1] == '/r' || str[i - 1] == '\n')
//            {
//                str[i] = str[i] - 32;
//            }
//        }
//        printf("%s\n", str);
//    }
//    return 0;
//}
//对于第一个字符单独判断   我们判断符号用的是i-1和i搭配 而不是i和i+1搭配，就是为了防止后面访问的时候数组越界了
//缺点：忽视字母本身为大写的情况，如果字母本身为大写，再ASCII码+32，则导致错误

//改进 
//int main()
//{
//    char str[101];
//    while (gets(str) != NULL)
//    {
//        //第一个字符独立判断
//        if (str[0] >= 'a' && str[0] <= 'z')
//        {
//            str[0] = str[0] - 32;
//        }
//        int i;
//        for (i = 1; i < strlen(str); i++)
//        {
//            if ((str[i - 1] == ' ' || str[i - 1] == '\t' ||str[i - 1] == '/r' ||str[i - 1] == '\n') &&
//                (str[i] >= 'a' && str[i] <= 'z'))
//            {
//                str[i] = str[i] - 32;
//            }
//        }
//        printf("%s\n", str);
//    }
//    return 0;
//}