class Solution {
public:
    int minAnagramLength(string s) {
        
        int n = s.size();
        
        map<char, int> mp;
        
        for(auto&ch : s)
            ++mp[ch];
        
        int minFreq = INT_MAX;
        
        for(auto&[_, e] : mp)
            minFreq = min(minFreq, e);
    
        int ans = n;
        
        for(int i = 1; i <= minFreq; ++i)
        {
            bool ok = true;
            int len = 0;
            
            for(auto&[_, e] : mp)
            {
                ok &= (e % i == 0);
                len += (e / i);
            }
            
            if(ok)
            {
                ans = len;
            }
        }
        
        return ans;
    }
};