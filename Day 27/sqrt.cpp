class Solution {
public:
    int mySqrt(int x) {

        int start = 0;
        int end = x/2 + 1; //edge case if x = 1 then x/2 will be 0 so adding one more 1

        long long int mid = start + (end-start)/2; //long long for keeping in int range
        int ans = -1;

        while(start<=end)
        {
           long long int square = mid*mid;

            if(square==x)
            return mid;

            else if(square<x)
            {
            start = mid+1;
            ans = mid;
            }

            else
            end = mid-1;

            mid = start + (end-start)/2;   
        }

        return ans;
    }
};
