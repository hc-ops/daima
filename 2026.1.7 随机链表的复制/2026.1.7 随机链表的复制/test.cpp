#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
#include<list>
using namespace std;


class Node {
public:
    int val;
    Node* next;
    Node* random;

    Node(int _val) {
        val = _val;
        next = NULL;
        random = NULL;
    }
};


class Solution {
public:
    Node* copyRandomList(Node* head) {
        if (head == nullptr)
        {
            return nullptr;
        }
        // 复制每个节点，把新节点直接插到原节点的后面
        for (Node* cur = head; cur; cur = cur->next->next)
        {
            cur->next = new Node(cur->val, cur->next, nullptr);
        }
        for (Node* cur = head; cur; cur = cur->next->next)
        {
            if (cur->random)
            {
                //要复制的random是cur->random的下一个节点
                cur->next->random = cur->random->next;
            }
        }
        //把交错链表分离为两个链表
        Node* new_head = head->next;
        Node* cur = head;
        for (; cur->next->next; cur = cur->next)//不写第一个是因为cur已经被正确初始化Node*cur->head;
        {
            Node* copy = cur->next;
            cur->next = copy->next;//恢复原节点next
            copy->next = copy->next->next;//设置新节点next
        }
        cur->next = nullptr;
        return new_head;
    }
};