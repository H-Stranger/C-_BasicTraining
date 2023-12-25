#define _CRT_SECURE_NO_WARNINGS
#include"Stack.h"

void StackInit(ST* ps)
{
	assert(ps);
	//初始化容器容量为4
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
		ps->top = 0;//栈顶元素的索引为top - 1
	}
	printf("初始化成功\n");
}
void StackDestroy(ST* ps)
{
	assert(ps);
	//将数组释放
	free(ps->x);
	ps->x = NULL;
	ps->capacity = 0;
	ps->top = 0;
	printf("销毁栈成功\n");
}
//尾插
void StackPush(ST* ps,DataType a)
{
	assert(ps);
	//判断容器容量是否足够
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
	printf("入栈成功\n");
}
//尾删
void StackPop(ST* ps)
{
	//栈存在
	assert(ps);
	//栈不为空
	assert(ps->x);
	
	ps->top--;
	printf("出栈成功\n");
}

int StackSize(ST* ps)
{
	assert(ps);
	return ps->top;
}

DataType StackTop(ST* ps)
{
	assert(ps);
	//栈顶元素为top - 1
	return ps->x[ps->top - 1];
}

bool StackEmpty(ST* ps)
{
	assert(ps);
	return ps->top == NULL;
}