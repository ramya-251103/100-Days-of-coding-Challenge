class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {

        int index = digits.size()-1;

        while(index>=0)
        {
            if(digits[index]!=9)
            {
                digits[index]+=1;
                break;
            }

            else
            {
                digits[index]=0;
            }
            index--;
        }

        if(digits[0]==0)
        {
            digits.insert(digits.begin(),1);
            return digits;
        }
        return digits;
        
    }
};
