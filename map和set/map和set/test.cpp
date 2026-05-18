#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
#include<map>
#include<set>
using namespace std;

int main()
{
	//map<string, string>dict;
	map<string, string>dict = { {"left","左边"},{"right","右边"},{"insert","插入"},{"string","字符串"} };
	pair<string, string>kv1("first", "第一个");
	//map<string, string> dict = { kv1, pair<string, string>("second", "第二个") };
	dict.insert(kv1);
	dict.insert(pair<string, string>("second", "第二个"));
	dict.insert(make_pair("sort", "排序"));
}