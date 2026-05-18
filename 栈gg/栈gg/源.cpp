#define _CRT_SECURE_NO_WARNINGS 1
class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int k = 1;//初始化 k=1，表示保留的元素要填入的下标。
        for (int i = 1; i < nums.size(); i++)
        {
            if (nums[i] != nums[i - 1])
            {
                nums[k] = nums[i];
                k++;
            }
        }
        return k;

    }
};