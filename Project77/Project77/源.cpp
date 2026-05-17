#define _CRT_SECURE_NO_WARNINGS 1
class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int i0 = 0;
        for (int& x : nums)
        {
            if (x)
            {
                swap(nums[i0], x);
                i0++;
            }
        }
    }
};