class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        
        int index = 0;
        for(int i = 0; i<nums.size(); i++)
        {
            if(nums[i] != val)
            {
                nums[index] = nums[i]; //array mein elements not equal to val are being placed from start
                index++;
            }
        }

        return index;

        
        
    }
};
