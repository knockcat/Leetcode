class Solution {

private:
    void helper(int idx ,string ds, string& digits, map<char, vector<char>>& mp, vector<string>& ans)
    {
        if(idx == digits.size())
        {
            if(!ds.empty())
                ans.push_back(ds);
            return;
        }
        
     
        vector<char> curr = mp[digits[idx]];

        for(int j = 0; j < curr.size(); ++j)
        {
            ds.push_back(curr[j]);
            helper(idx+1, ds, digits, mp, ans);
            ds.pop_back();
        }
        
        
    }
    
public:
    vector<string> letterCombinations(string digits) {
         
        map<char,vector<char>> mp;
        
        mp['2'] = {'a','b','c'};
        mp['3'] = {'d','e','f'};
        mp['4'] = {'g','h','i'};
        mp['5'] = {'j','k','l'};
        mp['6'] = {'m','n','o'};
        mp['7'] = {'p','q','r','s'};
        mp['8'] = {'t','u','v'};
        mp['9'] = {'w','x','y','z'};
        
        vector<string> ans;
        
        helper(0, "",digits, mp, ans);
        
        return ans;
        
    }
};