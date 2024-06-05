class Solution {
public:
    vector<string> commonChars(vector<string>& words) {
     
        int n = words.size();
        
        vector<int> freq(26, 0);
        
        for(int i = 0; i < n; ++i)
        {
            vector<int> curr(26, 0);
            
            for(int j = 0; j < words[i].size(); ++j)
                ++curr[words[i][j] - 'a'];
                    
            if(i != 0)
            {
                for(int j = 0; j < 26; ++j)
                    curr[j] = min(curr[j], freq[j]);
            }
            
            freq = curr;
        }
        
        vector<string> ans;
        
        for(int i = 0; i < 26; ++i)
        {
            for(int j = 0; j < freq[i]; ++j)
            {
              ans.push_back(string(1, 'a' + i));
            }
        }
        
        return ans;
    }
};