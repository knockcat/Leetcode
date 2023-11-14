class Solution {
public:
    int countPalindromicSubsequence(string s) {
        
        int n = s.size();
        
        unordered_map<char, vector<int>> mp;
        unordered_map<char, int> firstOccurence, lastOccurence;
        int palindrome = 0;
        
        for(int i = 0; i < n; ++i)
        {
            if(firstOccurence.find(s[i]) == firstOccurence.end())
            {   
                firstOccurence[s[i]] = i;
            }
            
            lastOccurence[s[i]] = i;
            
            mp[s[i]].push_back(i);
        }
        
        for(int ch = 'a'; ch <= 'z'; ++ch)
        {
            int left = firstOccurence[ch];
            int right = lastOccurence[ch];
            
            if(right - left <= 1)
                continue;
            
            for(char x = 'a'; x <= 'z'; ++x)
            {
                if(mp.find(x) != mp.end())
                {
                    int ub = upper_bound(mp[x].begin(), mp[x].end(), left) - mp[x].begin();
                    
                    if(ub == mp[x].size())
                        continue;
                    
                    int idx = mp[x][ub];
                    
                    if(idx < right)
                        ++palindrome;
                }
            }
        }
        
        return palindrome;
    }
};