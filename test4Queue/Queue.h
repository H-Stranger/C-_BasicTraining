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

//�ӿں���

//��ʼ������
void QueueInit(Q* pq);
//���ٶ���
void QueueDestroy(Q* pq);


//���
void QueuePush(Q* pq, DataType x);
//����
void QueuePop(Q* pq);
//��ͷԪ��
DataType QueueFront(Q* pq);
//��βԪ��
DataType QueueBack(Q* pq);
//�ӳ���
int QueueSize(Q* pq);
//���Ƿ��
bool QueueEmpty(Q* pq);