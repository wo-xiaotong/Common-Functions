/*definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 *
dfhf


class Solution {
public:
    TreeNode* invertTree(TreeNode* root) {
        if(root==NULL)return root;
        TreeNode *temp;
        
        temp=root->left;
        root->left=root->right;
        root->right=temp;

        if(root->left!=NULL)invertTree(root->left);
        if(root->right!=NULL)invertTree(root->right);

        return root;
    }
};
