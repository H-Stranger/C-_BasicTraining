#define _CRT_SECURE_NO_WARNINGS
#include"Queue.h"

void QueueInit(Q* pq)
{
	assert(pq);
	pq->head = pq->tail = NULL;
	printf("初始化成功\n");
}
void QueueDestroy(Q* pq)
{
	assert(pq);
	//从队头开始释放
	while (pq->head)
	{
		//下个指针存储在next
		QN* next = pq->head->next;
		free(pq->head);
		pq->head = next;
	}
	pq -> head =pq->tail= NULL;
}
//入队尾插
void QueuePush(Q* pq, DataType x)
{
	assert(pq);
	//打包节点
	QN* newnode = (QN*)malloc(sizeof(QN));
	if (newnode == NULL)
	{
		printf("malloc is failed\n");
		return;
	}
	else
	{
		newnode->x = x;
		newnode->next = NULL;
	}

	//队列为空
	if (pq->head==NULL)
	{
		pq->head = pq->tail = newnode;
	}
	//非空
	else
	{
		pq->tail->next = newnode;
		pq->tail = newnode;
	}
}
//出队头删
void QueuePop(Q* pq)
{
	assert(pq);
	assert(pq->head);
	//队列一个元素
	if (pq -> head->next == NULL)
	{
		free(pq->head);
		pq->head = pq->tail = NULL;
	}
	//队列两个元素及以上
	else
	{
		QN* tmp = pq->head->next;
		free(pq->head);
		pq->head = tmp;
	}
}
DataType QueueFront(Q* pq)
{
	//队列存在
	assert(pq);
	//队列不为空
	assert(pq -> head);
	return pq->head->x;
}
DataType QueueBack(Q* pq)
{ 
	assert(pq);
	//队列不为空
	assert(pq->tail);
	return pq->tail->x;
}
int QueueSize(Q* pq)
{
	assert(pq);
	int count = 0;
	QN* cur = pq->head;
	//cur为NULL时，count即为队列元素个数
	while (cur)
	{
		cur = cur->next;
		count++;
	}
	return count;
}
bool QueueEmpty(Q* pq)
{
	assert(pq);
	return pq->head == NULL;
}