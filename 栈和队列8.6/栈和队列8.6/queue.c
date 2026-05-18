#define _CRT_SECURE_NO_WARNINGS 1
#include"queue.h"
//初始化
void QueueInit(Queue* pq)
{
	assert(pq);
	pq->phead = NULL;
	pq->ptail = NULL;
	pq->size = 0;
}
//队尾插入
void QueuePush(Queue* pq, QDataType x)
{
	QNode* newnode = (QNode*)malloc(sizeof(QNode));
	if (newnode == NULL)
	{
		perror("malloc fail");
		return;
	}
	newnode->next = NULL;
	newnode->val = x;
	if (pq->ptail == NULL)
	{
		pq->phead = pq->ptail = newnode;
	}
	else
	{
		pq->ptail->next = newnode;
	}
	pq->size++;
}
//队头删除
void QueuePop(Queue* pq)
{
	assert(pq);
	assert(pq->size != 0);
	//一个节点
	if (pq->phead->next == NULL)
	{
		free(pq->phead);//free不是free的这个指针，而是free这个指针指向的节点/内容
		pq->phead = pq->ptail = NULL;
	}
	else//多个节点
	{
		QNode* next = pq->phead->next;
		free(pq->phead);
		pq->phead = next;
	}
	
	/*if (pq->phead == NULL)
	{
		pq->ptail = NULL;
	}*/
	pq->size--;
}
//取队头数据
QDataType QueueFront(Queue* pq)
{
	assert(pq);
	assert(pq->phead);
	return pq->phead->val;
}
//取队尾数据
QDataType QueueBack(Queue* pq)
{
	assert(pq);
	assert(pq->ptail);
	return pq->ptail->val;
}
// 专门用来记录当前队列中存储的有效数据（节点）的个数
int QueueSize(Queue* pq)
{
	assert(pq);
	return pq->size;
}
bool  QueueEmpty(Queue* pq)
{
	assert(pq);

	return pq->size == 0;

}
void QueueDestroy(Queue* pq)
{
	assert(pq);
	QNode* cur = pq->phead;
	while (cur)
	{
		QNode* next = cur->next;
		free(cur);
		cur = next;
	}
	pq->phead = pq->ptail = NULL;
	pq->size = 0;
}