#define _CRT_SECURE_NO_WARNINGS 
#include<iostream>
using namespace std;
struct ListNode {
    int val;
    ListNode* next;
    ListNode(int x) : val(x), next(NULL) {}

};
class Solution {
public:
    ListNode* getIntersectionNode(ListNode* headA, ListNode* headB) {
        ListNode* p = headA;
        ListNode* q = headB;
        if (headA == nullptr || headB == nullptr)
        {
            return nullptr;
        }
        while (p != q)
        {
            p = (p != nullptr) ? p->next : headB;
            q = (q != nullptr) ? q->next : headA;
        }
        return p;

    }
};