//Given an array where elements are sorted in ascending order, convert it to a height balanced BST.

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
	TreeNode* sortedArrayToBST(vector<int>& nums) {
		if (nums.size() == 0)return NULL;
		int val = nums[nums.size() / 2];
		TreeNode* root = new TreeNode(val);
		vector<int> left(nums.begin(), nums.begin() + nums.size() / 2);
		vector<int> right(nums.begin() + nums.size() / 2 + 1, nums.end());
		root->left = sortedArrayToBST(left);
		root->right = sortedArrayToBST(right);

		return root;
	}
};