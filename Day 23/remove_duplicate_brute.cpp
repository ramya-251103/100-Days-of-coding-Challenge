int removeDuplicates(vector<int>& nums) {
//using set brute force approach
          set<int>st;
        for(int i = 0; i<nums.size(); i++)
        {
            st.insert(nums[i]);
        }

        int index = 0;
        for(auto it : st)
        {
            nums[index] = it; //placing set element on array index
            index++;
        }
        return index; 
    }
