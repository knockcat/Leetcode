//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution 
{
    public:
    //Function to find a Mother Vertex in the Graph.
    
    void dfs(int sv, vector<bool>& visited, vector<int> adj[])
    {
        visited[sv] = true;
        
        for(auto& itr : adj[sv])
        {
            if(!visited[itr])
                dfs(itr, visited, adj);
        }
    }
    
	int findMotherVertex(int V, vector<int>adj[])
	{
	    // Code here
	    
	    int mv = -1;
	    
	    vector<bool> visited(V+1, false);
	    
	    for(int i = 0; i < V; ++i)
	    {
	        if(!visited[i])
	        {
	            dfs(i, visited, adj);
	            mv = i;
	        }
	    }
	    
	    for(int i = 0; i < V; ++i)
	        visited[i] = 0;
	       
	    dfs(mv, visited, adj);
	    
	    for(int i = 0; i < V; ++i)
	    {
	        if(visited[i] == 0)
	            return -1;
	    }
	    
	    return mv;
	}

};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int V, E;
		cin >> V >> E;
		vector<int>adj[V];
		for(int i = 0; i < E; i++){
			int u, v;
			cin >> u >> v;
			adj[u].push_back(v);
		}
		Solution obj;
		int ans = obj.findMotherVertex(V, adj);
		cout << ans <<"\n";
	}
	return 0;
}
// } Driver Code Ends