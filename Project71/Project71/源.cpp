#define _CRT_SECURE_NO_WARNINGS 1
#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
using namespace std;

class person
{
public:
	virtual void BuyTicket()
	{
		cout << "干b思" << endl;
	}

};
class student :public person {
	virtual void BuyTicket()
	{
		cout << "打狗思" << endl;
	}
};
void Func(person& ptr)
{
	ptr.BuyTicket();
}

int main()
{
	person ps;
	student st;
	//Func(ps);
	Func(st);
	return 0;
}
