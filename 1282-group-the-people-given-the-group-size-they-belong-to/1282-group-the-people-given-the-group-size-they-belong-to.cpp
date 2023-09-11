class Solution {
public:
    vector<vector<int>> groupThePeople(vector<int>& groupSizes) {
        
        int n = groupSizes.size();
        
        unordered_map<int,vector<int>> mp;
        
        vector<vector<int>> ans;
        
        for(int i = 0; i < n; ++i)
        {
            if(mp.find(groupSizes[i]) == mp.end())
            {
                mp[groupSizes[i]].push_back(i);
            }
            else
            {
                if(mp[groupSizes[i]].size() == groupSizes[i] )
                {
                    ans.push_back(mp[groupSizes[i]]);
                    mp.erase(groupSizes[i]);
                }
               
                mp[groupSizes[i]].push_back(i);
            }
        }
        
        for(auto& itr : mp)
        {
            ans.push_back(itr.second);
        }
        
        return ans;
    }
};