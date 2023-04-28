class Solution {
public:
    
    int numSimilarGroups(vector<string>& strs) {

        int n = strs.size();
        
        vector<bool> visited(n,0);
        
        int cnt = 0;
        
        auto isSimilar = [&](string& a, string& b)
        {
            int n = a.size(), m = b.size();
            int c = 0;
            if(n != m)
                return false;
            
            for(int i = 0; i<n; ++i)
            {
                if(a[i] != b[i])
                    ++c;
            }
            
            return (c == 0 or c == 2);
        };
        
        function<void(int)> dfs = [&](int sv) {
            visited[sv] = true;
            
            for(int i = 0; i<n; ++i)
            {
                if(!visited[i] and isSimilar(strs[sv],strs[i]))
                    dfs(i);
            }
        };
        
        for(int i = 0; i < n; ++i)
        {
            if(!visited[i])
            {
                ++cnt;
                dfs(i);
            }
        }
        
        return cnt;
    
    }
};
    