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
//	vector<int> rightSideView(TreeNode* root) {
//		vector<int>res;
//		queue<TreeNode*>rights;
//		int levelCount = 0, nextCount = 0;
//
//		if (root != NULL){
//			rights.push(root);
//			++levelCount;
//		}
//
//		while (levelCount != 0){
//			TreeNode* tmp = rights.front();
//			rights.pop();
//
//			if (tmp->left != NULL){
//				rights.push(tmp->left);
//				++nextCount;
//			}
//			if (tmp->right != NULL){
//				rights.push(tmp->right);
//				++nextCount;
//			}
//
//			--levelCount;
//			if (levelCount == 0){
//				res.push_back(tmp->val);
//				levelCount = nextCount;
//				nextCount = 0;
//			}
//		}
//
//
//
//		return res;
//	}
//};