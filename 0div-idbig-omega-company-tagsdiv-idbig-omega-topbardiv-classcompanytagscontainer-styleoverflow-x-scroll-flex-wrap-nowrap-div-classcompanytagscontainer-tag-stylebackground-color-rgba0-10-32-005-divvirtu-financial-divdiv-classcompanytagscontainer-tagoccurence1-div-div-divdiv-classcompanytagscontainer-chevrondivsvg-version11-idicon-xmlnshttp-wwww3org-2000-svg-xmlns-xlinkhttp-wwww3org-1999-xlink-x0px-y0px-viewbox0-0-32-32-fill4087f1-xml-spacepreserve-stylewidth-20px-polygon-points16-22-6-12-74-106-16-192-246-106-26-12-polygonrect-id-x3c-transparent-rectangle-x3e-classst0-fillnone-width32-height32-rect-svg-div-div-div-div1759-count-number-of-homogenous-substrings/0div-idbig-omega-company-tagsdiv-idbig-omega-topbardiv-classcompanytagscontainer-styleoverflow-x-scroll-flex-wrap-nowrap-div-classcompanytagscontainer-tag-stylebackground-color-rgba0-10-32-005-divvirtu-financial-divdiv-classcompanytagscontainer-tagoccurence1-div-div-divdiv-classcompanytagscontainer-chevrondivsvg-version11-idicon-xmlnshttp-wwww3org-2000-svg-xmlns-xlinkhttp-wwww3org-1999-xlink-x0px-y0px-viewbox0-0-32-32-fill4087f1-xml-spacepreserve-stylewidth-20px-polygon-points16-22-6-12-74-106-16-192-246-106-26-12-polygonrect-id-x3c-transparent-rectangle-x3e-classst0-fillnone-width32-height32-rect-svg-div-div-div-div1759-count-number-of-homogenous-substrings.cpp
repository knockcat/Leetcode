class Solution {
public:
    int countHomogenous(string s) {
        
        int n = s.size();
        
        const int mod = 1e9 + 7;
        
        long long cnt = 1;
        
        long long ans = 0;
        
        for(int i = 1; i < n; ++i)
        {
            if(s[i] == s[i-1])
            {
                ++cnt;
            }
            
            else
            {
                int curr = ((cnt * 1LL* (cnt+1))/2) % mod;
                
                ans = (ans + curr) % mod;
                
                cnt = 1;
            }
        }
        
        if(cnt)
        {
            long long curr = ((cnt * 1LL *(cnt+1))/2)%mod ;
                
            ans = (ans + curr) % mod;
                
            cnt = 1;
        }
        
        return ans;
        
    }
};