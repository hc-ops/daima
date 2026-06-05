#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
using namespace std;
class A
{
public:
	A(int a = 0)
		:_a(a)
	{
		cout << "A():" <<this<< endl;
	}
	~A()
	{
		cout << "~A()"<<this << endl;
	}
private:
	int _a;
};
int main()
{
	A* p1 = new A(1);
	delete p1;

	A* p2 = (A*)operator new(sizeof(A));
	new(p2)A(1);
	p2->~A();
	operator delete(p2)
	
	return 0;
}