class Solution {
public:
    int maxPalindromesAfterOperations(vector<string>& words) {
        
        vector<int> length;
        map<char, int> mp;
        
        for(auto& word : words)
        {
            for(auto& ch : word)
                ++mp[ch];
            length.push_back((int)word.size()/2);
        }
        
        int matching = 0, cnt = 0;
        
        for(auto&[f, e] : mp)
            matching += e/2;
        
        sort(length.begin(), length.end());
        
        for(int i = 0; i < length.size(); ++i)
        {
            if(matching >= length[i])
            {
                matching -= length[i];
                ++cnt;
            }
        }
        
        return cnt;
    }
};