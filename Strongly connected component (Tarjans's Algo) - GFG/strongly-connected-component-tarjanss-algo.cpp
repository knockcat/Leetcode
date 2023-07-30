//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function template for C++

class Solution
{
	public:
    //Function to return a list of lists of integers denoting the members 
    //of strongly connected components in the given graph.
    
    void dfs(int sv, vector<int> adj[], vector<int>& tin, vector<int>& low, vector<bool>& inStack, stack<int>&st, vector<vector<int>>& res)
    {
      static int timer = 0;
      
      tin[sv] = low[sv] = timer;
    
      ++timer;
    
      st.push(sv);
    
      inStack[sv] = true;
    
      for(auto itr : adj[sv])
      {
        if(tin[itr] == -1)
        {
          dfs(itr, adj, tin, low, inStack, st, res);
          low[sv] = min(low[sv], low[itr]);
        }
        else if(inStack[itr])
        {
          // if node is visited and
          // if node is present in stack that means it is a back edge and if it is not present in stack
          // it is cross edge and we will do not consider cross edges.
    
          low[sv] = min(low[sv], tin[itr]);
        }
      }
    
      // if low[sv] == tin[sv] that means it is head node of the strong connected commonent
    
      if(low[sv] == tin[sv])
      {
        vector<int> scc;
        
        while(st.top() != sv)
        {
          scc.push_back(st.top());
          inStack[st.top()] = false;
          st.pop();
        }
        
        scc.push_back(sv);
        inStack[st.top()] = false;
        st.pop();
        
        sort(scc.begin(), scc.end());
        
        res.push_back(scc);
      }
      
    }
    
    vector<vector<int>> TarjansAlgorithm(vector<int> adj[], int n)
    {
      vector<vector<int>> res;
      
      vector<int> tin(n,-1), low(n,-1);
    
      vector<bool> inStack(n, false);
    
      stack<int> st;
    
      for(int i = 0; i < n; ++i)
      {
        if(tin[i] == -1)
          dfs(i, adj, tin, low, inStack, st, res);
      }
      
      sort(res.begin(), res.end());
      
      return res;
    }
    
    vector<vector<int>> tarjans(int V, vector<int> adj[])
    {
        //code here
        
        return TarjansAlgorithm(adj, V);
    }
};

//{ Driver Code Starts.


int main()
{
    
    int t;
    cin >> t;
    while(t--)
    {
        int V, E;
        cin >> V >> E;

        vector<int> adj[V];

        for(int i = 0; i < E; i++)
        {
            int u, v;
            cin >> u >> v;
            adj[u].push_back(v);
        }

        Solution obj;
        vector<vector<int>> ptr = obj.tarjans(V, adj);

        for(int i=0; i<ptr.size(); i++)
        {
            for(int j=0; j<ptr[i].size(); j++)
            {
                if(j==ptr[i].size()-1)
                    cout<<ptr[i][j];
                else
                    cout<<ptr[i][j]<<" ";
            }
            cout<<',';
        }
        cout<<endl;
    }

    return 0;
}


// } Driver Code Ends