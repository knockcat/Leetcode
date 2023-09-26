class Solution {
public:
    string removeDuplicateLetters(string s) {
        
        int n = s.size();
        
        vector<int> freq(26, 0);
        
        vector<int> visited(26, 0);
        
        string ans;
        
        for(int i = 0; i < n; ++i)
        {
            ++freq[s[i] - 'a'];
        }
        
        for(int i = 0; i < n; ++i)
        {   
            while(!ans.empty() and !visited[s[i] - 'a'] and s[i] < ans.back() and freq[ans.back()-'a'])
            {
                visited[ans.back() - 'a'] = false;
                ans.pop_back();
            }
            
            if(!visited[s[i] - 'a'])
            {
                ans += s[i];
                visited[s[i] - 'a'] = 1;
            }
            
            --freq[s[i] - 'a'];                                                            
        }
        
        return ans;
    }
};