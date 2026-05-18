#define _CRT_SECURE_NO_WARNINGS 1
#define _CRT_SECURE_NO_WARNINGS 1
#include"stack.h"
//初始化和销毁
void STInit(ST* pst)
{
	assert(pst);//指针不能为空
	pst->a = NULL;
	//top指向栈顶元素的下一个位置
	pst->top = 0;
	//top指向栈顶元素的位置
	//pst->top = -1;
	pst->capacity = 0;

}
void STDestroy(ST* pst)
{
	assert(pst);
	free(pst->a);
	pst->a = NULL;
	pst->capacity = pst->top = 0;
}
//入栈出栈
void STPush(ST* pst, STDataType x)
{
	assert(pst);
	//扩容
	if (pst->top == pst->capacity)
	{
		int newcapacity = pst->capacity == 0 ? 4 : pst->capacity * 2;
		STDataType* tmp = (pst->a, newcapacity * sizeof(STDataType));
		if (tmp == NULL)
		{
			perror("realloc fail");
			return;
		}
		pst->a = tmp;
		pst->capacity = newcapacity;
	}
	pst->a[pst->top] = x;
	pst->top++;
}
void STPop(ST* pst)
{
	assert(pst);
	assert(pst->top > 0);
	pst->top--;
}
//获取栈顶数据
STDataType STTop(ST* pst)
{
	assert(pst);
	assert(pst->top > 0);
	return pst->a[pst->top - 1];
}