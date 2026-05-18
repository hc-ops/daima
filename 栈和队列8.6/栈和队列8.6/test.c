#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//#include<stdlib.h>
//int main()
//{
//	int* p1 = (int*)malloc(8);
//	printf("%p\n", p1);
//	int* p2 = (int*)realloc(p1, 800);
//	printf("%p\n", p2);
//	int i = 0;
//	++i;
//}
#include"stack.h"
//int main()
//{
//	ST s;
//	STInit(&s);
//	STPush(&s,1);
//	STPush(&s,2);
//	STPush(&s,3);
//	STPush(&s,4);
//
//	printf("%d\n", STTop(&s));
//
//
//	STPop(&s);
//	printf("%d\n", STTop(&s));
//	//STPop(&s);
//	//STPop(&s);
//	//STPop(&s);
//	//STDestroy(&s);
//
//
//}
//int main()
//{
//		ST s;
//	STInit(&s);
//	STPush(&s,1);
//	STPush(&s,2);
//	//printf("%d ", STTop(&s));
//	//STTop(&s);
//	STPush(&s,3);
//	STPush(&s,4);
//	while (!STEmpty(&s))
//	{
//		printf("%d ", STTop(&s));
//		STPop(&s);
//
//	}
//	STDestroy(&s);
//}
#include"queue.h"
int main()
{
	Queue q;
	QueuePush(&q, 1);
	QueuePush(&q, 2);
	QueuePush(&q, 3);
	QueuePush(&q, 4);
	while (!QueueEmpty(&q))
	{
		printf("%d ", QueueFront(&q));
		QueuePop(&q);
	}
	printf("\n");
	return 0;
}