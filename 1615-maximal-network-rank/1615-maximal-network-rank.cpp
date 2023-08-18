class Solution {
    
public:
    int maximalNetworkRank(int n, vector<vector<int>>& roads) {
        
        vector<int> adj[n+1];
        
        map<pair<int,int>, int> mp;

        for(auto& itr : roads)
        {
            int u = itr[0];
            int v = itr[1];
            
            adj[u].push_back(v);
            adj[v].push_back(u);
            
            ++mp[{u,v}];
        }
        
        int maximalNetworkRank = 0;
        
        for(int i = 0; i < n; ++i)
        {
            for(int j = 0; j < n; ++j)
            {
                if(i == j)
                    continue;
                
                int nodeA = i;
                int nodeB = j;
                
                int currRank = adj[nodeA].size() + adj[nodeB].size();
                
                // not intitutive
                
                // for(auto& itr : adj[nodeA])
                // {
                //     if(itr == nodeB)
                //     {
                //         --currRank;
                //         break;
                //     }
                // }
                
                if(mp[{nodeA, nodeB}] or mp[{nodeB, nodeA}])
                    --currRank;
                
                maximalNetworkRank = max(maximalNetworkRank, currRank);
            }
        }
        
        return maximalNetworkRank;
        
    }
};