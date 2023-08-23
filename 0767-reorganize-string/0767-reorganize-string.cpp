class Solution {
public:
    string reorganizeString(string s) {
        
        int n = s.size();
        
        vector<int> freq(26, 0);
        
        int maxFreq = 0;
        
        char maxFreqCharacter;
        
        for(auto& ch : s)
        {
            ++freq[ch - 'a'];
            
            if(freq[ch-'a'] > (n+1)/2)
                return "";
            
            if(freq[ch-'a'] > maxFreq)
            {
                maxFreq = freq[ch-'a'];
                maxFreqCharacter = ch;
            }
        }
        
        int i = 0;
        
        string ans(n,' ');
        
        while(freq[maxFreqCharacter - 'a'] > 0)
        {
            ans[i] = maxFreqCharacter;
            
            --freq[maxFreqCharacter - 'a'];
            
            i += 2;
        }
        
        for(char ch = 'a'; ch <= 'z'; ++ch)
        {
            while(freq[ch - 'a'] > 0)
            {
                if(i >= n)
                    i = 1;
                
                ans[i] = ch;
                
                --freq[ch - 'a'];
                i += 2;
            }
        }
        
        return ans;
    }
};