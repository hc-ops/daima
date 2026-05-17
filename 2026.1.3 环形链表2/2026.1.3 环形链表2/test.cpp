#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
#include<list>
using namespace std;
  struct ListNode {
      int val;
      ListNode *next;
      ListNode(int x) : val(x), next(NULL) {}
 };

class Solution {
public:
    ListNode* detectCycle(ListNode* head) {
        ListNode* slow = head;
        ListNode* fast = head;
        while (fast && fast->next) {
            slow = slow->next;
            fast = fast->next->next;
            if (fast == slow) { // 相遇
                while (slow != head) { // 再走 a 步
                    slow = slow->next;
                    head = head->next;
                }
                return slow;
            }
        }
        return nullptr;
    }
};