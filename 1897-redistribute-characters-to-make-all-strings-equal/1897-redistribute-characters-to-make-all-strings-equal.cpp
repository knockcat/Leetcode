class Solution {
public:
    bool makeEqual(vector<string>& words) {
        
        int n = words.size();
        
        bool ok = true;
        
        vector<int> freq(26, 0);
        
        for(auto& word : words)
        {
            for(auto& ch : word)
                ++freq[ch-'a'];
                
        }
        
        for(auto& f : freq)
        {
            if(f and f % n != 0)
            {
                ok = false;
                break;
            }
        }
        
        return ok;
    }
};