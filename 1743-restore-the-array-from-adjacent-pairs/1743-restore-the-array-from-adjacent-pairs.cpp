class Solution {
public:
    vector<int> restoreArray(vector<vector<int>>& adjacentPairs) {
        
        unordered_map<int, vector<int>> adj;
        unordered_map<int,int> mp;
        
        int sv = -1;
        
        for(auto& itr : adjacentPairs)
        {
            adj[itr[0]].push_back(itr[1]);
            adj[itr[1]].push_back(itr[0]);
            
            ++mp[itr[0]];
            ++mp[itr[1]];
        }
        
        for(auto& [f, s] : mp)
        {
            if(s == 1)
                sv = f;
        }
        
        vector<int> ans;
        
        unordered_set<int> visited;
        
        function<void(int)> dfs = [&](int sv)
        {
            ans.push_back(sv);
            visited.insert(sv);
            
            for(auto& itr : adj[sv])
            {
                if(!visited.count(itr))
                    dfs(itr);
            }
        };
        
        // cout<<sv<<endl;
        
        dfs(sv);
        
        return ans;
        
    }
};