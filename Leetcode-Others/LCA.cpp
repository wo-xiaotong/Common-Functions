///*Given a binary search tree(BST), find the lowest common ancestor(LCA) of two given nodes in the BST.
//According to the definition of LCA on Wikipedia : “The lowest common ancestor is defined between 
//two nodes v and w as the lowest node in T that has both v and w as descendants(where we allow a node to be a descendant of itself).”
//_______6______
/// \
//___2__          ___8__
/// \ / \
//0      _4       7       9
/// \
//3   5
//For example, the lowest common ancestor(LCA) of nodes 2 and 8 is 6. Another example is LCA of nodes 2 and 4 is 2,
//since a node can be a descendant of itself according to the LCA definition.
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
//
////从根节点开始 如果根大于两个子节点，则两个字节点在根的左边
////如果小于两个字节点，则两个字节点在根的右边
////如果介于两者之间，则是公共祖先
//
//class Solution {
//public:
//	TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
//		int rootVal = root->val;
//		int leftVal = p->val;
//		int rightVal = q->val;
//
//		while (true) {
//			if (rootVal>leftVal&&rootVal>rightVal) {
//				root = root->left;
//				rootVal = root->val;
//				continue;
//			}
//			if (rootVal<leftVal&&rootVal<rightVal) {
//				root = root->right;
//				rootVal = root->val;
//				continue;
//			}
//			return root;
//		}
//
//	}
//};
