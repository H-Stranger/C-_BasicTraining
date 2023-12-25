#pragma once
#include<stdio.h>
#include<stdbool.h>
#include<assert.h>
#include<stdlib.h>
typedef int DataType;
typedef struct Stack
{
	DataType* x;//动态数组实现栈
	int top;
	int capacity;
}ST;


//接口函数

//初始化栈
void StackInit(ST* ps);
//销毁栈
void StackDestroy(ST* ps);
//入栈
void StackPush(ST* ps,DataType a);
//出栈
void StackPop(ST* ps);
//栈长
int StackSize(ST* ps);
//栈顶元素
DataType StackTop(ST* ps);
//判断栈空
bool StackEmpty(ST* ps);
