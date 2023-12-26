#define _CRT_SECURE_NO_WARNINGS
#include"Queue.h"

void QueueTest()
{
	Q q;
	QueueInit(&q);
	QueuePush(&q, 5);
	QueuePush(&q, 4);
	QueuePush(&q, 3);
	QueuePush(&q, 2);
	QueuePush(&q, 1);

	printf("%d\n", QueueFront(&q));
	printf("%d\n", QueueBack(&q));

	QueuePop(&q);
	printf("%d\n", QueueFront(&q));

	while (!QueueEmpty(&q))
	{
		printf("%d ", QueueFront(&q));
		QueuePop(&q);
	}
}
int main()
{
	QueueTest();
	return 0;
}