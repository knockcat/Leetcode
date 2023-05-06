class Solution {
    
private:
    
    long long expo(long long x, long long y)
    {
        long long res = 1;
        
        while( y > 0)
        {
            if(y & 1)
                res = (res * x) % mod;
            
            y >>= 1;
            
            x = (x*x) % mod;
        }
        
        return res % mod;
    }
    
public:
    
    int mod = 1e9 + 7;
    
    int numSubseq(vector<int>& nums, int target) {
        
        long long cnt = 0, n = nums.size();
        
        sort(nums.begin(),nums.end());
        
        long long l = 0, r = n - 1;
        
        while(l <= r)
        {
            if(nums[l] + nums[r] <= target)
            {
                cnt += expo(2,(r-l));
                cnt %= mod;
                ++l;
            }
            else
                --r;
        }
        
        return cnt;
        
    }
};