class Solution {
public:
    bool buddyStrings(string s, string goal) {
        
        int n = s.size(), m = goal.size();
        
        if(n != m)
            return false;
        
        int cnt = 0, have = 0;
        
        unordered_map<char,int> mp, mp2;
        
        for(int i = 0; i < n; ++i)
        {
            if(s[i] != goal[i])
                ++cnt;
            
            ++mp[s[i]];
            
            ++mp2[goal[i]];
            
            have = max(have, mp[s[i]]);
        }
        
        for(auto itr : mp)
        {
            if(mp[itr.first] != mp2[itr.first])
                return false;
        }
        
        return cnt == 2 or (cnt == 0 and have > 1);
        
    }
};