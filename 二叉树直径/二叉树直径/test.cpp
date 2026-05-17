#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
using namespace std;
struct TreeNode {
    int val;
    TreeNode* left;
    TreeNode* right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode* left, TreeNode* right) : val(x), left(left), right(right) {}
   
};


class Solution {
private:
    int depth(TreeNode* node, int& diameter)
    {
        if (node == nullptr)
        {
            return 0;
        }
        int leftdepth = depth(node->left, diameter);
        int rightdepth = depth(node->right, diameter);
        diameter = max(diameter, leftdepth + rightdepth);
        return max(leftdepth, rightdepth) + 1;
    }
public:
    int diameterOfBinaryTree(TreeNode* root) {
        int diameter = 0;
        depth(root, diameter);
        return diameter;
    }
};