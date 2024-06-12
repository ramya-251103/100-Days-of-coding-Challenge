class Solution
{
    public:
    //Function to return a list of nodes visible from the top view 
    //from left to right in Binary Tree.
    vector<int> topView(Node *root)
    {
        
    vector<int>ans;
    if(root==NULL)
    return ans;
    
    map<int,int>mpp;
    
    queue<pair<Node*, int>> q;
    
    q.push({root,0});
    
    while(!q.empty())
    {
        auto it = q.front();
        q.pop();
        
        Node *node = it.first; //root (phle)
        int line = it.second; //line = 0 (phle)
      
        if(mpp.find(line) == mpp.end()) /*check the repetion of line in map.. if line is already present that means that the top 
          value is already in the map for that particular line*/
          
        mpp[line] = node->data; //map ke line ko data assign hojata i.e., key pe value
        
        if(node->left != NULL){
            q.push({node->left, line-1});
        }
        if(node->right != NULL){
            q.push({node->right, line+1});
        }
        
    }
    
    for(auto it : mpp){
        ans.push_back(it.second);
    }
    }

};
