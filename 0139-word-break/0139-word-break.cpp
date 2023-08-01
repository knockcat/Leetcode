class Solution {
    
private:
    bool helper(int idx, int n, string& str, unordered_set<string>& st, vector<int>& dp)
    {
        if(idx == n)
            return true;
        
        if(dp[idx] != -1)
            return dp[idx];
        
        string temp = "";
        
        for(int i = idx; i < n; ++i)
        {
            temp += str[i];
            
            if(st.find(temp) != st.end())
            {
                if(helper(i+1, n, str, st, dp))
                    return dp[idx] = true;
            }
        }
        
        return dp[idx] = false;
    }
    
public:
    bool wordBreak(string s, vector<string>& wordDict) {
        
        int n = s.size();
        
        vector<int> dp(n+1 , -1);
        
        unordered_set<string> st;
        
        for(auto itr : wordDict)
            st.insert(itr);
        
        return helper(0, n, s, st, dp);
        
    }
};