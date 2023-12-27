#define _CRT_SECURE_NO_WARNINGS

//任务描述
//用递归法将一个整数n转换成字符串，然后输出，输出时要求各个字符之间用空格隔开。
//例如，输入483，应输出字符串“4 8 3”。n的位数不确定，可以是任意位数的整数。

#include<stdio.h> 
#include<string.h>
void figureTrasform(int n) {
    //在此写入函数体
    //在函数体内实现输出
    //注意主函数，非常重要 
    /*****************Begin******************/
    if (n < 0)
    {
        n = -n;
        putchar('-');
        putchar(' ');
    }

    if (n / 10 != 0)
    {
        figureTrasform(n / 10);
    }
    putchar(n % 10 + '0');
    putchar(32);


    /***************** End ******************/
}
//n/10 != 0  >10  >=10
