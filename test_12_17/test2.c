//#define _CRT_SECURE_NO_WARNINGS
//
//#include<stdio.h>
//#include <string.h>
//int main(void)
//{
//    /*********Begin*********/
//    int sumLength = 0, partLength = 0; //�ܳ���ÿ���ַ�������
//    char arr[1000];
//    int max = 0;
//    char Temp_Arr[1000];
//    gets(arr);
//    int i, j;
//    while (strcmp(arr, "stop") != 0)
//    {
//        for (i = 0; i < strlen(arr); i++)
//        {
//            //�������ո��ܳ������ַ�������һ��
//            if (arr[i] != ' ')
//            {
//                sumLength++;
//                partLength++;
//            }
//            //�����ո��ȱȽ��Ƿ��������ַ����ȣ��������ַ�����������
//            else
//            {
//                if (partLength > max)
//                {
//                    max = partLength;
//                }
//                partLength = 0;
//            }
//        }
//        //���һ���ַ���û�пո񣬵����ж�
//        if (partLength > max)
//        {
//            max = partLength;
//        }
//        partLength = 0;
//
//        //������ַ���
//        for (i = 0; i < strlen(arr); i++)
//        {
//            if (arr[i] != ' ')
//            {
//                partLength++;
//                //�ߵ����ַ��������һ��λ�ã������ж����������ַ���
//                if (partLength == max)
//                {
//                    for (j = 0; j < max; j++)
//                    {
//                        //��ͷ�����¸���
//                        Temp_Arr[j] = arr[j + i - max + 1];
//                    }
//                    Temp_Arr[max] = '\0';
//                    break;
//                }
//            }
//            else
//            {
//                partLength = 0;
//            }
//        }
//        printf("%d %s", sumLength, Temp_Arr);
//        printf("\n");
//        sumLength = 0;
//        partLength = 0;
//        max = 0;
//        gets(arr);//ѭ������
//    }
//    /*********End**********/
//    return 0;
//}