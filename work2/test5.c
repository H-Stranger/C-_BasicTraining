//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//#include<string.h>
//
//int main()
//{
//	char str[100];
//	gets(str);
//	int len = strlen(str);
//
//	int i;
//	FILE* fp = fopen("test.txt", "w");
//	for (i = 0; i < len; i++)
//	{
//		if (str[i] >= 'a' && str[i] <= 'w')
//			fprintf(fp, "%c", str[i] + 3);
//		else if (str[i] >= 'x' && str[i] <= 'z')
//			fprintf(fp, "%c", str[i] - 23);
//		else
//			fprintf(fp, "%c", str[i]);
//	}
//
//	fclose(fp);
//	return 0;
//}