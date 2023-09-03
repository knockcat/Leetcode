class Solution {    
    
public:
    
    const int mod  = 1e9 + 7;
    
    long long minv(long long x, long long y)
    {
        long long res = 1;
        
        while(y > 0)
        {
            if(y & 1)
                res = (res*x)%mod;
            
            x = (x*x) % mod;
            
            y >>= 1;
        }
        
        return (int)res;
    }
    
    long long calculate(int n, int r)
    {
        long long res = 1;
        
        for(int i = 1; i <= n; ++i)
        {
            res *= i;
            res %= mod;
        }
        
        for(int i = 1; i <= r; ++i)
        {
            res *= minv(i, mod-2);
            res %= mod;
        }
        
        for(int i = 1; i <= (n-r); ++i)
        {
            res *= minv(i, mod-2);
            res %= mod;
        }
        
        return (int)res;
    }
    
    
    
    int countKSubsequencesWithMaxBeauty(string s, int k) {
        
        if(k > 26)
            return 0;
        
        vector<int> v(26,0);
        
        for(auto& itr : s)
            ++v[itr - 'a'];
        
        sort(v.rbegin(),v.rend());
        
        long long res = 1, req = 0;
        
        for(int i = 0; i < k; ++i)
        {
            res *= v[i];
            res %= mod;
            if(v[i] == v[k-1])
                ++req;
        }
        
        int f = 0;
        
        for(int i = 0; i < 26; ++i)
        {
            if(v[i] == v[k-1])
                ++f;
        }
        
        res *= calculate(f, req);
        
        res %= mod;
        
        return (int)res;
        
    }
};