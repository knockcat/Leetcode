class Solution {
public:
    int countHomogenous(string s) {
        
        int n = s.size(), cnt = 0, prev = 0, res = 0;
        
        const int mod = 1e9 + 7;
        
        for(auto& itr : s)
        {
            cnt = (itr == prev ? cnt+1 : 1);
            
            prev = itr;
            
            res = (res + cnt) % mod;
        }
        
        return res;
        
    }
};