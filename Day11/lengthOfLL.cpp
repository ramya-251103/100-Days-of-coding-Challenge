class Solution
{
    public:
    //Function to count nodes of a linked list.
    int getCount(struct Node* head){
        
        int cnt = 0;
        
        Node* temp = head;
        while(temp)
        {
            temp = temp->next;
            cnt++;
        }
        
        return cnt;
    
        //Code here
    
    }
};
    