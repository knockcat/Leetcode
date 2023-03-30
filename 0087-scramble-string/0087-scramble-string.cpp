class Solution {
public:
    
    bool helper(string s1, string s2, unordered_map<string,bool>& mp)
    {
        int n = s1.size();
        
        if(s1 == s2)
        {
            mp.insert({s1+s2, true});
            return true;
        }
        
        if(mp.find(s1 + s2) != mp.end())
            return mp[s1+s2];
        
        for(int i = 1; i < n; ++i)
        {
            if(helper(s1.substr(0,i), s2.substr(n-i), mp) and helper(s1.substr(i),s2.substr(0,n-i), mp))
            {
                mp.insert({s1+s2,true});
                return true;
            }
            if(helper(s1.substr(0,i), s2.substr(0,i), mp) and helper(s1.substr(i), s2.substr(i),mp))
            {
                mp.insert({s1+s2,true});
                return true;
            }
        }
        
        mp.insert({s1+s2,false});
        return false;
    }
    
    bool isScramble(string s1, string s2) {
        
        unordered_map<string,bool> mp;
        return helper(s1, s2, mp);
        
    }
};