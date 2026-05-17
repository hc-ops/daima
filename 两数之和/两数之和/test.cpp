#define _CRT_SECURE_NO_WARNINGS 1

#include<iostream>
#include<list>
using namespace std;
  struct ListNode {
      int val;
      ListNode *next;
      ListNode() : val(0), next(nullptr) {}
      ListNode(int x) : val(x), next(nullptr) {}
      ListNode(int x, ListNode *next) : val(x), next(next) {}
  };
 
class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2, int carry = 0) {
        if (l1 == nullptr && l2 == nullptr && carry == 0) { // 递归边界
            return nullptr;
        }

        int s = carry;
        if (l1) {
            s += l1->val; // 累加进位与节点值
            l1 = l1->next;
        }
        if (l2) {
            s += l2->val;
            l2 = l2->next;
        }

        // s 除以 10 的余数为当前节点值，商为进位
        return new ListNode(s % 10, addTwoNumbers(l1, l2, s / 10));


    }
};