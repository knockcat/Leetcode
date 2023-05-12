class Solution {
public:
    
    long long helper(int i, int n, vector<vector<int>>& questions, vector<long long>& dp)
    {
        if(i >= n)
            return 0;
        
        if(dp[i] != -1)
            return dp[i];
        
        long long sum = 0;
        
        long long take = questions[i][0] + helper(i + questions[i][1] + 1, n, questions, dp);
        
        long long notTake = helper(i+1, n, questions, dp);
        
        return dp[i] = max(take , notTake);
    }
    
    long long mostPoints(vector<vector<int>>& questions) {
     
        int n = questions.size();
        
        vector<long long> dp(n+1, -1);
        
        return helper(0, n, questions, dp);
        
    }
};