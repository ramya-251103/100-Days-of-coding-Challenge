class Solution {
public:
    bool isSymmetric(TreeNode* root) {

        if(root==NULL)
        return true;

        return Symm(root->left, root->right);
    }

    bool Symm(TreeNode *left, TreeNode *right)
    {
        if(left==NULL || right== NULL)
        return left==right;

        if(left->val != right->val)
        return false;

        return Symm(left->left, right->right) && Symm(left->right, right->left);
    }
};