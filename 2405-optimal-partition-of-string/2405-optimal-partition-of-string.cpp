class Solution {
public:
    int partitionString(string s) {
        
        int i = 0, j = s.size();
        
        int part = 1;
        map<char,int> mp;
        
        while(i < j)
        {
            if(mp.find(s[i]) != mp.end())    
            {
                ++part;
                mp.clear();
            }
            ++mp[s[i]];
            ++i;
        }
    
        return part;
        
    }
};