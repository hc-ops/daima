#define _CRT_SECURE_NO_WARNINGS 1
#define _CRT_SECURE_NO_WARNINGS 1
#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
#include<list>
using namespace std;
void test_list1()
{
	list<int> It;
	It.push_back(1);
	It.push_back(2);
	It.push_back(3);
	It.push_back(4);
	list<int>::iterator it = It.begin();
	while (it != It.end())
	{
		cout << *it << " ";
		++it;
	}
	cout << endl;
	for (auto e : It)
	{
		cout << e << " ";
	}
	cout << endl;
}
struct A
{
public:
	A(int a1 = 1, int a2 = 1)
		:_a1(a1)
		, _a2(a2)
	{
		cout << "A(int a1 = 1, int a2 = 1)" << endl;
	}
	int _a1;
	int _a2;
};
void test_list2()
{
	list<A> It;
	A aa1(1, 1);
	It.push_back(aa1);
	It.push_back(A(2, 2));

	It.emplace_back(aa1);
	It.emplace_back(A(2, 2));
	cout << endl;
	// 支持直接传构造A对象的参数emplace_back
	It.emplace_back(3, 3);
}
void test_list3()
{
	list<int> It;
	It.push_back(1);
	It.push_back(2);
	It.push_back(3);
	It.push_back(4);
	It.push_back(5);
	It.push_back(6);
	for (auto e : It)
	{
		cout << e << " ";
	}
	cout << endl;
	auto it = It.begin();
	int k = 3;
	while (k--)
	{
		++it;
	}
	It.insert(it, 30);
	for (auto e : It)
	{
		cout << e << " ";
	}
	cout << endl;

	/*int x = 0;
	cin >> x;
	it = find(It.begin(), It.end(), x);
	if (it != It.end())
	{
		It.erase(it);
	}
	for (auto e : It)
	{
		cout << e << " ";
	}
	cout << endl;*/
	It.reverse();
	for (auto e : It)
	{
		cout << e << " ";
	}
	cout << endl;
	//默认升序
	It.sort();
	for (auto e : It)
	{
		cout << e << " ";
	}
}

int main()
{
	test_list3();
	return 0;
}