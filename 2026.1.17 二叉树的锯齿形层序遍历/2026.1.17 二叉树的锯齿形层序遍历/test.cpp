#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
#include<vector>
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
public:
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        vector<vector<int>>ans;
        vector<TreeNode*>cur = { root };
        while (root == nullptr)
        {
            return{};
        }

        while (cur.size())
        {
            vector<TreeNode*>nxt;
            vector<int>vals;
            for (auto node : cur)
            {
                vals.push_back(node->val);
                if (node->left)
                {
                    nxt.push_back(node->left);

                }
                if (node->right)
                {
                    nxt.push_back(node->right);
                }

            }
            cur = nxt;
            if (ans.size() % 2)
            {
                reverse(vals.begin(), vals.end());
            }
            ans.push_back(move(vals));
        }
        return ans;
    }
};