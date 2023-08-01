class Solution {
public:
    bool wordBreak(string s, vector<string>& wordDict) {
        
        int n = s.size();
        
        int mod = 1e9 + 7;
        
        vector<int> dp(n+1, 0);
        
        unordered_set<string> st;
        
        for(auto& itr : wordDict)
            st.insert(itr);
        
        for(int i = 0; i < n; ++i)
        {
            string temp;
            for(int j = i; j < n; ++j)
            {
                temp += s[j];
                
                if(st.find(temp) != st.end())
                {
                    if(i > 0)
                        dp[j] =  ((dp[j] % mod + dp[i-1]) % mod) % mod;
                    else
                        dp[j] = 1;
                }
            }
        }
    
        return dp[n-1];
    }
};