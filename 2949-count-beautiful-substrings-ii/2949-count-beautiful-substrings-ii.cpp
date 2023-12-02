#define ll long long

class Solution {
public:
    long long beautifulSubstrings(string s, int k) {
        
        int n = s.size();
        
        function<bool(char)> isVowel = [&](char ch)
        {
            return (ch == 'a' or ch == 'e' or ch == 'i' or ch == 'o' or ch == 'u');
        };
        
        unordered_map<int, unordered_map<ll,ll> > mp;
        
        ll ans = 0;
        
        ++mp[0][0];
        
        ll pref = 0, vow = 0;
        
        for(int i = 0; i < n; ++i)
        {
            if(isVowel(s[i]))
                ++pref, ++vow;
            else
                --pref;
            
            for(auto& [f, cnt] : mp[pref])
            {
                ll curr = (vow%k) - f;
                if((curr * curr) % k == 0)
                    ans += cnt;
            }
            
            ++mp[pref][vow%k];
        }
        
        return ans;
        
    }
};