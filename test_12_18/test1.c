#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//int main()
//{
//	char arr[5][5];
//	gets(arr);
//	 
//	
//	//int i;
//	//for (i = 0; i < 5; i++)
//	//{
//	//	gets(arr[i]);
//	//}
//	printf("%c\n", arr[2][1]);
//	return 0;
//}


//
//
//int main()
//{
//    int M, N;
//    scanf("%d%d", &M, &N);
//    char arr[100][100];
//    int i;
//    for (i = 0; i < M; i++)
//    {
//        gets(arr[i]);
//    }
//    for (i = 0; i < M; i++)
//    {
//        printf("%s", arr[i]);
//    }
//    return 0;
//}
////运行结果每次都比输入的行字符串都要比输入的行小一个
//


#include<stdio.h>
/********** Begin **********/
int main()
{
    int M, N;
    scanf("%d%d", &M, &N);
    char arr[100][100];
    int i;
    for (i = 0; i < M; i++)
    {
        int j;
        for (j = 0; j < N; j++)
        {
            scanf("%c", &arr[i][j]);
        }
    }
    for (i = 0; i < M; i++)
    {
        int j;
        for (j = 0; j < N; j++)
        {
            printf("%c", arr[i][j]);
        }
    }
    return 0;
}




/********** End **********/
