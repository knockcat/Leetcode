class Solution {
public:
    int maxVowels(string s, int k) {
        
        int i = 0, j = 0, n = s.size();
        
        int currCnt = 0, ans = 0;
        
        unordered_map<char,int> mp;
        
        
        auto isVowel = [&](char ch){
            return (ch == 'a' or ch == 'A' or ch == 'e' or ch == 'E' or ch == 'i' or ch == 'I' or ch == 'o' or ch == 'O' or ch == 'u' or ch == 'U');
        };
        
        
        while(j < n)
        {
            ++mp[s[j]];
            
            if(isVowel(s[j]))
                ++currCnt;
            
            if(j - i + 1 == k)
            {
                ans = max(ans, currCnt);
                
                if(isVowel(s[i]))
                    --currCnt;
                
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
