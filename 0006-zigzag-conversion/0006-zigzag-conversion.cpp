class Solution {
public:
    string convert(string s, int numRows) {
        
        int n = s.size();
        
        vector<string> v(numRows);
        string ans;
        
        if(numRows == 1)
            return s;
        
        int k = 0;
        bool ok = true;
        for(int i = 0; i<n; ++i)
        {
            if(ok)
            {
                v[k].push_back(s[i]);
                ++k;
            }
            else
            {
                v[k].push_back(s[i]);
                --k;
            }
            if(k == numRows)
            {
                k -= 2;
                ok = false;
            }
            if(k == 0)
            {
                ok = true;
            }
        }
        
        // for(int i = 0; i < numRows; ++i)
        // {
        //     cout<<i << " "<<v[i]<<endl;
        // }
        
        for(auto itr : v)
        {
            ans += itr;
        }
        
        return ans;
        
    }
};