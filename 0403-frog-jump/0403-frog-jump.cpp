class Solution {
    
private:
    bool helper(int idx, int n, int canJump, vector<int>& stones, map<pair<int,int>, int>& dp)
    {
        if(idx == n-1)
            return 1;
        
        if(idx >= n)
            return 0;
        
        bool first = false, second = false, third = false;
        
        if(dp.find({idx, canJump}) != dp.end())
            return dp[{idx, canJump}];
      
        int maxJump = canJump + 1;
        int minJump = canJump - 1;
        
        for(int i = idx+1; i < n; ++i)      
        {      
            
            if(stones[idx] + maxJump == stones[i])
            {
                first |= helper(i, n, maxJump, stones, dp);
            }

            if(stones[idx] + minJump == stones[i])
            {
                second |= helper(i, n, minJump, stones, dp);
            }

            if(stones[idx] + canJump == stones[i])
            {
                third |= helper(i, n, canJump, stones, dp);
            }
        }
        return dp[{idx, canJump}] = first or second or third;
    }
public:
    bool canCross(vector<int>& stones) {
        
        int n = stones.size();
        
        map<pair<int,int>, int> dp;
        
        return helper(0, n, 0, stones, dp);
        
    }
};