class Solution {
public:
    int scoreOfString(string s) {
        
        int n = s.size();
        
        int ans = 0;
        
        for(int i = 1; i < n; ++i)
        {
            ans += abs((s[i] - 'a') - (s[i-1] - 'a'));
        }
        
        return ans;
    }
};