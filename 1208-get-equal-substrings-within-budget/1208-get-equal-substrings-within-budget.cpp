class Solution {
public:
    int equalSubstring(string s, string t, int maxCost) {
        
        int n = s.size();
        
        map<int, int> mp;
        
        for(int i = 0; i < n; ++i)
        {
            mp[i] = abs(s[i] - t[i]);
        }
        
        int currCost = 0, len = 0;
        
        int i = 0, j = 0;
        
        while(j < n)
        {
            currCost += mp[j];
            
            while(currCost > maxCost)
            {
                currCost -= mp[i];
                ++i;
            }
            
            len = max(len, j - i + 1);
            ++j;
        }
        
        return len;
        
    }
};