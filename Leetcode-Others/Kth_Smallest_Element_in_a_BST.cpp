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
//	int kthSmallest(TreeNode* root, int k) {
//		return kthSmallest1(root, k);
//	}
//
//	int kthSmallest1(TreeNode* root, int &k) {
//		if (root == NULL)return 0;
//		int left = kthSmallest1(root->left, k);
//		if (--k == 0)return root->val;
//		int right = kthSmallest1(root->right, k);
//		return left + right;
//	}
//
//};