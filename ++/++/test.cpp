#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
using namespace std;
class A
{
public:
	A(int a1=0 , int a2 = 0)
		:_a1(a1)
		, _a2(a2)
	{
		cout << "A(int a1 = 0, int a2 = 0)" << endl;
	}

	A(const A& aa)
		:_a1(aa._a1)
	{
		cout << "A(const A& aa)" << endl;
	}

	A& operator=(const A& aa)
	{
		cout << "A& operator=(const A& aa)" << endl;
		if (this != &aa)
		{
			_a1 = aa._a1;
		}
		return *this;
	}

	~A()
	{
		//delete _ptr;
		cout << "~A()" << endl;
	}

	void Print()
	{
		cout << "A::Print->" << _a1 << endl;
	}

	A& operator++()
	{
		_a1 += 100;

		return *this;
	}
private:
	int _a1 = 1;
	int _a2 = 1;
};
//int main()
//{
//	int k = 0;
//	printf("%d\n", k);
//	k++;
//	printf("%d\n", ++k);
//	printf("%d\n", k);
//
//}

//int main()
//{
//	//int* p11 = (int*)malloc(sizeof(int) * 4);
//	int* p1 = new int;//申请一个int对象。不需要计算int多大，也不需要强转
//	int* p2 = new int[10];//申请十个int对象 
//	
//	delete p1;//不用的就delete
//	delete[]p2;
//	//申请对象+初始化
//	int* p3 = new int(0);
//	int* p4 = new int[10] {0};
//	int* p5 = new int[10] {1, 2, 3, 4, 5};//前五个初始化为12345，后面的默认是0
//
//	delete p3;
//	delete[]p4;
//	delete[]p5;
////	return 0;
//}
//struct ListNode
//{
//	int val;
//	ListNode* next;
//	ListNode(int x)
//		:val(x)
//		,next(nullptr)
//	{}
//};
//int main()
//{
//	/*ListNode* p1 = new ListNode(1);
//	ListNode* p2 = new ListNode(1);
//	ListNode* p3 = new ListNode(1);
//	ListNode* p4 = new ListNode(1);
//	p1->next = p2;
//	p2->next = p3;
//	p3->next = p4;*/
//	A* p1 = new A(1);
//	A* p2 = new A(2, 2);
//	A aa1(1, 1);
//	A aa2(2, 2);
//	A aa3(3, 3);
//	A* p3 = new A[3]{aa1,aa2,aa3};
//	A* p4 = new A[3]{ A(1,1),A(2,2),A(3,3) };//匿名对象
//	//A aa1 = { 3,3};//隐式类型转换
//	A* p5 = new A[3]{ {1,1} ,{2,2} ,{3,3} };
//	//new的时候会调用构造函数
//	//delete的时候会调用析构函数
//	return 0;
//}
//void func()
//{
//	//throw try/catch
//	int n = 1;
//	while (1)
//	{
//		void* p1 = new char[1024 * 1024];
//		cout << p1 << "->" << n << endl;
//		++n;
//	}
//
//}
//int main()
//{
//	try
//	{
//		func();
//	}
//	catch(const exception&e)
//	{
//		cout << e.what() << endl;
//	}
//	return 0;
//} 
int main()
{
	A* p1 = new A(1);
	delete p1;
	A* p2 = new A[5];
	delete[]p2;
	return 0;
}