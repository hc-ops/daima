#define _CRT_SECURE_NO_WARNINGS 1
#define _CRT_SECURE_NO_WARNINGS 1
#include"heap.h"
void HPInit(HP* php)
{
	assert(php);
	php->a = NULL;
	php->capacity = php->size = 0;
}
void HPdestroy(HP* php)
{
	assert(php);
	free(php->a);
	php->a = NULL;
	php->capacity = php->size = 0;
}
void Swap(HPDataType* p1, HPDataType* p2)
{
	HPDataType tmp = *p1;
	*p1 = *p2;
	*p2 = tmp;
}
//向上调整：不需要 size —— 因为方向是“回根”
//因为你不需要“向下探索”，而是一路往根走（索引 0）。
//终止条件是：
//到达根节点（child == 0）
//或者当前节点已经满足堆性质，无需继续
//所以你不需要知道整个堆有多大，只需要知道“我是谁”和“我爹是谁”
void AdjustUp(HPDataType* a, int child)
{
	int parent = (child - 1) / 2;
	while (child > 0)
	{
		if (a[parent] > a[child])
		{
			Swap(&a[child], &a[parent]);
			child = parent;
			parent = (child - 1) / 2;
		}
		else
		{
			break;
		}
	}
}

void HPPush(HP* php, HPDataType x)
{
	assert(php);
	if (php->size == php->capacity)
	{
		int newcapacity = php->capacity == 0 ? 4 : php->capacity * 4;
		HPDataType* tmp = (HPDataType*)realloc(php->a, newcapacity * sizeof(HPDataType));
		if (tmp == NULL)
		{
			perror("realloc fail");
			return;
		}
		php->a = tmp;
		php->capacity = newcapacity;
	}
	php->a[php->size] = x;
	php->size++;
	AdjustUp(php->a, php->size - 1);
}
void AdjustDown(HPDataType* a, int n, int parent)
{
	//假设左孩子小
	int child = parent * 2 + 1;
	while (child < n)//child>=n说明孩子不存在
	{
		//找出最小的孩子
		if (child + 1 < n && a[child + 1] < a[child])
		{
			++child;
		}
		if (a[child] < a[parent])
		{
			Swap(&a[child], &a[parent]);
			parent = child;
			child = parent * 2 + 1;
		}
		else
		{
			break;
		}
	}
}
//pop删除，要求堆顶的数据（根位置）
void HPPop(HP* php)
{
	assert(php);
	assert(php->size > 0);
	Swap(&php->a[0], &php->a[php->size - 1]);
	php->size--;
	AdjustDown(php->a, php->size, 0);
}
//为什么传 php->size？
// 因为在向下调整时，你必须知道堆的有效范围，即数组中有多少个元素是“属于堆”的。
//你需要判断：
//某个节点有没有左孩子？→ left < size
	//某个节点有没有右孩子？→ right < size
	//哪个孩子更大（大根堆）？
	//如果没有 size，你就无法知道“哪里是底”，会越界访问内存！
//访问堆顶元素
HPDataType HPTop(HP* php)
{
	assert(php);
	assert(php->size > 0);
	return php->a[0];
}
bool HPEmpty(HP* php)
{
	assert(php);
	return php->size == 0;
}