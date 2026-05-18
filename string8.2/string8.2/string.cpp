#define _CRT_SECURE_NO_WARNINGS 1
#include"string.h"
namespace bit
{
	void test_string1()
	{
		string s1;
		string s2("hello world");
		cout << s1.c_str() << endl;
		cout << s2.c_str() << endl;
		for (size_t i = 0; i < s2.size(); i++)
		{
			s2[i] += 2;
		}
		cout << s2.c_str() << endl;
		/*for (auto e : s2)
		{

		}*/
		for (auto e : s2)
		{
			cout << e << " ";
		}
		cout << endl;
		string::iterator it = s2.begin();
		while (it != s2.end())
		{
			cout << *it << " ";
			++it;
		}
		cout << endl;
	}
}