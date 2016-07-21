////For example,
////Given the following perfect binary tree,
////1
///// \
////2    3
///// \ / \
////4  5  6  7
////After calling your function, the tree should look like :
////1->NULL
///// \
////2 -> 3->NULL
///// \ / \
////4->5->6->7->NULL
//
///**
//* Definition for binary tree with next pointer.
//* struct TreeLinkNode {
//*  int val;
//*  TreeLinkNode *left, *right, *next;
//*  TreeLinkNode(int x) : val(x), left(NULL), right(NULL), next(NULL) {}
//* };
//*/
//class Solution {
//public:
//	void connect(TreeLinkNode *root) {
//		int fatherCount = 0;
//		queue<TreeLinkNode*>board;
//
//		if (root == NULL)return;
//		board.push(root);
//		root->next = NULL;
//		++fatherCount;
//
//		while (!board.empty()) {
//			TreeLinkNode *p;
//			int tmp = fatherCount;
//			while (tmp--) {
//				p = board.front();
//				if (p->left != NULL && p->right != NULL) {
//					board.push(p->left);
//					board.push(p->right);
//				}
//				board.pop();
//				if (tmp != 0)
//					p->next = board.front();
//			}
//			p->next = NULL;
//			fatherCount = fatherCount * 2;
//		}
//	}
//};