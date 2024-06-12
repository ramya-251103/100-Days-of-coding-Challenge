int findMax(TreeNode * root ,int &maxi)
    {
        
        if(root==NULL)
        return 0;

        int l = findMax(root->left, maxi);
        int r = findMax(root->right, maxi);

        maxi = max(maxi,l+r);

        return 1 + max(l,r);
        
    }
     
    int diameterOfBinaryTree(TreeNode * root)
    {
        int diameter = 0;
        findMax(root,diameter);

        return diameter;
    }
