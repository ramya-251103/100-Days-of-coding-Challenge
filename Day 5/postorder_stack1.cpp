//----------Iterative Traversal using one stack------
void postOrder(TreeNode *root, vector<int> &vec)
    {
        vector<int>postorder;
        if(root==NULL)
        return postorder;

        stack<TreeNode *> st;
        TreeNode *cur = root;

        while(cur!=NULL || !st.empty())
        {
            if(cur!=NULL)
            {
            st.push(cur);
            cur=cur->left;
            }

            else{
                TreeNode *temp = st.top()->right;
                if(temp==NULL)
                {
                    temp = st.top();
                    st.pop();
                    postorder.push_back(temp->val);

                    while(!st.empty() && temp==st.top()->right)
                    {
                        temp=st.top();
                        st.pop();
                        postorder.push_back(temp->val);
                    }
                }
                else
                cur=temp;
            }
        }
        return postorder;
    }