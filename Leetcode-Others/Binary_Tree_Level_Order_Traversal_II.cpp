//Given a binary tree, return the bottom - up level order traversal of its nodes' values. (ie, from left to right, level by level from leaf to root).
//
//For example :
//Given binary tree{ 3, 9, 20, #, #, 15, 7 },
//3
/// \
//9  20
/// \
//15   7
//return its bottom - up level order traversal as :
//[
//	[15, 7],
//	[9, 20],
//	[3]
//]

/**
* Definition for a binary tree node.
* struct TreeNode {
*     int val;
*     TreeNode *left;
*     TreeNode *right;
*     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
* };
*/
class Solution {
public:
	vector<vector<int>> levelOrderBottom(TreeNode* root) {
		vector<vector<int>>val;
		int fatherCount = 0, sonCount;
		queue<TreeNode*>board;
		TreeNode *p;

		if (root == NULL)return val;
		board.push(root);
		++fatherCount;

		while (!board.empty()) {
			sonCount = 0;
			vector<int>tmp;
			while (fatherCount--) {
				p = board.front();
				if (p->left != NULL) {
					board.push(p->left);
					++sonCount;
				}
				if (p->right != NULL) {
					board.push(p->right);
					++sonCount;
				}
				tmp.push_back(p->val);
				board.pop();
			}
			val.push_back(tmp);
			fatherCount = sonCount;
		}
		reverse(val.begin(), val.end());

		return val;
	}
};