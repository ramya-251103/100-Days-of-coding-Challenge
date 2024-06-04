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
    vector<int> inorderTraversal(TreeNode* root) {
        
        vector<int>ino;

        inOrder(root,ino);

        return ino;
    }

    private:
        
        void inOrder(TreeNode *root, vector<int> &vec) /*here we have passed the vec by refernce 
        using "&" because we want to change the original vector and not the copy*/
        {
            if(root==NULL)
            return ;

            inOrder(root->left,vec);
            vec.push_back(root->val);
            inOrder(root->right,vec);
        }
};
