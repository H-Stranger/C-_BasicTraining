#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

//��Ŀ����������һ���ַ����ֱ�ͳ�Ƴ�����Ӣ����ĸ�����֡��ո�������ַ��ĸ�����

int main()
{
	//����ͳ�����֡���ĸ���ո������ַ��ĸ�������
	int Ncount = 0, Lcount = 0, Scount = 0, Ocount = 0;
	char str;//strһ�ν�����һ���ַ�
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

//1.������ַ����������д洢��Ҫ��ǰ�����ÿռ��С�����ǲ�֪��ÿ�λ���������ַ������Ҫ����ռ��˷ѣ�������getchar�������ѭ���ﵽЧ��
//2.getchar������������ַ������ڻ���������ȡ�����ַ����׸��ַ���������ASCLL�룬��Ҫ�ﵽ�����ַ����洢���ַ����ֵ�Ч����ѭ�����ʹ��
//3.��Ҫ���������ַ���ASCLL�������жϣ�����ֱ�����ַ����Ƚϴ�С��ϵͳĬ��ת��ASCLL�����Ƚϣ�����Ҫ���