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

        //Iterative Inorder Traversal

        vector<int>inorder;
        
        stack<TreeNode *>st;
        TreeNode* node =root;
        while(true)
        {
            if(node!=NULL)
            {
                st.push(node);
                node = node->left; //left jate jayega aise ek ek krke
            }
            else { //two conditions ya stack empty hai ya node ke left mein kuch nai hai
                if(st.empty() == true) break; //stackempty hoga to bahar ajayenge loop ke
                node = st.top(); //jab left mein kuch nai reh gaya to usi element ko ab pop krdenge
                st.pop();
                inorder.push_back(node->val); //pop krke inorder vector mein node ki value place krdeng
                node = node->right; /*fir us node k right mein jayenge agar value exist 
                krti hogi to if(node!=NULL wala loop fir se chalu hojayega*/
            }
        }
        return inorder;
    }
};
