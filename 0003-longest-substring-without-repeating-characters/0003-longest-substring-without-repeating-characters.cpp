class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        
        int i = 0, j = 0, n = s.size();
        
        unordered_map<int,int> mp;
        
        int ans = 0;
        
        while( j < n)
        {
            ++mp[s[j]];
            
            if(mp.size() == j - i + 1)
                ans = max(ans, j - i + 1);
            else if(mp.size() < j - i + 1)
            {
                --mp[s[i]];
                if(mp[s[i]] == 0)
                    mp.erase(s[i]);
                ++i;
            }
            
            ++j;
        }
        
        return ans;
    }
};