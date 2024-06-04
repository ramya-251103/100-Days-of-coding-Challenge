/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    vector<int> postorderTraversal(TreeNode* root) {

        vector<int> post;

        postOrder(root,post);

        return post;
        
    }

    private:

    void postOrder(TreeNode *root, vector<int> &vec)
    {
        if(root==NULL)
        return ;

        postOrder(root->left,vec);
        postOrder(root->right,vec);
        vec.push_back(root->val);

    }
};
