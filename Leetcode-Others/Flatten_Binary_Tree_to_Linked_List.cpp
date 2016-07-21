////Given a binary tree, flatten it to a linked list in - place.
////
////For example,
////Given
////
////1
///// \
////2   5
///// \   \
////3   4   6
////The flattened tree should look like :
////1
////\
////2
////\
////3
////\
////4
////\
////5
////\
////6
//
//struct TreeNode {
//	int val;
//	TreeNode *left;
//	TreeNode *right;
//	TreeNode(int x) : val(x), left(NULL), right(NULL) {}
//
//};
//
//class Solution {
//public:
//	void flatten(TreeNode* root) {
//		if (root == NULL)return;
//		if (parent != NULL)parent->right = root;
//		parent = root;
//
//		TreeNode* left = root->left;
//		TreeNode* right = root->right;
//		root->left = NULL;
//		if (left != NULL)flatten(left);
//		if (right != NULL)flatten(right);
//	}
//
//private:
//	TreeNode* parent = NULL;
//};