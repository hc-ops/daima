#define _CRT_SECURE_NO_WARNINGS 1
#define _CRT_SECURE_NO_WARNINGS 1
#define _CRT_SECURE_NO_WARNINGS 1
#define _CRT_SECURE_NO_WARNINGS 1

#include<iostream>
#include<string>
#include<map>
using namespace std;
////底层结构
////class string
////{
////private:
////	char* _str;//指针指向堆上的空间
////	size_t size;//堆上的空间存了一些字符串
////	size_t capacity;
////};
//void test_string1()
//{
//	string s1;
//	string s2("hello world");
//	s2[0] = 'x';
//	cout << s1 << s2 << endl;
//	//下标＋[] 遍历
//	for (size_t i = 0; i < s2.size(); i++)
//	{
//		cout << s2[i] << " ";
//	}
//	cout << endl;
//	//迭代器遍历 迭代器是用来遍历和访问容器的
//	//string::iterator it = s2.begin();
//	auto it = s2.begin();
//	while (it != s2.end())
//	{
//		*it += 2;
//		cout << *it << " ";
//		++it;
//	}
//	cout << endl;
//	//自动赋值，自动迭代，自动判断结束
//   //底层就是迭代器
//	//所有容器都支持范围for因为所有容器都支持迭代器
//	for (auto& ch : s2)
//	{
//		ch -= 2;
//		cout << ch << " ";
//	}
//
//	cout << endl;
//	cout << s2 << endl;
//	map<string, string> dict;
//	//map<string,string>::iterator mit=dict.begin();
//	auto mit = dict.begin();
//}
//int func1()
//{
//	return 10;
//}
//
////auto不能做参数 给缺省值也不行
////void func2(auto a=0)
////{}
////auto可以做返回值,但要谨慎使用
//auto func3()
//{
//	return 3;
//}
//
//
//void test_string2()
//{
//	string s1;
//	string s2("hellod wordl");
//	string::iterator it = s2.begin();
//	while (it != s2.end())
//	{
//		cout << *it << " ";
//		++it;
//	}
//	cout << endl;
//	string::reverse_iterator rit = s2.rbegin();
//	while (rit != s2.rend())
//	{
//		cout << *rit << " ";
//		++rit;
//	}
//	cout << endl;
//	const string s3("hello world");
//	string::const_iterator cit = s3.begin();
//	while (cit != s3.end())
//	{
//		//*cit += 2;*cit是常量
//		cout << *cit << " ";
//		++cit;
//	}
//	cout << endl;
//}
//void test_string4()
//{
//	string s2("hello worldxxxxxxxxxxxxxx");
//	cout << s2.size() << endl;
//	cout << s2.capacity() << endl << endl;
//
//	s2.reserve(20);
//	cout << s2.size() << endl;
//	cout << s2.capacity() << endl << endl;
//
//	s2.reserve(28);
//	cout << s2.size() << endl;
//	cout << s2.capacity() << endl << endl;
//
//	s2.reserve(40);
//	cout << s2.size() << endl;
//	cout << s2.capacity() << endl << endl;
//
//	s2.clear();
//	cout << s2.size() << endl;
//	cout << s2.capacity() << endl << endl;
//}
//
//void test_string3()
//{
//	string s2("hello world");
//	cout << s2.length() << endl;//length不具有通用性，在树中不合理
//	cout << s2.size() << endl;//size具有通用性
//	cout << s2.max_size() << endl;//string最大能开多长
//
//	cout << s2.capacity() << endl;
//
//}
//void test_string5()
//{
//	string s("hello world");
//	s.push_back(' ');
//	s.push_back('x');
//	s.append("yyyyyy");
//
//	cout << s << endl;
//
//	s += ' ';
//	s += "3333333333";
//	cout << s << endl;
//
//	s.insert(0,  "hello bit ");
//	cout << s << endl;
//	s.insert(10,  "zzzz");
//	cout << s << endl;
//	s.insert(0, "p");
//	cout << s << endl;
//	char ch = 't';
//	s.insert(0, 1, ch);
//	s.insert(s.begin(), ch);
//	cout << s << endl;
//}
//
//void test_string6()
//{
//	string s("hello world");
//	s.erase(6,1);
//	cout << s << endl;
//	//头删
//	s.erase(0, 1);
//	cout << s << endl;
//
//	s.erase(s.begin());
//	cout << s << endl;
//	//尾删
//	s.erase(--s.end());
//	cout << s << endl;
//
//	s.erase(s.size() - 1, 1);
//	cout << s << endl;
//
//	string ss("hello world");
//	ss.erase(6);
//	cout << ss << endl;
//
//	/*string sss("hello world");
//	sss.replace(5, 1, "%%");
//	cout << sss << endl;*/
//
//	string sss("hello world hello bit");
//	size_t pos = sss.find(' ');
//	while (pos != string::npos)
//	{
//		sss.replace(pos, 1, "%%");
//		cout << sss << endl;
//
//		pos = sss.find(' ', pos + 2);
//
//	}
//	cout << sss << endl;
//
//	string tmp;
//	tmp.reserve(sss.size());
//	for (auto ch:sss)
//	{
//		if (ch == ' ')
//		{
//			tmp += "%%";
//		}
//		else
//		{
//			tmp += ch;
//		}
//	}
//	cout << tmp << endl;
//	sss.swap(tmp);
//	cout << sss << endl;
//
//	string file;
//	cin >> file;
//	FILE* fout = fopen(file.c_str(),"r");
//	char ch = fgetc(fout);
//	while (ch != EOF)
//	{
//		cout << ch;
//		ch = fgetc(fout);
//	}
//	fclose(fout);
//
//}
//void SplitFilename(const std::string& str)
//{
//	std::cout << "Splitting: " << str << '\n';
//	std::size_t found = str.find_last_of("/\\");
//
//	std::cout << " path: " << str.substr(0, found) << '\n';
//	std::cout << " file: " << str.substr(found + 1) << '\n';
//}
//void test_string7()
//{
//	//string s("test.cpp.zip");
//	//size_t pos = s.find(".");
//	//string suffix = s.substr(pos);
//	//cout << suffix << endl;
//
//	string s("test.cpp.zip");
//	size_t pos = s.rfind(".");
//	string suffix = s.substr(pos);
//	cout << suffix << endl;
//
//	std::string str("abcdefg");
//	cout << str << endl;
//	size_t found = str.find_first_of("abcd");
//	while (found != std::string::npos)
//	{
//		str[found] = '*';
//		found = str.find_first_of("abcd", found + 1);
//		std::cout << str << '\n';
//
//	}
//	std::string str1("/user/bin/man");
//	std::string str2("D:\\1-教学团队\\1-比特课件");
//	SplitFilename(str1);
//	SplitFilename(str2);
//
//}
//
//void test_string8()
//{
//	string s1("hello");
//	string s2 = s1 + "world";
//	cout << s2 << endl;
//	string s3 = "world" + s1;
//	cout << s3 << endl;
//}
//int main()
//{
//	test_string8();
//	return 0;
//}
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
///////////////////////////////////////
//模拟实现string
#include"string.h"
int main()
{
	bit::test_string1();

	return 0;
}