#define _CRT_SECURE_NO_WARNINGS
#include"Stack.h"
void StackTest()
{
	ST s;
	StackInit(&s);
	StackPush(&s, 4);
	StackPush(&s, 3);
	StackPush(&s, 2);
	while (!StackEmpty(&s))
	{
		printf("%d ",StackTop(&s));
		StackPop(&s);
	}
	StackDestroy(&s);
}

int main()
{
	StackTest();
	return 0;
}