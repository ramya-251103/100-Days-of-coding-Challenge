void postOrder(TreeNode *root, vector<int> &vec)
    {
vector<int>postorder;
        if(root==NULL)
        return postorder;

        stack<TreeNode *> st1, st2;
        st1.push(root);

        while(!st1.empty())
        {
            root = st1.top();
            st1.pop();
            st2.push(root);

            if(root->left != NULL) st1.push(root->left);
            
            if(root->right !=NULL) st1.push(root->right);

        }

        while(!st2.empty())
        {
            TreeNode * node = st2.top();
            st2.pop();
            postorder.push_back(node->val);
        }
        return postorder;
}