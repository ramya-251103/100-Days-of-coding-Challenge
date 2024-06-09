class Solution {
public:
   //brute force O(N2) TC
    /*int height(TreeNode* root) {

        if (root==NULL)
        return 0;

        int left_height = height(root->left);
        int right_height = height(root->right);

        return 1 + max(left_height, right_height);
        
    } 
    bool isBalanced(TreeNode* root) {

        if(root==NULL)
        return true;

        int l = height(root->left); //root ke left ki height pata chlegi for ex 9 -> 1 return krega
        int r = height(root->right); //root ke right ki height pata chlegi for ex 20 -> 2 return krega

        if(abs(l-r)>1)
         return false;
          //1-2 = -1 to condition false nahi hai mtlb 3 balance hai

        //recursion lgayenge taki har node ki left right height compare ki ja sake

        int lh = isBalanced(root->left);  
        int rh = isBalanced(root->right);

        if(!lh || !rh)return false; //kisi bhi node ka left ya right node balance nai hua to false hoga 
       
        return true;
  
    } */
//Optimal approach O(N) TC
    bool isBalanced(TreeNode *root)
    {
        return height(root) != -1;
    }
    int height(TreeNode *root)
    {
        if(root==NULL)
        return 0;

        int lh = height(root->left);
        if(lh==-1) return -1;        
        int rh = height(root->right);
        if(rh == -1) return -1;

        if(abs(lh-rh)>1) return -1;

        return 1 + max(lh,rh);
         
    }
};
