#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
#include<vector>
#include<list>
#include<deque>
using namespace std;

class Person
{
public:
	// 进入校园/图书馆/实验室刷二维码等身份认证
	void identity()
	{
		cout << "void identity()" << _name << endl;
		cout << _age << endl;
	}
protected:
	string _name = "张三"; // 姓名
	string _address; // 地址
	string _tel; // 电话
private:
	int _age = 18; // 年龄
};

class Student : public Person
{
public:
	// 学习
	void study()
	{
		identity();
		// ...
		//cout << _age << endl;
		cout << _tel << endl;
	}
protected:
	int _stuid; // 学号
};

class Teacher : public Person
{
public:
	// 授课
	void teaching()
	{
		//...
	}
protected:
	string title; // 职称
};

int main()
{
	Student s;
	Teacher t;

	s.identity();
	t.identity();
}