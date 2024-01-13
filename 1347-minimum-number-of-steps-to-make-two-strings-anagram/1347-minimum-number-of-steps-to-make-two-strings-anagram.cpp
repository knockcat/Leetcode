class Solution {
public:
    int minSteps(string s, string t) {
        
        map<char, int> mp;
        
        int need = 0;
        
        for(auto& ele : s)
            ++mp[ele];
        
        for(auto& ele : t)
        {
            if(mp[ele] > 0)
            {
                --mp[ele];
                if(mp[ele] == 0)
                    mp.erase(ele);
            }
            else
                ++need;
        }
       
        return need;
    }
};