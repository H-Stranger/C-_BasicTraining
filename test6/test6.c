#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
//int main()
//{
//	int a = 10;
//	if (a < 20)
//	{
//		printf("<20\n");
//	}
//	else if (a < 30)
//	{
//		printf("<30\n");
//	}
//
//	return 0;
//}

//int main()
//{
//	//int a;
//	//scanf("%6d", &a);
//	//printf("%d", a);
//
//	//char arr[7];
//	//int input = scanf("%s", arr);
//	//printf("%d\n", input);
//	//printf("%s\n", arr);
//	//printf("%d\n", arr[6]);
//
//	int i;
//	char arr[7];
//	for (i = 0; i < 6; i++)
//	{
//		scanf("", &arr[i]);
//	}
//	printf("%s", arr);
//	return 0;
//}

//int main()
//{
//    char arr[7];
//    int num = 0;
//    while (1)
//    {
//        scanf("%s", arr);
//        if ((arr[6] == 0) && arr[5] != '0' && arr[4] != '0')
//        {
//            break;
//        }
//    }
//
//    int i = 5;
//    char tmp = arr[5];
//    while (i)
//    {
//        arr[i] = arr[i - 1];
//        i--;
//    }
//    arr[0] = tmp;
//
//    int number = 0;
//    for (i = 0; i < 6; i++)
//    {
//        number = 10 * number + (arr[i] - '0');
//    }
//
//    printf("%d\n", number);
//
//    return 0;
//}
//
//int main()
//{
//	//char a = '7';
//	//int b = a;//ASCLL码转过来的
//	//printf("%d", b);
//
//	char a = '7';
//	int b = (int)a;
//	printf("%d",b);
//
//	char arr[] = "123456";
//	int c = (int)arr;
//	printf("%d", c);
//	return 0;
//}


//int main()
//{
//	char arr[] = "0";
//	scanf("%s", arr);
//	printf("%s\n", arr);
//
//	return 0;
//}

//int main()
//{
//	//char arr[1000];
//	//scanf("%s", arr);
//	char* arr = (char*)malloc(2);
//	scanf("%s", arr[0]);
//	printf("%s\n", arr);
//	int length = sizeof(arr) / sizeof(char);
//	printf("%d\n", length);
//
//	return 0;
//}

//int main()
//{
//	char arr[] = { 0 };
//	return 0;
//}

//#include<stdio.h>
//#include<string.h>
//int main()
//{
//    char arr[10001];
//    scanf("%s", arr);
//
//    int i = 0;
//    int length = strlen(arr);
//    char end = '0';
//    for (i = 0; i < length; i++)
//    {
//        if (arr[i] == 'a' || arr[i] == 'e' || arr[i] == 'i' || arr[i] == 'o' || arr[i] == 'u')
//        {
//            end = arr[i];
//        }
//    }
//    printf("%c", end);
//
//    return 0;
//}

