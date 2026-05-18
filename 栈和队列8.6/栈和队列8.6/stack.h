#pragma once
#include<stdio.h>
#include<stdbool.h>
#include<stdlib.h>
#include<assert.h>
#include<stdbool.h>
typedef int STDataType;
typedef struct Stack
{	
	STDataType* a;
	//*a：这是一个指向 STDataType 类型的指针。在栈的实现中，它通常用来动态分配数组，这个数组用于存储栈中的元素。例如
	// 如果 STDataType 是 int，那么 a 就是一个指向整数数组的指针。
	int top;
	int capacity;

}ST;

void STInit(ST* pst);
void STDestroy(ST* pst);
//入栈出栈
void STPush(ST*pst,STDataType x);
void STPop(ST* pst);
STDataType STTop(ST* pst);//获取栈顶数据
bool STEmpty(ST* pst);//判空
int STSize(ST* pst);//获取栈里面数据个数

