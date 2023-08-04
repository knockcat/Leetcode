class Solution {
public:
    bool wordBreak(string s, vector<string>& wordDict) {
        
        unordered_set<string> used(wordDict.begin(), wordDict.end());
        
        int n = s.size();
        
        vector<int> dp(n+1, 0);
        
        for(int i = 0; i < n; ++i)
        {
            string temp;
            for(int j = i; j < n; ++j)
            {
                temp += s[j];
                
                if(used.find(temp) != used.end())
                {
                    if(i > 0)
                    {
                        if(dp[i-1])
                            dp[j] = 1;
                    }
                    else
                        dp[j] = 1;
                }
            }
        }     
    
        return dp[n-1];
    }
};