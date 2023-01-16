#define ll long long int
int mod = 1e9+7;

class Solution {
public:
    int peopleAwareOfSecret(int n, int delay, int forget) {
        
        vector<ll> dp(n+1,0);
        
        dp[1] = 1;
        ll ans = 0, spreading = 0;
        
        for(int i = 2; i<= n; ++i)
        {
            ll sharing = dp[max(i-delay,0)];
            ll forgetting = dp[max(i-forget,0)];
            spreading += (sharing - forgetting + mod) % mod;
            
            dp[i] = spreading;
        }
        
        for(int i = n - forget + 1; i <= n; ++i)
            ans = (ans + dp[i]) % mod;
        
        return (int)ans;
    }
};