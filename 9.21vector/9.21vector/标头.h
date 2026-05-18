#pragma once

#include<assert.h>
namespace bit
{
	template <class T>
	class vector
	{
	public:
		typedef T* iterator;
		typedef const T* const_iterator;
		iterator begin()
		{
			return _start;
		}
		iterator end()
		{
			return _finish;
		}
		const_iteritor begin()const
		{
			return _start;
		}
		const_iterator end()const
		{
			return _finish;
		}
		void reserve(size_t n)
		{
			if (n > capacity)
			{
				size_t old_size = size();
				T* tmp = new T[n];
				memcpy(tmp, _start, size() * sizeof(T));
				delete[]_start;
				_start = tmp;
				_finish = tmp + old_size;
				_end_of_storage = tmp + n;
			}
		}
		size_t size()const
		{
			return _finish - _start;
		}
		size_t capactiy()const
		{
			return _end_of_storage - _start;
		}
		bool empty()
		{
			return _start == _finish;
		}
		void push_back()
		{
			//扩容
			if (_finsih == _end_of_storage)
			{
				reserve(capacity() == 0 ? 4 : capactiy() * 2);
			}
			*_finish = x;
			++_finish;
		}
		void pop_back()
		{
			assert(!empty());
			--_finish;
		}
		iterator insert(iterator pos, const T& x)
		{
			//扩容
			if (_finish == _end_of_storage)
			{
				size_t len = pos - _start;
				reserve(capacity() == 0 ? 4 : capactiy() * 2);
				pos = _start + len;


			}
			iterator end = _finish - 1;
			while (end > = pos)
			{
				*(end + 1) = *end;
				--end;
			}
			*pos = x;
			++_finish;
			return pos;
		}
		//这段代码是 std::vector（或类似动态数组容器）中 operator[] 运算符的典型实现。
		// 它的作用是通过索引访问容器中指定位置的元素。
		T& operator[](size_t i)
		{
			assert(i < size());
			return _start[i];
		}
	private:
		iterator _start = nullptr;
		iterator _finish = nullptr;
		iterator _end_of_storage = nullptr;

	};
	template<class T>
	void print_vector(const vector<T>& v)
	{
		// 规定，没有实例化的类模板里面取东西，编译器不能区分这里const_iterator
		// 是类型还是静态成员变量
		//typename 关键字：在这里是必需的。它告诉编译器：“vector<T>::const_iterator 
		// 是一个类型名，请把它当作类型来处理”。
		//typename vector<T>::const_iterator it = v.begin();
		auto it = v.begin();
		while (it != v.end())
		{
			//含义：解引用迭代器 it
			//*it：获取 it 当前指向的元素的值。

			cout << *it << endl;
			++it;
		}
		cout << endl;
		for (auto e : v)
		{
			//auto e：声明一个变量 e，其类型由编译器从 v 的元素类型自动推导。
			//e 是元素的副本（不是引用）。
				//v：要遍历的容器。
			cout << e << " ";
		}
		cout << endl;
	}


}
