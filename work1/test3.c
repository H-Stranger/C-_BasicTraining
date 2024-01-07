//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//#include<string.h>
////反序输出字符串
//
////两种非递归
//void ReverseOutput1(char* str, int n)
//{
//	int i;
//	for (i = n-1; i >= 0; i--)
//	{
//		printf("%c", *(str+i));
//	}
//	printf("\n");
//}
//void ReverseOutput2(char* str)
//{
//	int left = 0;
//	int right = strlen(str) - 1;
//	while (left < right)
//	{
//		char tmp = str[left];
//		str[left] = str[right];
//		str[right] = tmp;
//		left++;
//		right--;
//	}
//	printf("%s\n", str);
//}
//
//int main()
//{
//	char str[100];
//	scanf("%s",str);
//	ReverseOutput1(str, strlen(str));
//	ReverseOutput2(str, strlen(str));
//	
//	return 0;
//}
//
////递归形式，后续补充