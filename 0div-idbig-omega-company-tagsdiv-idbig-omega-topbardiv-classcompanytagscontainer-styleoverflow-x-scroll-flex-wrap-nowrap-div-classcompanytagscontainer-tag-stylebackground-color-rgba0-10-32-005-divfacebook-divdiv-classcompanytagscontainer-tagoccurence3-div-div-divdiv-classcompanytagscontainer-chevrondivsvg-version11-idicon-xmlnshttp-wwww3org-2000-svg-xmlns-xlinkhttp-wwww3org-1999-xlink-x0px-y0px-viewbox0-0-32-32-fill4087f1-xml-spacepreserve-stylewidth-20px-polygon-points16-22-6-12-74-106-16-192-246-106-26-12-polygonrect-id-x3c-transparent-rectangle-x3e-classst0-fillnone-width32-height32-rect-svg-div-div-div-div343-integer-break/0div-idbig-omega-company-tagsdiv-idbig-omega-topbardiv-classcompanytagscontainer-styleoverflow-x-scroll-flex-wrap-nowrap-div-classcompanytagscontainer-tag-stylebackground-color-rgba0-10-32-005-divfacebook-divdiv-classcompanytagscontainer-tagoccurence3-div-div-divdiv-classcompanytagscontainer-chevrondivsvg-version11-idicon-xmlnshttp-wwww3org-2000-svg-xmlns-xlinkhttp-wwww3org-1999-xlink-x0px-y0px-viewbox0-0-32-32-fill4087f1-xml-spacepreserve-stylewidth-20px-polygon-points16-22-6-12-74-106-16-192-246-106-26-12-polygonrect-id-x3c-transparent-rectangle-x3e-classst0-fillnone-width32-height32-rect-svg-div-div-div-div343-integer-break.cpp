class Solution {
public:
    
    int helper(int idx, int sum, int n)
    {
        if(sum == 0)
           return 1;
        
        if(sum < 0 or idx >= n)
            return 0;
        
        int res = helper(idx+1, sum, n);
        
        res = max(res, idx * helper(idx, sum-idx, n));
        
        return res;
    }
    
    int integerBreak(int n) {
        
        return helper(1, n, n);
        
    }
};