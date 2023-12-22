#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>

//void t(char* no)
//{
//	strcat(no, "abcd");
//}
//
//int main()
//{
//	char no[10] = { 0 };
//	printf("%p\n", &no);
//	printf("%p\n", no);
//	t(&no);
//	printf("%s\n", no);
//	t(no);
//	printf("%s\n", no);
//
//	return 0;
//}

#include<stdio.h>
//int main()
//{
//    int a, b;
//    scanf("%d %d", &a, &b);
//    int max1 = (a > b?a:b);
//    scanf("%d %d", &a, &b);
//    int max2 = (a > b?a:b);
//    scanf("%d %d", &a, &b);
//    int max3 = (a > b?a:b);
//
//    printf("max=%d\n", max1);
//    printf("max=%d\n", max2);
//    printf("max=%d\n", max3);
//    return 0;
//}
//#include<stdio.h>
//struct student
//{
//    char no[20];
//    int grade;
//};
//struct seqlist
//{
//    struct student arr[50];
//    int size;
//};
//int main()
//{
//    struct seqlist sl;
//    int i = 0;
//    for (i = 0; i < 50; i++)
//    {
//        scanf("%s %d", &(sl.arr[i].no), &(sl.arr[i].grade));
//        sl.size++;
//    }
//    for (i = 0; i < 50; i++)
//    {
//        if (sl.arr[i].grade >= 80)
//        {
//            printf("%s %d\n", sl.arr[i].no, sl.arr[i].grade);
//            sl.size--;
//        }
//    }
//    return 0;
//}

//int main()
//{
//    int m, n;
//    int i;
//    scanf("%d %d", &m, &n);
//    int min = (m < n ? m : n);
//    int twomax = 0;
//    for (i = 2; i <= min; i++)
//    {
//        if (m % i == 0 && n % i == 0)
//        {
//            twomax = i;
//        }
//    }
//    printf("%d\n", twomax);
//    return 0;
//}

//int main()
//{
//    int a, b, c;
//    scanf("%d %d %d", &a, &b, &c);
//    if ((b ^ 2 - 4ac) > 0)
//    {
//        printf("%.4f %.4f\n", (-b - (b ^ 2 - 4ac > 0) ^ (1 / 2)) / 4a, (-b + (b ^ 2 - 4ac > 0) ^ (1 / 2)) / 4a);
//    }
//    else if ((b ^ 2 - 4ac) == 0)
//    {
//        printf("%.4f\n", -b / 4a);
//    }
//    else
//    {
//        printf("no answer\n");
//    }
//    return 0;
//}

//struct studentlist
//{
//    char no[12];
//    char name[12];
//    int Mgrade;
//    int Egrade;
//};
//struct seqlist
//{
//    struct studentlist arr[2];
//    int size;
//};
//int main()
//{
//    struct seqlist sl;
//    int i = 0;
//    for (i = 0; i < 2; i++)
//    {
//        scanf("%s %s %d %d", &sl.arr[i].no, &sl.arr[i].name, &sl.arr[i].Mgrade, &sl.arr[i].Egrade);
//    }
//
//    if (sl.arr[1].Mgrade > sl.arr[0].Mgrade)
//    {
//        printf("%s %s %d %d\n", sl.arr[1].no, sl.arr[1].name,sl.arr[1].Mgrade, sl.arr[1].Egrade);
//        printf("%s %s %d %d\n", sl.arr[1].no,sl.arr[1].name,sl.arr[0].Mgrade, sl.arr[0].Egrade);
//    }
//    else
//    {
//        printf("%s %s %d %d\n", sl.arr[1].no, sl.arr[1].name,sl.arr[0].Mgrade, sl.arr[0].Egrade);
//        printf("%s %s %d %d\n", sl.arr[1].no, sl.arr[1].name,sl.arr[1].Mgrade, sl.arr[1].Egrade);
//    }
//
//    return 0;
//}

//void test(int* pa)
//{
//	int bb = *pa;
//	bb--;
//}
//void test2(int* pa)
//{
//	*pa = *pa - 1;//ÎÞÓ°Ïì
//}
//int main()
//{
//	int a = 10;
//	test(&a);
//	printf("%d\n",a);
//	test(&a);
//	printf("%d\n",a);
//	return 0;
//}

//void test(int* pa)
//{
//	int* b = pa;
//	*b = 9;
//}
//int main()
//{
//	int a = 10;
//	test(&a);
//	printf("%d\n", a);
//
//	return 0;
//}