class Solution {
public:
    long long maximumImportance(int n, vector<vector<int>>& roads) {
        
        vector<int> adj[n+1];
        vector<int> indegree(n, 0);
        map<pair<int,int>, int> have;
        
        for(auto& edge : roads)
        {
            ++indegree[edge[0]];
            ++indegree[edge[1]];
            adj[edge[0]].push_back(edge[1]);
            adj[edge[1]].push_back(edge[0]);
        }
        
        vector<pair<int,int>> vp;
        
        for(int i = 0; i < n; ++i)
        {
            vp.push_back({indegree[i], i});
        }
        
        sort(vp.begin(), vp.end());
        
        vector<int> vals(n, 0);
        
        for(int i = 0; i < n; ++i)
        {
            vals[vp[i].second] = i+1;
        }
        
        vector<bool> visited(n, false);
        
        long long ans = 0;
        
        for(int i = 0; i < n; ++i)
        {
            for(auto& node : adj[i])
            {
                int a = i, b = node;
                if(a > b) swap(a, b);
                
                if(have.find({a, b}) == have.end())
                {
                    ans += vals[a];
                    ans += vals[b];
                    ++have[{a, b}];
                }
            }
        }
        
        return ans;
        
    }
};