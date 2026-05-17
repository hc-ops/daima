#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
#include<vector>
using namespace std;
class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        // 初始化三个指针：p1指向nums1最后一个有效元素，p2指向nums2最后一个元素，p指向nums1末尾位置
        int p1 = m - 1;
        int p2 = n - 1;
        int p = m + n - 1;
        while (p2 >= 0) {// 只要nums2还有未合并的元素（p2从n-1开始，直到-1）
            if (p1 >= 0 && nums1[p1] > nums2[p2]) // 检查p1是否有效（避免越界）且nums1当前元素更大
            {
                nums1[p--] = nums1[p1--];// 将nums1[p1]放入nums1[p]，p1和p都向前移动
            }
            else// 情况1：p1已越界（p1<0）或nums1[p1] <= nums2[p2]
            {
                nums1[p--] = nums2[p2--]; // 将nums2[p2]放入nums1[p]，p2和p都向前移动
            }
        }

    }
};