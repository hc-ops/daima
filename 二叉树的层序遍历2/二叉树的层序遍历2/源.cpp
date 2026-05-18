#define _CRT_SECURE_NO_WARNINGS 1
class Solution {
public:
    vector<vector<int>> levelOrder(TreeNode* root) {
        vector<vector<int>> vv;
        queue<TreeNode*>q;
        int levelsize = 0;
        if (root)
        {
            q.push(root);
            levelsize = 1;
        }
        while (!q.empty())
        {
            vector<int> v;
            while (levelsize--)
            {
                TreeNode* node = q.front();
                q.pop();
                v.push_back(node->val);
                if (node->left)
                {
                    q.push(node->left);
                }
                if (node->right)
                {
                    q.push(node->right);
                }

            }
            vv.push_back(v);
            levelsize = q.size();
        }
        return vv;
    }
};