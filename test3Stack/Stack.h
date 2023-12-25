#pragma once
#include<stdio.h>
#include<stdbool.h>
#include<assert.h>
#include<stdlib.h>
typedef int DataType;
typedef struct Stack
{
	DataType* x;//��̬����ʵ��ջ
	int top;
	int capacity;
}ST;


//�ӿں���

//��ʼ��ջ
void StackInit(ST* ps);
//����ջ
void StackDestroy(ST* ps);
//��ջ
void StackPush(ST* ps,DataType a);
//��ջ
void StackPop(ST* ps);
//ջ��
int StackSize(ST* ps);
//ջ��Ԫ��
DataType StackTop(ST* ps);
//�ж�ջ��
bool StackEmpty(ST* ps);
