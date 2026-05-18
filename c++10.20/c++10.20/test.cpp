#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
#include<vector>
#include<list>
#include<stack>
#include<queue>
#include<algorithm>
using namespace std;
// 仿函数：本质是一个类，这个类重载operator(),他的对象可以像函数一样使用
template<class T>
class Less
{
public:
	bool operator()(const T& x, const T& y)
	{
		return x < y;
	}
};
template<class T>
class Greater
{
public:
	bool operator()(const T& x, const T& y)
	{
		return x > y;
	}

};
//<升序
//>降序
template<class Compare>
//int* a - 待排序数组
//int n - 数组长度
//Compare com - 比较函数
void Bubblesort(int* a, int n, Compare com)
{
	for (int j = 0; j < n; j++)
	{
		//单趟
		//在这个冒泡排序代码中，flag 变量用于优化算法性能,
		// 它是一个提前结束的标记。
		//当任何一对元素需要交换时，将 flag 设为 1

		//如果整个内层循环都没有发生交换，flag 保持为 0
		int flag = 0;
		for (int i = 1; i < n - j; i++)
		{
			//if(a[i]<[i-1])
			if (com(a[i], a[i - 1]))
			{
				swap(a[i - 1], a[i]);
				flag = 1;
			}
		}
		if (flag == 0)
		{
			break;
		}
	}
}
int main()
{
	Less<int>Lessfunc;
	Greater<int>Greaterfunc;
	cout << Lessfunc(1, 2) << endl;
	cout << Lessfunc.operator()(1, 2) << endl;
	int a[] = { 9,1,2,5,7,4,6,3 };
	Bubblesort(a, 8, Lessfunc);
	Bubblesort(a, 8, Greaterfunc);

	Bubblesort(a, 8, Less<int>());
	Bubblesort(a, 8, Greater<int>());
	cout << "排序后:";
	//for (int i = 0; i < 8; i++)
	//{
	//	cout << a[i] << " ";

	//}
	//cout << endl;
	for (auto e : a)
	{
		cout << e << " ";
	}
	cout << endl;
	return 0;
}