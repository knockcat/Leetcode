#define ll long long int
class Solution {
public:
    long long appealSum(string s) {
        
        ll ans = 0, n = s.size();
        vector<int> prev(26,0);
        
        for(int i = 0; i < n; ++i)
        {
            // removig prev
            ans += (i+1 - prev[s[i] - 'a']) * (n - i);
            prev[s[i] - 'a'] = i+1;
        }
        
        return ans;
        
        
    }
};

