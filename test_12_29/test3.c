#define _CRT_SECURE_NO_WARNINGS
//以下是求公元1900至2023年之间所有闰年并将之存入到当前目录，名为year.txt的文本文件中的程序。填充程序中的空白使其完整。

#include <stdio.h>

int prime(int y)     //判断是否为闰年

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