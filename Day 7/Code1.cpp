int diameter = 0;
    int height(TreeNode* root)
    {
        if(root==NULL)
        return 0;
        

        int l = height(root->left);
        int r = height(root->right);

         diameter = max(diameter,l+r); diameter bhi chahyie har node ka aur height bhi 
        taki return kar sake height upper node ko


        return 1 + max(l,r); //returning height to parent node

    }
    
    int diameterOfBinaryTree(TreeNode* root) {

        height(root);
       
        return diameter; 


    } 
