#define _CRT_SECURE_NO_WARNINGS
#include"Queue.h"

void QueueInit(Q* pq)
{
	assert(pq);
	pq->head = pq->tail = NULL;
	printf("��ʼ���ɹ�\n");
}
void QueueDestroy(Q* pq)
{
	assert(pq);
	//�Ӷ�ͷ��ʼ�ͷ�
	while (pq->head)
	{
		//�¸�ָ��洢��next
		QN* next = pq->head->next;
		free(pq->head);
		pq->head = next;
	}
	pq -> head =pq->tail= NULL;
}
//���β��
void QueuePush(Q* pq, DataType x)
{
	assert(pq);
	//����ڵ�
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

	//����Ϊ��
	if (pq->head==NULL)
	{
		pq->head = pq->tail = newnode;
	}
	//�ǿ�
	else
	{
		pq->tail->next = newnode;
		pq->tail = newnode;
	}
}
//����ͷɾ
void QueuePop(Q* pq)
{
	assert(pq);
	assert(pq->head);
	//����һ��Ԫ��
	if (pq -> head->next == NULL)
	{
		free(pq->head);
		pq->head = pq->tail = NULL;
	}
	//��������Ԫ�ؼ�����
	else
	{
		QN* tmp = pq->head->next;
		free(pq->head);
		pq->head = tmp;
	}
}
DataType QueueFront(Q* pq)
{
	//���д���
	assert(pq);
	//���в�Ϊ��
	assert(pq -> head);
	return pq->head->x;
}
DataType QueueBack(Q* pq)
{ 
	assert(pq);
	//���в�Ϊ��
	assert(pq->tail);
	return pq->tail->x;
}
int QueueSize(Q* pq)
{
	assert(pq);
	int count = 0;
	QN* cur = pq->head;
	//curΪNULLʱ��count��Ϊ����Ԫ�ظ���
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