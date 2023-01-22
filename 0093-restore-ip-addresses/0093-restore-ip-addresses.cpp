class Solution {
public:
    
    bool isValid(string str)
    {
        if(str[0] == '0')
            return false;
        
        int num = stoi(str);
        
        return num <= 255;
    }
    
    void helper(int idx, string& s, int part, string ans, vector<string>& res)
    {
        if(idx == s.size() or part == 4)
        {
            if(idx == s.size() and part == 4)
            {
                res.push_back(ans.substr(0,ans.size()-1));
            }
            return;
        }
        
        helper(idx + 1, s, part + 1, ans + s[idx] + "." , res);
        if(idx + 2 <= s.size() and isValid(s.substr(idx,2)))
            helper(idx + 2, s, part + 1, ans + s.substr(idx,2) + "." , res);
        if(idx + 3 <= s.size() and isValid(s.substr(idx,3)))
            helper(idx + 3, s, part + 1, ans + s.substr(idx,3) +"." , res);
    }
    
    vector<string> restoreIpAddresses(string s) {
        
        vector<string> res;
        
        helper(0, s, 0, "" , res);
        
        return res;
        
    }
};