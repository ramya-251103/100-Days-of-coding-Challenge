int removeDuplicates(vector<int>& nums) {
     //two pointer approach   
      int i = 0;
      for(int j = 1; j<nums.size(); j++)
      {
        if(nums[i]!=nums[j])
        {
            nums[i+1]=nums[j];
            i++;
        }
      }
      return i+1;
