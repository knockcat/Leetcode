//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// Back-end complete function Template for C++

class Solution{
public:

    void dfs(int node, int sv, vector<int> adj[], vector<bool>& visited, vector<vector<int>>& res)
    {
        visited[sv] = true;
        res[node][sv] = true;
        
        for(auto& itr : adj[sv])
        {
            if(!visited[itr])
                dfs(node, itr, adj, visited, res);
        }
    }

    vector<vector<int>> transitiveClosure(int N, vector<vector<int>> graph)
    {
        // code here
        
        vector<int> adj[N+1];
        
        for(int i = 0; i < N; ++i)
        {
            for(int j = 0;  j < N; ++j)
            {
                if(graph[i][j] == 1)
                    adj[i].push_back(j);
            }
        }
        
        vector<vector<int>> res(N, vector<int>(N, 0));
        
        for(int i = 0; i < N; ++i)
        {
            vector<bool> visited(N, false);
            dfs(i, i, adj, visited, res);
        }
        
        return res;
        
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int N;
        cin>>N;
        vector<vector<int>> graph(N, vector<int>(N, -1));
        for(int i = 0;i < N;i++)
            for(int j=0;j<N;j++)
            cin>>graph[i][j];
        
        Solution ob;
        vector<vector<int>> ans = ob.transitiveClosure(N, graph);
        for(int i = 0;i < N;i++)
            {for(int j = 0;j < N;j++)
                cout<<ans[i][j]<<" ";
        cout<<"\n";}
    }
    return 0;
}
// } Driver Code Ends