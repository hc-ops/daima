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
    bool isPalindrome(ListNode* head) {
        if (!head || !head->next)
        {
            return true;
        }
        ListNode* slow = head;
        ListNode* fast = head;
        while (fast && fast->next)
        {
            slow = slow->next;
            fast = fast->next->next;
        }
        ListNode* prev = nullptr;
        ListNode* curr = slow;
        while (curr)
        {
            ListNode* next = curr->next;
            curr->next = prev;
            prev = curr;
            curr = next;
        }
        ListNode* left = head;
        ListNode* right = prev;
        while (right)
        {
            if (right->val != left->val)
            {
                return false;
            }
            right = right->next;
            left = left->next;
        }
        return true;


    }
};