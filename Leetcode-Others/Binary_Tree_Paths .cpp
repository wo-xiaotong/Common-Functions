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
//	vector<string> binaryTreePaths(TreeNode* root) {
//		vector<string>res;
//		depFirstSearch(root, res, "");
//		return res;
//	}
//
//	void depFirstSearch(TreeNode *root, vector<string>& res, string temp){
//		if (root == NULL)return;
//
//		if (temp.empty())
//			temp = temp + to_string(root->val);
//		else
//			temp = temp + "->" + to_string(root->val);
//
//		if (root->left == NULL && root->right == NULL){
//			res.push_back(temp);
//			return;
//		}
//		depFirstSearch(root->left, res, temp);
//		depFirstSearch(root->right, res, temp);
//	}
//};