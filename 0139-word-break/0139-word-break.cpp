class Solution {
    
private:
    bool helper(int idx, int n, string& s, unordered_set<string>& used, vector<int>& dp)
    {
        if(idx == n)
            return true;
        
        if(dp[idx] != -1)
            return dp[idx];
        
        string temp;
        for(int i = idx; i < n; ++i)
        {
            temp += s[i];
            
            if(used.find(temp) != used.end())
            {
                if(helper(i+1, n, s, used, dp))
                    return dp[idx] = true;
            }
        }
        return dp[idx] = false;
    }
public:
    bool wordBreak(string s, vector<string>& wordDict) {
        
        unordered_set<string> used(wordDict.begin(), wordDict.end());
        
        int n = s.size();
        
        vector<int> dp(n+1, -1);
        
        return helper(0, n, s, used, dp);
        
    }
};