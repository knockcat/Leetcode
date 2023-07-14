class Solution {
public:
    int longestSubsequence(vector<int>& arr, int difference) {
        
        unordered_map<int,int> dp;
        
        int n = arr.size();
        
        int ans = 1;
        
        for(int i = 0; i < n; ++i)
        {
            int num = arr[i];
            
            if(dp.find(num-difference) != dp.end())
                dp[num] = dp[num-difference] + 1;
            
            else
                dp[num] = 1;
            
            ans = max(ans, dp[num]);
        }
        
        return ans;
        
    }
};