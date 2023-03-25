class Solution {
public:
    
    
    bool isPalindrome(int start, int end, string& str)
    {
        while(start <= end)
        {
            if(str[start] != str[end])
                return false;
            ++start,--end;
        }
        return true;
    }
    
    void helper(int idx, vector<string> ds, vector<vector<string>>& res, string& s)
    {
        if(idx == s.size())
        {
            res.push_back(ds);
            return;
        }
        
        for(int i = idx; i < s.size(); ++i)
        {
            if(isPalindrome(idx,i,s)){
                // cout<<s.substr(idx,i-idx+1)<<endl;
                ds.push_back(s.substr(idx,i-idx+1));
                helper(i+1,ds,res,s);
                ds.pop_back();
            }
        }
    }
    
    
    vector<vector<string>> partition(string s) {
        
        vector<string> ds;
        vector<vector<string>> res;
        
        helper(0,ds,res,s);
        
        return res;
        
    }
};