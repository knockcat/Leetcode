class Solution {
public:
    int minDeletionSize(vector<string>& strs) {
        
        int n = strs.size();
        int m = strs[0].size();
        
        unordered_set<int> used;
        
        for(int i = 1; i < n; ++i)
        {
            for(int j = 0; j < m; ++j)
            {
                if(used.count(j) > 0 or strs[i-1][j] == strs[i][j])
                    continue;
                if(strs[i-1][j] > strs[i][j])
                {
                    used.insert(j);
                    i = 0;
                }
                
                break;
            }
        }
        
        return used.size();
    }
};