#define _CRT_SECURE_NO_WARNINGS 1#define _CRT_SECURE_NO_WARNINGS 1
#define _CRT_SECURE_NO_WARNINGS 1
#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
#include<string>
#include<assert.h>
using namespace std;
//class A
//{
//public:
//	A(int a = 0)
//		:_a(a)
//	{
//		cout << "A():" << this << endl;
//	}
//	~A()
//	{
//		cout << "~A()" << this << endl;
//	}
//private:
//	int _a;
//};
//int main()
//{
//	A* p1 = new A(1);
//	delete p1;
//
//	A* p2 = (A*)operator new(sizeof(A));
//	new(p2)A(1);
//	p2->~A();
//	operator delete(p2);
//
//		return 0;
//}
//template<class T>
//void Swap(T& x, T& y)
//{
//	T tmp = x;
//	x = y;
//	y = tmp;
//}
//template<class T1,class T2>
//void func(const T1& x, const T2& y)
//{
//
//}
//int main()
//{
//	int i = 1,j=2;
//	double m = 1.1, n = 2.2;
//	Swap(i, j);
//	Swap(m, n);
//	swap(i, j);
//	swap(m, n);
//	func(i, m);
//	func(i, j);
//	return 0;
//}
//用函数模版生成对应的函数->模版的实例化
//template<class T>
//T add(const T& left, const T& right)
//{
//	return left + right;
//}
//template<class T1,class T2>
//T1 add(const T1& left, const T2& right)
//{
//	return left + right;
//}
//template<class T>
//T* func1(int n)
//{
//	return new T[n];
//}
//int main()
//{
//	int a1 = 10, a2 = 20;
//	double d1 = 10.1, d2 = 20.2;
//	add(a1, a2);
//	add(d1, d2);
//	//推导实例化
//	cout << add(a1, (int)d1)<<endl;
//	cout << add(double(a1), d1) << endl;
//	//显示实例化
//	cout << add<int>(a1, d1) << endl;
//	cout << add<double>(a1, d1) << endl;
//
//	cout << add(d2, d1) << endl;
//	
//	double* p1 = func1<double>(10);
//	return 0;
//}
//template<class T>
//T Add(const T& left, const T& right)
//{
//	return left + right;
//}
//int Add(const int& x, const int& y)
//{
//	return (x + y) * 10;
//}
//int main()
//{
//	int a1 = 10;
//	int a2 = 10;
//	Add(a1, a2);
//	cout << Add(a1, a2) << endl;
//
//	return 0;
//}
//template<typename t>
//class stack
//{
//public:
//	stack(int n = 4)
//		:_array(new t[n])
//		,_size(0)
//		,_capacity(n)
//	{}
//
//	~stack()
//	{
//		delete[] _array;
//		_array = nullptr;
//		_size = _capacity = 0;
//	}
//
//	void push(const t& x);
//
//private:
//	t* _array;
//	size_t _capacity;
//	size_t _size;
////};
//template<class T>
//class Stack
//{
//public:
//	Stack(int n = 4)
//		:_array(new T[n])
//		,_size(0)
//		,_capacity(n)
//	{}
//	~Stack()
//	{
//		delete[] _array;
//		_array = nullptr;
//		_size = _capacity = 0;
//	}
//	void Push(const T& x);
//	//{
//	//	if (_size = _capacity)
//	//	{
//	//		T* tmp = new T[_capacity * 2];//开新空间
//	//		memcpy(tmp, _array, sizeof(T) * _size);//拷贝数据
//	//		delete[] _array;//释放旧空间
//	//		_array = tmp;//指向新空间
//	//		_capacity *= 2;
//
//	//	}
//	//	_array[_size++] = x;
//	//}
//private:
//	T* _array;
//	size_t _capacity;
//	size_t _size;
//};
//template<class T>//声明和定义分离
//void Stack<T>::Push(const T& x)
//{
//	if (_size = _capacity)
//	{
//		T* tmp = new T[_capacity * 2];//开新空间
//		memcpy(tmp, _array, sizeof(T) * _size);//拷贝数据
//		delete[] _array;//释放旧空间
//		_array = tmp;//指向新空间
//		_capacity *= 2;
//
//	}
//	_array[_size++] = x;
//}
//int main()
//{
//	//类模版都是显示实例化
//	Stack<int> st1;//int
//	Stack<double> st2;//double
//	st1.Push(1);
//	st1.Push(2);
//	st1.Push(3);
//	st2.Push(1.1);
//	st2.Push(1.1);
//	st2.Push(1.1);
//
//	Stack<double>* pst = new Stack<double>;
//	delete pst;
//	return 0;
//}
//class string
//{
//public:
//	char& operator[](size_t i)//
//	{
//		assert(i < _size);
//		return str[i];
//	}
//private:
//	char* str;//数据指针：指向实际存储字符串数据的位置。
//	size_t _size;
//	size_t _capacity;
//};
int main()
{
	string s1;
	string s2("hello world");
	string s3(s2);
	cout << s1 << endl;
	cout << s2 << endl;
	cout << s3 << endl;
	/*cin >> s1;*/
	//cout << s1 << endl;
	string s4(s2, 6, 5);
	cout << s4 << endl;
	string s5(s2, 6);
	cout << s5 << endl;

	string s6("hello world", 5);
	cout << s6 << endl;

	string s7(10, 'x');
	cout << s7 << endl;
	//s6[10];
	s6[0] = 'x';
	cout << s6 << endl;

}