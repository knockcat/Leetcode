class Solution {
 
private:
    int helper(int idx, int n, string& s, unordered_set<string>& used, vector<int>& dp)
    {
        if(idx == n)
            return 0;
        
        if(dp[idx] != -1)
            return dp[idx];
        
        int minExtra = n;
        
        string temp;
        
        for(int i = idx; i < n; ++i)
        {   
            temp += s[i];
            
            int currExtra = used.find(temp) != used.end() ? 0 :  temp.size();
            int nextExtra = helper(i + 1, n, s, used , dp);
            int totalExtra = currExtra + nextExtra;
            
            minExtra = min(minExtra, totalExtra);
           
        } 
        return dp[idx] = minExtra;
    }
    
public:
    int minExtraChar(string s, vector<string>& dictionary) {
        
        int n = s.size();
        
        unordered_set<string> used(dictionary.begin(), dictionary.end());
        
        vector<int> dp(n+1, -1);
        
        return helper(0, n, s, used, dp);
    }
};