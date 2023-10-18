//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
    vector<int> eventualSafeNodes(int V, vector<int> adj[]) {
        // code here
        
        
        vector<int> revAdj[V+1];
        
        for(int i = 0; i < V; ++i)
        {
            for(auto& itr : adj[i])
            {
                revAdj[itr].push_back(i);
            }
        }
        
        vector<int> indegree(V+1,0);
        
        for(int i = 0; i < V; ++i)
        {
            for(auto& itr : revAdj[i])
                ++indegree[itr];
        }
        
        queue<int> q;
        
        for(int i = 0; i < V; ++i)
        {
            if(indegree[i] == 0)
                q.push(i);
        }
        
        
        vector<int> safe;
        
        while(!q.empty())
        {
            int curr = q.front();
            q.pop();
            
            safe.push_back(curr);
            
            for(auto& itr : revAdj[curr])
            {
                --indegree[itr];
                
                if(indegree[itr] == 0)
                    q.push(itr);
            }
        }
        
        sort(safe.begin(), safe.end());
        
        return safe;
    }
};


//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {

        int V, E;
        cin >> V >> E;
        vector<int> adj[V];

        for (int i = 0; i < E; i++) {
            int u, v;
            cin >> u >> v;
            adj[u].push_back(v);
        }

        Solution obj;
        vector<int> safeNodes = obj.eventualSafeNodes(V, adj);
        for (auto i : safeNodes) {
            cout << i << " ";
        }
        cout << endl;
    }
}

// } Driver Code Ends