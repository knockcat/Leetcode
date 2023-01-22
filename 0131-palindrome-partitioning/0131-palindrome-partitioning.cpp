class Solution {
public:
    
    bool isPalindrome(string str , int start, int end)
    {
        while(start <= end)
        {
            if(str[start++] == str[end--])
            {
                continue;
            }
            return false;
        }
        return true;
    }
    
    void helper(int idx, string& s, vector<string> ds, vector<vector<string>>& res)
    {
        if(idx == s.size())
        {
            res.push_back(ds);
            return ;
        }
        
        for(int i = idx; i<s.size(); ++i)
        {
            if(isPalindrome(s, idx, i))
            {
                ds.push_back(s.substr(idx,i - idx + 1));
                helper(i+1, s, ds, res);
                ds.pop_back();
            }
        }
    }
    
    vector<vector<string>> partition(string s) {
        
        vector<string> ds;
        vector<vector<string> > res;
        
        helper(0,s, ds, res);
        
        return res;
        
    }
};