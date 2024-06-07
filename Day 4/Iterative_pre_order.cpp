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

    vector<int> preorderTraversal(TreeNode* root) {
         
        /* Using Recursion
        vector<int>pre;

        preOrder(root,pre);

        return pre;
    
    }

    private:
    void preOrder(TreeNode *root, vector<int> &v)
{
 vector<int>pre;
        if(root==NULL)
        return ;

        v.push_back(root->val);
        preOrder(root->left,v);
        preOrder(root->right,v); */
        

        //Iterative Traversal
        vector<int>preorder;
        if(root==NULL)
        return preorder;


        stack<TreeNode *>st;
        st.push(root);

        while(!st.empty())
        {
            int size = st.size();
            root = st.top();
            st.pop();

            preorder.push_back(root->val);
            if(root->right!=NULL){
                st.push(root->right);
            }
            if(root->left!=NULL)
            {
                st.push(root->left);
            }

            
        }
        return preorder;
        
    }


};
