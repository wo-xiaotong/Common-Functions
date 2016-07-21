//iven a binary tree containing digits from 0-9 only, each root-to-leaf path could represent a number.
//
//An example is the root-to-leaf path 1->2->3 which represents the number 123.
//
//Find the total sum of all root-to-leaf numbers.
//
//For example,
//
//    1
//   / \
//  2   3
//
//The root-to-leaf path 1->2 represents the number 12.
//The root-to-leaf path 1->3 represents the number 13.
//
//Return the sum = 12 + 13 = 25.
//
///**
// * Definition for a binary tree node.
// * struct TreeNode {
// *     int val;
// *     TreeNode *left;
// *     TreeNode *right;
// *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
// * };
// */
//class Solution {
//public:
//    int sumNumbers(TreeNode* root) {
//        return sumNumbers(root,0);
//    }
//    
//    int sumNumbers(TreeNode* root,int rootSum){
//        if(root==NULL)return 0;
//        if(root->left==NULL && root->right==NULL)return root->val+10*rootSum;
//        int leftSum=0,rightSum=0;
//        if(root->left!=NULL)leftSum=sumNumbers(root->left,root->val+10*rootSum);
//        if(root->right!=NULL)rightSum=sumNumbers(root->right,root->val+10*rootSum);
//        return leftSum+rightSum;
//    }
//};