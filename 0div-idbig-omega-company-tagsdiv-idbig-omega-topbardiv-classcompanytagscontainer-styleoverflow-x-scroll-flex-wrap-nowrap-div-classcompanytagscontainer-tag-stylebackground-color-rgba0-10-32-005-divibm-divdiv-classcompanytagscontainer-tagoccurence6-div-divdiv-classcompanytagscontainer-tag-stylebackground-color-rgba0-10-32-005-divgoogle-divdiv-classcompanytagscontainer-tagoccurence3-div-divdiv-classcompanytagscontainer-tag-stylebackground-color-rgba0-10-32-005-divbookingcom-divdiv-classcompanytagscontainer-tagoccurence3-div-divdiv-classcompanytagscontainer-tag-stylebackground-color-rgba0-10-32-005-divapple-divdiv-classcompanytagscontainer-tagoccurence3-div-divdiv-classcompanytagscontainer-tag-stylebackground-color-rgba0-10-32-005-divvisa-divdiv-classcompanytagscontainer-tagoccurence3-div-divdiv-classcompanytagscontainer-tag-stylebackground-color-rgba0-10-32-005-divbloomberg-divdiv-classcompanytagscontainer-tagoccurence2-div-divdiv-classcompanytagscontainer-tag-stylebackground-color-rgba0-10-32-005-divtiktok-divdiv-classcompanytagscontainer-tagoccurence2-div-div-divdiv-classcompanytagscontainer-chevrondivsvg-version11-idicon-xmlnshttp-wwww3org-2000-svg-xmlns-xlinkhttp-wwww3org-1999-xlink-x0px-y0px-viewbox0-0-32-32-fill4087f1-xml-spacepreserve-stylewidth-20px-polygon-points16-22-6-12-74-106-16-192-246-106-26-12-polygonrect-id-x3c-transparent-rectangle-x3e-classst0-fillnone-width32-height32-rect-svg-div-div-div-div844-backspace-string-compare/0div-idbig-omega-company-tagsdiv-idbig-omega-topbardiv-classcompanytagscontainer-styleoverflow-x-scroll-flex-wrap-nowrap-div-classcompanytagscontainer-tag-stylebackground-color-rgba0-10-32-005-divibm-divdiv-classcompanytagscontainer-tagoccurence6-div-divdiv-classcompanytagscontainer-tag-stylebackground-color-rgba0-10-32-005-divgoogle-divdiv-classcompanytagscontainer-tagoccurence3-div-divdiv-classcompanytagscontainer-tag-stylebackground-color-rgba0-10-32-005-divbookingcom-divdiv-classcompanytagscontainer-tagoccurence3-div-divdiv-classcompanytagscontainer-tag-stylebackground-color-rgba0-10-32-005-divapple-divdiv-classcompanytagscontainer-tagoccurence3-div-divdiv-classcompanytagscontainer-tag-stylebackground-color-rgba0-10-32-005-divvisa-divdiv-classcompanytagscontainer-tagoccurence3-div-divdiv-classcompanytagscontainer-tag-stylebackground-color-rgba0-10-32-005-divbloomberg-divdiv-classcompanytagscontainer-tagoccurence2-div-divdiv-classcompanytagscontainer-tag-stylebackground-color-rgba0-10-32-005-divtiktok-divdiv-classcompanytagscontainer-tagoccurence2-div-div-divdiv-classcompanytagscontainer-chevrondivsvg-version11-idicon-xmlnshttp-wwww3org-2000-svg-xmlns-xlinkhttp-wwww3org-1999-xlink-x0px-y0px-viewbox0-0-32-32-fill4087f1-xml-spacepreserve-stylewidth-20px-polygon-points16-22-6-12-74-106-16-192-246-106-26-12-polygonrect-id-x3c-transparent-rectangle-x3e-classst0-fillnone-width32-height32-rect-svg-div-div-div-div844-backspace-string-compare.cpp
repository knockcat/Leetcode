class Solution {
public:
    
    string solve(string& str, int n)
    {
        int k = 0;
        
        for(int i = 0; i < n; ++i)
        {
            if(str[i] == '#')
            {
                k = max(0, --k);
            }
            else
            {
                str[k++] = str[i];
            }
        }
        
        return str.substr(0, k);
    }
    
    bool backspaceCompare(string s, string t) {

        int n = s.size(), m = t.size();
        
        return (solve(s, n) == solve(t, m));
        
    }
};