#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//int strcmp(char* p1, char* p2) {
//    /*********Begin*********/
//    char* s1 = p1;
//    char* s2 = p2;
//    while (s1)
//    {
//        if (*s1++ > *s2++)
//        {
//            return 1;
//        }
//        else if (*s1++ < *s2++)
//        {
//            return -1;
//        }
//        else
//        {
//            s1++;
//            s2++;
//        }
//    }
//    /*********End**********/
//}

//缺点
//1.如果s1字符串比较短，循环结束，判断语句在循环内部则会导致最终不会有结果
//2.并不用重新创建变量来接收它的值


//复习
//*pa++  先解引用再对地址++
// 对比*p、*p++、*(p++)、*++p
//其中*p++ 和 *(p++)作用相同

//代码试验

//int a[5] = { 1,2,3,4,5 };
//int* p;
//
//p = a;
//
//printf("*p = %d\n", *p);  // 1
//printf("p = %p\n", p);   //  0x
//
//printf("\nOK\n\n");
//
//printf("*p++ = %d\n", *p++);
//printf("p = %p\n", p);   //  0x
//
//printf("*++p = %d\n", *++p);
//printf("p = %p\n", p);   //  0x
//
//printf("*(p++) = %d\n", *(p++));
//printf("p = %p\n", p);   //  0x


int strcmp(char* p1, char* p2)
{
    while (*p1 == *p2)
    {
        if (*p1 == '\0')
        {
            return 0;//两个字符串都相等，字符串p1已经到\0，说明p2也到\0
        }
        p1++;
        p2++;
    }
    //字符串不相等跳出循环
    //具体比较字符串大小
    if (*p1 > *p2)
    {
        return 1;
    }
    else
    {
        return -1;
    }
}

int main()
{
    char a[110], b[110];
    scanf("%s%s", a, b);
    if (strcmp(a, b) > 0)
        printf("%s", a);
    else
        printf("%s", b);


    return 0;
}