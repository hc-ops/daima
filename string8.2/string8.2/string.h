#pragma once
#include<iostream>
#include<assert.h>
#include<string>
using namespace std;

namespace bit
{
	
	class string
	{
	public:
		typedef char* iterator;
		typedef const char* const_iterator;
		iterator begin()
		{
			return _str;
		}
		iterator end()
		{
			return _str + _size;
		}
		const_iterator begin()const
		{
			return _str;
		}
		const_iterator end()const
		{
			return _str + _size;
		}
		//string()
		//	:_str(new char[1]{'\0'})
		//	,_size(0)
		//	,_capacity(0)
		//{}
		//短小频繁调用的函数，可以直接定义到类里面，默认是inline
		string(const char* str="")//斜杠0
			//	:_size(strlen(str))
			//	, _str(new char[_size + 1])//开空间加1是给\0开，多开一个
			//{
			//初始化列表出场顺序不是真正的顺序，而是按声明顺序来的
			//}
		{
			_size = strlen(str);
			//_capacity不包含\0
			_capacity = _size;
			_str = new char[_capacity + 1];
			strcpy(_str, str);
		}
		~string()
		{
			delete[] _str;
			_str = nullptr;
			_size = _capacity = 0;
		}
		const char* c_str()const
		{
			return _str;
		}
		size_t size()const
		{
			return _size;
		}
		size_t capacity()const
		{
			return _capacity;
		}
		char& operator[](size_t pos)
		{
			assert(pos < _size);
			return _str[pos];
		}
		const char& operator[](size_t pos)const
		{
			assert(pos < _size);
			return _str[pos];
		}
	private:
		char* _str;
		size_t _size;
		size_t _capacity;
	};
	//静态只在当前文件可见，不进符号表
	void test_string1();

}