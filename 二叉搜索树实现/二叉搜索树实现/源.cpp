#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
using namespace std;

class Node {
public:
    int key;
    Node* left;
    Node* right;

    Node(int k) : key(k), left(nullptr), right(nullptr) {}
};

class BinarySearchTree {
private:
    Node* root;

    // 递归插入（核心逻辑：小的往左，大的往右）
    Node* insertRecursive(Node* node, int key) {
        if (node == nullptr) return new Node(key);
        if (key < node->key)
            node->left = insertRecursive(node->left, key);
        else
            node->right = insertRecursive(node->right, key);
        return node;
    }

    // 递归搜索（像在超市找货架，每次排除一半）
    Node* searchRecursive(Node* node, int key) {
        if (node == nullptr || node->key == key) return node;
        return (key < node->key) ?
            searchRecursive(node->left, key) :
            searchRecursive(node->right, key);
    }

public:
    BinarySearchTree() : root(nullptr) {}

    void insert(int key) {
        root = insertRecursive(root, key);
    }

    Node* search(int key) {
        return searchRecursive(root, key);
    }
};