#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
#include <queue>
using namespace std;
//定义树节点
struct TreeNode
{
	char val;
	TreeNode* left;
	TreeNode* right;
	TreeNode():val(0),left(nullptr),right(nullptr){}
	TreeNode(char x):val(x),left(nullptr),right(nullptr){}
};
//判断是否为完全二叉树
bool isCompleteTree(TreeNode* root)
{
	queue<TreeNode*>q;
	if (root)
	{
		q.push(root);
	}
	while (!q.empty())
	{
		TreeNode* front = q.front();
		q.pop();
		// 第一次遇到空节点，跳出第一轮 BFS
		if (front == nullptr)
		{
			break;
		}
		// 无论左右子是否为空，都入队
		q.push(front->left);
		q.push(front->right);
	}
	// 第二轮：检查队列中是否还有非空节点
	while (!q.empty())
	{
		TreeNode* front = q.front();
		q.pop();
		if (front!=nullptr)
		{
			return false;
		}
	}
	return true;

	
}
int main()
{
	// 构建测试树：
  //       A
  //      / \
    //     B   C
	//    / \
    //   D   E
	// 符合完全二叉树

	TreeNode* root = new TreeNode('A');
	root->left = new TreeNode('B');
	root->right = new TreeNode('C');
	root->left->left = new TreeNode('D');
	root->left->right = new TreeNode('E');

	if (isCompleteTree(root)) {
		cout << "是完全二叉树" << endl;
	}
	else {
		cout << "不是完全二叉树" << endl;
	}

	// 构建非完全二叉树：
	//       A
	//      / \
    //     B   C
	//    /     \
    //   D       E

	TreeNode* root2 = new TreeNode('A');
	root2->left = new TreeNode('B');
	root2->right = new TreeNode('C');
	root2->left->left = new TreeNode('D');
	root2->right->right = new TreeNode('E');  // 注意：右子的右子存在

	if (isCompleteTree(root2)) {
		cout << "是完全二叉树" << endl;
	}
	else {
		cout << "不是完全二叉树" << endl;
	}

	return 0;
}