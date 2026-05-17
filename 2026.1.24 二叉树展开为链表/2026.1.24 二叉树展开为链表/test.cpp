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
    TreeNode* prev = nullptr;
public:
    void flatten(TreeNode* root) {
        if (root == nullptr)
        {
            return;
        }
        if (prev != nullptr)
        {
            prev->right = root;
            prev->left = nullptr;

        }
        prev = root;
        TreeNode* rightBackup = root->right;
        flatten(root->left);
        flatten(rightBackup);

    }
};