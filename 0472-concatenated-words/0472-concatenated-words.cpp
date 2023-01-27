class Solution {
public:
    
    bool helper(string str, unordered_map<string,int>& mp, vector<string>& words)
    {
        int n = str.size();
        
        for(int i = 0; i < n; ++i)
        {
            string left = str.substr(0,i);
            string right = str.substr(i);
            
            if(mp[left] and (mp[right] or helper(right,mp,words)))
                return true;
        }
        return false;
    }
    
    vector<string> findAllConcatenatedWordsInADict(vector<string>& words) {
        
        unordered_map<string,int> mp;
        
        for(auto itr : words)
            ++mp[itr];
        
        vector<string> ans;
        
        for(auto itr : words)
        {
            if(helper(itr,mp, words))
                ans.push_back(itr);
        }
        
        return ans;
        
    }
};