class Solution {
public:
    string smallestSubsequence(string s) {
        
        int n = s.size();
        
        vector<int> lastOccurence(26, -1);
        
        vector<bool> visited(26, false);
        
        for(int i = 0; i < n; ++i)
            lastOccurence[s[i] - 'a'] = i;
        
        string ans;
        
        for(int i = 0; i < n; ++i)
        {
            while(!ans.empty() and !visited[s[i] - 'a'] and s[i] < ans.back() and lastOccurence[ans.back() - 'a'] > i)
            {
                visited[ans.back() - 'a'] = false;
                
                ans.pop_back();
            }
            
            if(!visited[s[i] - 'a'])
            {
                ans += s[i];
                visited[s[i] - 'a'] = true;
            }          
        }
        
        return ans;
    }
};