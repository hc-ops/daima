#pragma once
#include<stdio.h>
#include<assert.h>
#include<stdlib.h>
#include<stdbool.h>
typedef int HPDataType;
//HPDataType* a;“我是一个指针，指向一块内存，这块内存里存放的是 HPDataType 类型的数据。”
typedef struct Heap
{
	HPDataType* a;
	int size;
	int capacity;
}HP;
void Swap(HPDataType* p1, HPDataType* p2);
void AdjustUp(HPDataType* a, int child);
void AdjustDown(HPDataType* a, int n, int parent);//从parent位置向下调整，一共调整n个数
void HPInit(HP* php);
void HPdestroy(HP* php);
void HPPush(HP* php, HPDataType x);
void HPPop(HP* php);
HPDataType HPTop(HP* ph);
bool HPEmpty(HP* php);