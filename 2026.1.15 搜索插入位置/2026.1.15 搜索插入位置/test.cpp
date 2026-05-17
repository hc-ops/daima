#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
#include<vector>
using namespace  std;
class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        return ranges::lower_bound(nums, target) - nums.begin();
    }
};