#pragma once
#include<stdio.h>
#include<assert.h>
#include<stdlib.h>
#include<stdbool.h>

typedef int DataType;
typedef struct QueueNode
{
	DataType x;
	struct QueueNode* next;
}QN;
typedef struct Queue
{
	QN* head;
	QN* tail;
}Q;

//接口函数

//初始化队列
void QueueInit(Q* pq);
//销毁队列
void QueueDestroy(Q* pq);


//入队
void QueuePush(Q* pq, DataType x);
//出队
void QueuePop(Q* pq);
//队头元素
DataType QueueFront(Q* pq);
//队尾元素
DataType QueueBack(Q* pq);
//队长度
int QueueSize(Q* pq);
//队是否空
bool QueueEmpty(Q* pq);