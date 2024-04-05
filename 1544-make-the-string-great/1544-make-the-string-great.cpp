class Solution {
public:
    
    string makeGood(string s) {
        
        string ans;
        
        ans += s[0];
        
        int n = s.size();
        
        for(int i = 1; i < n; ++i)
        {
            if(!ans.empty() and tolower(ans.back()) == tolower(s[i]))
            {
                if(s[i] != ans.back())
                    ans.pop_back();
                else
                    ans += s[i];
            }
            else
                ans += s[i];
        }
        
        return ans;
        
    }
};