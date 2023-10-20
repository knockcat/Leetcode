class Solution {
public:
    bool backspaceCompare(string s, string t) {
        
        int p(0), q(0);

        int n = s.size(), m = t.size();
        
        for(int i = 0; i < n; ++i)
        {
            if(s[i] == '#')
            {
                p = max(0, --p);
            }
            else
            {
                s[p++] = s[i];
            }
        }
        
        for(int i = 0; i < m; ++i)
        {
            if(t[i] == '#')
            {
                q = max(0, --q);
            }
            else
            {
                t[q++] = t[i];
            }
        }
        
        if(p != q)  return false;
        
        for(int i = 0; i < p; ++i)
        {
            if(s[i] != t[i])
                return false;
        }
        
        return true;
    }
};