#define _CRT_SECURE_NO_WARNINGS 1
#include"heap.h"
void testheap01()
{
	int a[] = { 4,2,8,1,5,6,9,7 };
	HP hp;
	HPInit(&hp);
	for (size_t i = 0; i < sizeof(a) / sizeof(int); i++)
	{
		HPPush(&hp, a[i]);
	}
	while (HPEmpty(&hp))
	{
		printf("%d ", HPTop(&hp));
		HPPop(&hp);
	}
}
	//¶ÑÅÅÐòo(n*logn)
	//Ã°ÅÝo(n^2)
	void Heapsort(int *a,int n)
	{
		//½µÐò½¨Ð¡¶Ñ
//ÉýÐò½¨´ó¶Ñ
		for (int i = 0; i < n; i++)
		{
			AdjustUp(a, i);
		}
		int end = n - 1;
		while (end>0)
		{
			Swap(&a[0], &a[end]);
			AdjustDown(a, end, 0);
			--end;
		}
	}
	

void testheap2()
{


}
int main()
{
	testheap01();

	return 0;
}