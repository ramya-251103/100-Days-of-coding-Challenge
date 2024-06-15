class Solution {
public:
    vector<int> rightSideView(TreeNode* root) {

       /* Brute Force
        vector<int>ans;
        vector<vector<int>>listOflist;
        
        if(root==NULL)
        return ans;

        queue<TreeNode*> q;
        q.push(root);
        

        while(!q.empty())
        {
            int size = q.size();
            vector<int>list;

            for(int i = 0 ; i<size; i++)
            {
                TreeNode* node = q.front();
                q.pop();
                list.push_back(node->val);

                if(node->left!=NULL)
                q.push(node->left);

                if(node->right!=NULL)
                q.push(node->right);

                
            }
           listOflist.push_back(list); 
        }
        for(auto level : listOflist)
        {
            ans.push_back(level.back()); //level.front() will be for left side view
        }
        return ans; */

        vector<int> res;
        recursion(root,0,res);

        return res;

        
    }
    private:
        void recursion(TreeNode *root, int level, vector<int> &res)
        {
            if(root==NULL)
            return ;

            if(level==res.size())
            res.push_back(root->val);
            recursion(root->right,level+1,res);
            recursion(root->left,level+1,res);
        }
};