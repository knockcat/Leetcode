class Solution {
public:
    
    int numDistinct(string s, string t) {
       
        int n = s.size(), m = t.size();
        vector<double> prev(m+1,0);
        
        for(int i = 0; i<=n; ++i)
            prev[0] = 1;
        
        for(int i= 1; i<=n; ++i)
        {
            for(int j= m; j>=1; --j)
            {
                if(s[i-1] == t[j-1])
                    prev[j] = prev[j-1] + prev[j];
                else
                    prev[j] = prev[j];
            }
        }
        return (int)prev[m];
    }
};