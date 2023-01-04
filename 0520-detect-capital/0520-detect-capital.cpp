class Solution {
public:
    bool detectCapitalUse(string word) {
        
        int caps = 0;
        int n = word.size();
        
        for(auto itr : word)
        {
            if(isupper(itr))
                ++caps;
        }
        
        return caps == 0 or caps == n or (caps == 1 and isupper(word[0]));
        
    }
};