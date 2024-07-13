class Solution {
public:
    int reverse(int x) {

        int sum = 0;
        int rem;

        while(x!=0)
        {
            if(sum < INT_MIN/10 || sum>INT_MAX/10) /*because we need 
            sum*10 + rem < INT_MIN || sum*10 + rem > INT_MAX */
            return 0;
            rem = x%10;
            sum = sum*10 + rem;
            x=x/10;
        }
        
        return sum;
    }
};
