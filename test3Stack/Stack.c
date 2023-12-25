#define _CRT_SECURE_NO_WARNINGS
#include"Stack.h"

void StackInit(ST* ps)
{
	assert(ps);
	//��ʼ����������Ϊ4
	DataType* tmp = (DataType*)malloc(4*sizeof(DataType));
	if (tmp==NULL)
	{
		printf("malloc is failed\n");
		return;
	}
	else
	{
		ps->x = tmp;
		ps->capacity = 4;
		ps->top = 0;//ջ��Ԫ�ص�����Ϊtop - 1
	}
	printf("��ʼ���ɹ�\n");
}
void StackDestroy(ST* ps)
{
	assert(ps);
	//�������ͷ�
	free(ps->x);
	ps->x = NULL;
	ps->capacity = 0;
	ps->top = 0;
	printf("����ջ�ɹ�\n");
}
//β��
void StackPush(ST* ps,DataType a)
{
	assert(ps);
	//�ж����������Ƿ��㹻
	if (ps->top == ps->capacity)
	{
		DataType* tmp = (DataType*)realloc(ps->x, 2 * ps->capacity*sizeof(DataType));
		if (tmp == NULL)
		{
			printf("realloc is failed\n");
			return;
		}
		else
		{
			ps->x = tmp;
			ps->capacity *= 2;
		}
	}
	ps->x[ps->top] = a;
	ps->top++;
	printf("��ջ�ɹ�\n");
}
//βɾ
void StackPop(ST* ps)
{
	//ջ����
	assert(ps);
	//ջ��Ϊ��
	assert(ps->x);
	
	ps->top--;
	printf("��ջ�ɹ�\n");
}

int StackSize(ST* ps)
{
	assert(ps);
	return ps->top;
}

DataType StackTop(ST* ps)
{
	assert(ps);
	//ջ��Ԫ��Ϊtop - 1
	return ps->x[ps->top - 1];
}

bool StackEmpty(ST* ps)
{
	assert(ps);
	return ps->top == NULL;
}