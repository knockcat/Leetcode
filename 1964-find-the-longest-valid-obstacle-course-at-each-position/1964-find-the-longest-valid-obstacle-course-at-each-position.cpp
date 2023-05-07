class Solution {
public:
    
    int helper(int idx, int n, int prev, vector<int>& obstacles)
    {
        if(idx > n)
            return 0;
        
        int take = 0 , notTake = 0;
        
        notTake = helper(idx+1, n, prev, obstacles);
        
        if(prev == -1 or obstacles[idx] >= obstacles[prev] )
            take = max(helper(idx+1, n, prev, obstacles), 1 + helper(idx+1, n, idx, obstacles));

        return max(take, notTake);
    }
    
    
    vector<int> longestObstacleCourseAtEachPosition(vector<int>& obstacles) {
        
         vector<int> dp (obstacles.size(),1);
        int result=1;
        vector<int> b(obstacles.size()+1, INT_MAX);
        b[0]=INT_MIN;
       
        for(int i=0; i<obstacles.size(); i++){
            auto k = upper_bound(b.begin(), b.end(), obstacles[i]) - b.begin();
            b[k] = obstacles[i];
            dp[i]=k;
        }
        return dp;
        
    }
};