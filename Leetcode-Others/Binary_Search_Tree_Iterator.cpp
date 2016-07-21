///**
//* Definition for binary tree
//* struct TreeNode {
//*     int val;
//*     TreeNode *left;
//*     TreeNode *right;
//*     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
//* };
//*/
//class BSTIterator {
//public:
//	BSTIterator(TreeNode *root) {
//		initVal(root);
//	}
//
//	void initVal(TreeNode* root){
//		if (root == NULL)return;
//		initVal(root->left);
//		valRes.push_back(root->val);
//		initVal(root->right);
//	}
//
//	/** @return whether we have a next smallest number */
//	bool hasNext() {
//		return index<valRes.size();
//	}
//
//	/** @return the next smallest number */
//	int next() {
//		return valRes[index++];
//	}
//
//private:
//	vector<int>valRes;
//	int index = 0;
//};
//
///**
//* Your BSTIterator will be called like this:
//* BSTIterator i = BSTIterator(root);
//* while (i.hasNext()) cout << i.next();
//*/