#define _CRT_SECURE_NO_WARNINGS
//��������Ԫ1900��2023��֮���������겢��֮���뵽��ǰĿ¼����Ϊyear.txt���ı��ļ��еĳ����������еĿհ�ʹ��������

#include <stdio.h>

int prime(int y)     //�ж��Ƿ�Ϊ����

{

    if (y % 4 == 0 && y % 100 != 0 || y % 400 == 0)

        return 1;

    else

        return 0;

}

int main()

{

    FILE* fp;

    fp = fopen("year.txt", "w");

    for (int i = 1900; i <= 2023; i++)

        if (prime(i))

            fprintf(fp, "%d", i);

            fclose(fp);

    printf("The file is written!\n");

    return 0;

}