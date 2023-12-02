class Solution {
public:
    int countCharacters(vector<string>& words, string chars) {
        
        int counter = 0;
        
        unordered_map<char ,int> mp;
        
        for(auto& ch : chars)
            ++mp[ch];
        
        for(auto& word : words)
        {
            bool canFormed = true;
            
            unordered_map<char, int> freq;
            
            for(auto& ch : word)
            {
                ++freq[ch];
            }
            
            for(auto& ch : word)
            {
                if(freq[ch] > mp[ch])
                {
                    canFormed = false;
                    break;
                }
            }
            
            if(canFormed)
                counter += word.size();
        }
        
        return counter; 
        
    }
};