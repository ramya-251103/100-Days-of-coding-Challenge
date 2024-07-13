class Solution {
public:
    bool isPalindrome(int x) {

        int rev = 0;
        int rem;
        int n = x;

        while(x!=0)
        {
            if(x<0)
            return false;

            if(rev<INT_MIN/10 || rev>INT_MAX/10)
            return false;

            rem = x%10;
            rev = rev*10 + rem;
            x=x/10;

        }

        if(rev == n)
        return true;

        else
        return false;     
        }
};
