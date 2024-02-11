class Solution {
public:
    
    int maxPalindromesAfterOperations(vector<string>& words) {
        
        int n = words.size();
        
        map<int,int> mp;
        
        for(auto& word : words)
        {
            for(auto& ch : word)
                ++mp[ch];
        }
        
        long long ev = 0, odd = 0;
        
        for(auto& [f,e] : mp)
        {
            if(e & 1)
            {
                ev += (e-1);
                ++odd;
            }
            else
                ev += e;
        }
        
        int cnt = 0;
        
        sort(words.begin(), words.end(), [&](const auto& a, const auto& b){
            return a.size() < b.size();
        });
        
        for(int i = 0; i < words.size(); ++i)
        {
            int sz = words[i].size();
            
            if(sz & 1)
            {
               if(odd > 0)
               {
                   --odd;
               }
               else if(ev >= 2)
               {
                   ++odd;
                   ev -= 2;
               }
               --sz;
            }
           
            if(ev >= sz)
            {
                ev -= sz;
                ++cnt;
            }
            
            
        }
        
        return cnt;
    }
};