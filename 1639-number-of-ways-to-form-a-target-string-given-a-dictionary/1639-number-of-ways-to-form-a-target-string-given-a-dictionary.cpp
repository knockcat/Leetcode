#define ll long long int
class Solution {
public:
    
    int mod = 1e9+7;
    
    int helper(int i, int j, int n, int m , vector<string>& words, string& target, vector<vector<ll>>& dp, vector<vector<ll>>& freq)
    {
        if(j >= m)
            return 1;
        
        if(i >= n)
            return 0;
        
        if(dp[i][j] != -1)
            return dp[i][j];
        
        ll take = 0, notTake = 0;
        
        notTake = helper(i+1, j, n, m, words, target, dp, freq);
        
       
        if(freq[i][target[j] - 'a'])
            take = ((freq[i][target[j]-'a'])  * (helper(i+1, j+1, n, m, words, target, dp, freq)))%mod;
        
        
        return dp[i][j] = (take + notTake)%mod;
    }
    
    
    int numWays(vector<string>& words, string target) {
        
        int n = words[0].size(), m = target.size();
        
        vector<vector<ll>> dp(n+1, vector<ll> (m+1, -1));
        
        vector<vector<ll>> freq(n, vector<ll>(26,0));
        
        for(auto &itr : words)
        {
            for(int i =0 ; i<n; ++i)
                ++freq[i][itr[i]-'a'];
        }
        
        // for(auto itr : freq)
        // {
        //     for(auto x : itr)
        //         cout<<x<<" ";
        //     cout<<endl;
        // }
        
        return helper(0, 0, n, m, words, target, dp, freq);
        
    }
};

