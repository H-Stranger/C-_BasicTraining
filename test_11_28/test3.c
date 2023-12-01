#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

//题目描述；输入一行字符，分别统计出其中英文字母、数字、空格和其他字符的个数。

int main()
{
	//创建统计数字、字母、空格、其他字符的个数变量
	int Ncount = 0, Lcount = 0, Scount = 0, Ocount = 0;
	char str;//str一次仅接收一个字符
	while ((str = getchar()) != '\n')
	{
		if (str <= '9' && str >= '0')
		{
			Ncount++;
		}
		else if ((str >= 'a' && str <= 'z') || (str >= 'A' && str <= 'Z'))
		{
			Lcount++;
		}
		else if (str == ' ')
		{
			Scount++;
		}
		else
		{
			Ocount++;
		}
	}
	printf("%d %d %d %d\n", Lcount, Ncount, Scount, Ocount);

	return 0;
}

//1.如果用字符数组来进行存储需要提前声明好空间大小，我们不知道每次会输入多少字符，如果要避免空间浪费，可以用getchar函数配合循环达到效果
//2.getchar函数将输入的字符串放在缓冲区，读取的是字符串首个字符，返回其ASCLL码，若要达到类似字符串存储在字符数字的效果用循环配合使用
//3.不要仅限于用字符的ASCLL码来做判断，可以直接用字符来比较大小，系统默认转换ASCLL码来比较，不需要查表