class Solution {
public:
    int maxScore(string s) {
        
        int n = s.size();
        
        int ones = count(s.begin(), s.end(), '1');

        int zero = 0, ans = 0;
        
        for(int i = 0; i < n-1; ++i)
        {
            if(s[i] == '0') ++zero;
            else    --ones;
            
            ans = max(ans, zero + ones);
        }
        
        return ans;
    }
};