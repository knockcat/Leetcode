class Solution {
public:
    
    map<int, map<int, map<int, int>>> dp;
    
    int helper(int i, int backStep, int jump, int target)
    {
        int ans = 0;
        
        if(dp[i][backStep].find(jump) != dp[i][backStep].end())
        {
            return dp[i][backStep][jump];
        }
    
        if(i == target)
        {
            ++ans;
        }
        
        if(backStep and i > 0)
        {
            ans += helper(i-1, 0, jump, target);
        }
        
        if(i + (1LL<<jump) <= target+1)
        {
            ans += helper(i + (1LL<<jump), 1, jump+1, target);
        }
        
        return dp[i][backStep][jump] = ans;
    }
    
    int waysToReachStair(int k) {
        
        return helper(1, 1, 0, k);
        
    }
};