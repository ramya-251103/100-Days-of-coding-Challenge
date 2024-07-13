class Solution {
public:
    int majorityElement(vector<int>& nums) {

     /*   //hashmap
        map<int,int>mpp;
        for(int i = 0; i<nums.size();i++)
        {
            mpp[nums[i]]++ ;
        }
        for(auto it: mpp)
        {
            if(it.second > nums.size()/2)
            {
                return it.first;
            }
        }
 
       return 0;
       */
       int cnt = 0;
       int el = nums[0];
       for(int i = 0 ; i< nums.size(); i++)
       {
        if(cnt==0)
        {
            cnt=1;
            el = nums[i];
        }
        else if(nums[i]==el)
        {
            cnt++;
        }
        else
        cnt--;

        
       }
       return el;
       /* if it says that there may not exist a mjority element then we have to just iterate the array
       one more time and count the frequency of el and then check if it is greater than n/2, if it is then
       it is majority element else there is no majority element present in the array
       
       int cnt1 = 0;
       for(int i = 0; i<nums.size(); i++){
        if(nums[i]==el) cnt1++;
       }
       if(cnt1> (nums.size()/2))
       {
        return el;
       }
       return -1;
       */
        
    }
};
