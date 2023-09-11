class Solution {
public:
    vector<vector<int>> groupThePeople(vector<int>& groupSizes) {
        
        int n = groupSizes.size();
        
        unordered_map<int,vector<int>> mp;
        
        vector<vector<int>> ans;
        
        for(int i = 0; i < n; ++i)
        {
            mp[groupSizes[i]].push_back(i);
            
            if(mp[groupSizes[i]].size() == groupSizes[i] )
            {
                ans.push_back(mp[groupSizes[i]]);
                mp[groupSizes[i]].clear();
            }
        }    
        
        return ans;
    }
};