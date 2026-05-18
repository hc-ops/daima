#define _CRT_SECURE_NO_WARNINGS 1
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    vector<vector<int>> levelOrder(TreeNode* root) {
        vector<vector<int>>vv;
        queue<TreeNode*>q;
        int levelsize = 0;//当前层数据个数，控制一层一层出
        if (root)
        {
            q.push(root);
            levelsize = 1;
        }
        while (!q.empty())
        {
            //当前层数居个数，控制一层一层出
            vector<int>v;
            while (levelsize--)
            {
                TreeNode* front = q.front();
                q.pop();
                v.push_back(front->val);
                if (front->left)
                {
                    q.push(front->left);
                }
                if (front->right)
                {
                    q.push(front->right);
                }

            }
            vv.push_back(v);
            //当前层出完，下一层都进队列了，队列的size就是下一层的数据
            levelsize = q.size();
        }
        return vv;
    }
};