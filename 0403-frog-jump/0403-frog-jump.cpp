class Solution {
    
private:
    bool helper(int idx, int n, int canJump, vector<int>& stones, map<pair<int,int>, int>& dp)
    {
        if(idx == n-1)
            return 1;
        
        if(idx >= n)
            return 0;
        
        bool result = false;
        
        if(dp.find({idx, canJump}) != dp.end())
            return dp[{idx, canJump}];
     
        for(int jump = -1; jump <= 1; ++jump)
        {
            int jumpIdx = lower_bound(stones.begin(), stones.end(), stones[idx] + canJump + jump) - stones.begin();
            
            if(jumpIdx > idx and jumpIdx < n and stones[idx] + canJump + jump == stones[jumpIdx])
                result |= helper(jumpIdx, n, canJump + jump, stones, dp);
        }
        
       
       return dp[{idx, canJump}] = result;
    }
public:
    bool canCross(vector<int>& stones) {
        
        int n = stones.size();
        
        map<pair<int,int>, int> dp;
        
        return helper(0, n, 0, stones, dp);  
    }
};