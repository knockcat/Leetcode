class Solution {
public:
    int mySqrt(int x) {
        
        long long start = 1, end = x;
        
        int ans = 0;
        
        while(start <= end)
        {
            long long mid = (start + end) >> 1;
            
            long long val = mid * 1LL * mid;
           
            if(val <= x)
            {
                ans = mid;
                start = mid+1;
            }
            else
            {
                end = mid-1;
            }
        }
        
        return ans;
        
    }
};