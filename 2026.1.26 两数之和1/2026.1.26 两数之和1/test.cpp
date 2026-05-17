#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
#include<unordered_map>
#include<vector>
using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int>s;
        for (int i = 0; i < nums.size(); i++)
        {
            auto iter = s.find(target - nums[i]);
            if (iter != s.end())
            {
                return { iter->second,i };//访问value it->first访问key
            }
            s.insert({ nums[i],i });//使用初始化列表插入键值对

        }
        //统一初始化列表语法。它表示返回一个根据返回类型自动初始化的空对象。
        return {};
    }
};