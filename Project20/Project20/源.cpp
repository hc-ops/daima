#define _CRT_SECURE_NO_WARNINGS 1#define _CRT_SECURE_NO_WARNINGS 1
#define _CRT_SECURE_NO_WARNINGS 1
#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
using namespace std;
class A
{
public:
	A(int a1 = 0, int a2 = 0)
		:_a1(a1)
		, _a2(a2)
	{
		cout << "A(int a=0,int a2=0)" << endl;
	}
	A(const A& aa)
		:_a1(aa._a1)
	{
		cout << "A(const A&aa)" << endl;
	}
	A& operator=(const A& aa)
	{
		cout << "A& operator=(const A&aa)" << endl;
		if (this != &aa)
		{
			_a1 = aa._a1;
		}
		return *this;
	}
	~A()
	{
		cout << "~A()" << endl;
	}
	void print()
	{
		cout << "A::print->" << _a1 << endl;
	}
	A& operator++()
	{
		_a1 += 100;
	}
	void Print()
	{
		cout << "A::Printf->" << _a1 << endl;
	}
private:
	int _a1;
	int _a2;
};
void f1(const A& aa)
{

}
//int main()
//{
//	//A aa = 1;
//	A aa1(1);
//	f1(aa1);
//	cout << endl;
//	//优化 匿名对象
//	f1(A(1));
//	cout << endl;
//	//优化 1给给A，A有单参数的构造函数，单参数构造函数走的
//	//是隐式类型转换，用1构造了一个临时对象，再用临时对象拷贝构造
//
//	f1(1);
//	cout << endl;
//	return 0;
//}
//A f2()
//{
//	A aa(1);
//	return aa;
//
//}
//int main()
//{
//	f2().Print();
//	cout << endl;
//	int a = 10;
//	a = 20;
//	return 0;
//}
int main()
{
	const int a = 10;

	cout << a << endl;
	return 0;
}
