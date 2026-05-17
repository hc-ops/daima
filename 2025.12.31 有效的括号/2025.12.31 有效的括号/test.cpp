#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
#include<stack>
#include<string>
#include <unordered_map>
#include<map>
using namespace std;
class Solution {
public:
    unordered_map<char, char>mp = { {')', '('}, {']', '['}, {'}', '{'} };
    bool isValid(string s) {
        if (s.length() % 2)
        {
            return false;
        }
        stack<char>st;
        for (auto c : s)
        {
            if (mp.find(c) != mp.end())
            {
                st.push(c);
            }
            else
            {
                if (st.empty() || st.top() != mp[c]) {
                    return false;
                }
                st.pop();
            }


        }
        return st.empty();
    }
};