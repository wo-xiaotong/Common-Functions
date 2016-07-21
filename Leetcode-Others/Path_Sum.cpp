///*
//Given a binary tree and a sum, determine if the tree has a root - to - leaf path such that adding up all the values along the path equals the given sum.
//For example :
//Given the below binary tree and sum = 22,
//5
/// \
//4   8
/// / \
//11  13  4
/// \      \
//7    2      1
//*/
//
///**
//* Definition for a binary tree node.
//* struct TreeNode {
//*     int val;
//*     TreeNode *left;
//*     TreeNode *right;
//*     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
//* };
//*/
//class Solution {
//public:
//	bool hasPathSum(TreeNode* root, int sum) {
//		if (root == NULL)return false;
//		sum = sum - root->val;
//		if (sum == 0 && root->left == NULL&&root->right == NULL)
//			return true;
//		if (root->left != NULL)
//		if (hasPathSum(root->left, sum))
//			return true;
//		if (root->right != NULL)
//		if (hasPathSum(root->right, sum))
//			return true;
//
//		return false;
//	}
//};