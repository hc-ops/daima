#pragma once
#pragma once
#include<stdio.h>
#include<stdbool.h>
#include<stdlib.h>
#include<assert.h>
#include<stdbool.h>
typedef int QDataType;

typedef struct QueueNode
{
	struct QueueNode* next;
	QDataType val;
}QNode;
typedef struct Queue
{
	QNode* phead;
	QNode* ptail;
	int size;
}Queue;

//初始化
void QueueInit(Queue* pq);
void QueueDestroy(Queue* pq);
//队尾插入
void QueuePush(Queue* pq, int x);
//队头删除
void QueuePop(Queue* pq);
//专门用来记录当前队列中存储的有效数据（节点）的个数
int QueueSize(Queue* pq);
//取队头数据
QDataType QueueFront(Queue* pq);
//取队尾数据
QDataType QueueBack(Queue* pq);
int QueueSize(Queue* pq);
bool  QueueEmpty(Queue* pq);