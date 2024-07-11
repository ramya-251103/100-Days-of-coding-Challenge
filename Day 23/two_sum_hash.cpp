vector<int> twoSum(vector<int>& nums, int target) {
//using hash table
    map<int,int>mpp;
    int n = nums.size();

    for(int i = 0 ; i<n; i++)
    {
        int a = nums[i];

        int moreNeeded = target-a;

        if(mpp.find(moreNeeded) != mpp.end()) /*kya moreNeeded map mein hai? agar
        haa to fir moreNeeded ka index aur a ka index jo ki i hai return kardo*/
        {
            return {mpp[moreNeeded], i};
        }
        mpp[a] = i; /*agar nahi hai map mein to a ko key aur uske i ko value ke form
        mein map mein daal do*/
    }
    return{};
 
    }     
