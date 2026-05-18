#define _CRT_SECURE_NO_WARNINGS 1
#define _CRT_SECURE_NO_WARNINGS 1
#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
#include<string>
#include<map>
using namespace std;
//底层结构
//class string
//{
//private:
//	char* _str;//指针指向堆上的空间
//	size_t size;//堆上的空间存了一些字符串
//	size_t capacity;
//};
void test_string1()
{
	string s1;
	string s2("hello world");
	s2[0] = 'x';
	cout << s1 << s2 << endl;
	//下标＋[] 遍历
	for (size_t i = 0; i < s2.size(); i++)
	{
		cout << s2[i] << " ";
	}
	cout << endl;
	//迭代器遍历 迭代器是用来遍历和访问容器的
	//string::iterator it = s2.begin();
	auto it = s2.begin();
	while (it != s2.end())
	{
		*it += 2;
		cout << *it << " ";
		++it;
	}
	cout << endl;
	//自动赋值，自动迭代，自动判断结束
   //底层就是迭代器
	//所有容器都支持范围for因为所有容器都支持迭代器
	for (auto& ch : s2)
	{
		ch -= 2;
		cout << ch << " ";
	}

	cout << endl;
	cout << s2 << endl;
	map<string, string> dict;
	//map<string,string>::iterator mit=dict.begin();
	auto mit = dict.begin();
}
int func1()
{
	return 10;
}

//auto不能做参数 给缺省值也不行
//void func2(auto a=0)
//{}
//auto可以做返回值,但要谨慎使用
auto func3()
{
	return 3;
}


void test_string2()
{
	string s1;
	string s2("hellod wordl");
	string::iterator it = s2.begin();
	while (it != s2.end())
	{
		cout << *it << " ";
		++it;
	}
	cout << endl;
	string::reverse_iterator rit = s2.rbegin();
	while (rit != s2.rend())
	{
		cout << *rit << " ";
		++rit;
	}
	cout << endl;
	const string s3("hello world");
	string::const_iterator cit = s3.begin();
	while (cit != s3.end())
	{
		//*cit += 2;*cit是常量
		cout << *cit << " ";
		++cit;
	}
	cout << endl;
}
void test_string4()
{
	string s2("hello worldxxxxxxxxxxxxxx");
	cout << s2.size() << endl;
	cout << s2.capacity() << endl << endl;

	s2.reserve(20);
	cout << s2.size() << endl;
	cout << s2.capacity() << endl << endl;

	s2.reserve(28);
	cout << s2.size() << endl;
	cout << s2.capacity() << endl << endl;

	s2.reserve(40);
	cout << s2.size() << endl;
	cout << s2.capacity() << endl << endl;

	s2.clear();
	cout << s2.size() << endl;
	cout << s2.capacity() << endl << endl;
}

void test_string3()
{
	string s2("hello world");
	cout << s2.length() << endl;//length不具有通用性，在树中不合理
	cout << s2.size() << endl;//size具有通用性
	cout << s2.max_size() << endl;//string最大能开多长

	cout << s2.capacity() << endl;

}
int main()
{
	test_string4();
	return 0;
}
//int main()
//{
//	//test_string1();
//	test_string2();
//	int a = 10;
//	auto* z = &a;//加*就必须是指针
//	auto b = a;
//	auto c = 'a';
//	auto d = func1();
//	//编译报错，类型包含auto的符号必须具有初始值设定项
//	//auto e;不知道类型
//	cout << typeid(b).name() << endl;
//	cout << typeid(c).name() << endl;//可以帮我们看类型
//	cout << typeid(d).name() << endl;
//	//auto不能定义数组
//	//auto array[]={4,5,6};
//	
//	//范围for适用于容器和数组
//	int array[] = { 1, 2, 3, 4, 5 };
//	for (auto& e : array)
//		e *= 2;
//	for (auto e : array)
//	{
//		cout << e << " " << endl;
//	}
//	
//	return 0;
//}