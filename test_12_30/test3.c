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

//ȱ��
//1.���s1�ַ����Ƚ϶̣�ѭ���������ж������ѭ���ڲ���ᵼ�����ղ����н��
//2.���������´�����������������ֵ


//��ϰ
//*pa++  �Ƚ������ٶԵ�ַ++
// �Ա�*p��*p++��*(p++)��*++p
//����*p++ �� *(p++)������ͬ

//��������

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
            return 0;//�����ַ�������ȣ��ַ���p1�Ѿ���\0��˵��p2Ҳ��\0
        }
        p1++;
        p2++;
    }
    //�ַ������������ѭ��
    //����Ƚ��ַ�����С
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