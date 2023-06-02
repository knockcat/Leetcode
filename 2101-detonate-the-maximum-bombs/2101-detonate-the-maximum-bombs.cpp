#define ll long long int

class Solution {
    
private:
    void dfs(int sv, vector<int> adj[], vector<bool>& visited, ll& c)
    {
        visited[sv] = true;
        
        ++c;
        
        for(auto itr : adj[sv])
        {
            if(!visited[itr])
                dfs(itr, adj, visited, c);
        }
    }
    
public:
    int maximumDetonation(vector<vector<int>>& bombs) {
        
        int n = bombs.size();
        
        vector<int> adj[n];
        
        for(int i = 0; i < n; ++i)
        {
            ll x1 = bombs[i][0];
            ll y1 = bombs[i][1];
            ll rad = bombs[i][2];
            
            for(int j = 0; j < n; ++j)
            {
                if(i != j)
                {
                    ll x2 = bombs[j][0];
                    ll y2 = bombs[j][1];
                   
                    
                    ll x = abs(x1 - x2);
                    ll y = abs(y1 - y2);
                    
                    if((x*x) + (y*y) <= (rad*rad))
                    {
                        adj[i].push_back(j);
                    }
                }
            }
        }
        
        ll ans = 0;
        
        for(int i = 0; i < n; ++i)
        {
            vector<bool> visited(n, false);
            
            ll c = 0;
            
            dfs(i, adj, visited, c);
            
            ans = max(ans, c);
        }
        
        return ans;
        
    }
};