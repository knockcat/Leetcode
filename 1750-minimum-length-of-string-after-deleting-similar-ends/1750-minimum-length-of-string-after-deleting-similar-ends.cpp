class Solution {
public:
    int minimumLength(string s) {
        
        int n = s.size();
        int i = 0, j = n-1;
        
        while(i < j)
        {
            char pref = s[i];
            char suff = s[j];
            
            if(s[i] != s[j])
                break;
            
            while(j >= 0 and s[j] == pref)
                --j;
            while(i < j and s[i] == suff)
                ++i;
        }
        
        int ans = j - i + 1;
        
        return max(ans, 0);
    }
};