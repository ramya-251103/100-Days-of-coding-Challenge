
vector <int> preInPostTraversal (Tree Node* root)
{
stack< pair <TreeNode*, int>> st;
st. push ({ root, 1});

vector <int> pre, in, post;
if (root == NULL) return;

while (!st.empty()){
      auto it= st.top();
      st. pop();
         if (it.second == 1){
              pre.push_back (it.firstt->val);
              it.second ++;
              st. push (it);
            
       if (it. first→ left!= NULL){
             st.push ({it.first->left, 1});
        }
       }
          if(it.second == 2){
      in.push_back (it.first->val);
        it. second++;
            st.push (it);

    if (it.first→ right! =NULL){
     st.push({it.first->right, 1});
    }
}
     else {
     post. push_back (it. first->val);
    }
  }
}