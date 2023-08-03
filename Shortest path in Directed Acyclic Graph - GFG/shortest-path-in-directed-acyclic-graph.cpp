//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++
class Solution {
  public:
     vector<int> shortestPath(int N,int M, vector<vector<int>>& edges){
        // code here
        
        vector<pair<int,int>> adj[N+1];
        
        for(auto& itr : edges)
        {
            int u = itr[0];
            int v = itr[1];
            int dist = itr[2];
            
            adj[u].push_back({v, dist});
        }
        
        priority_queue<pair<int,int>, vector<pair<int,int>>, greater<pair<int,int>> > pq;
        
        vector<int> distance(N, 1e9);
        
        pq.push({0, 0});
        
        distance[0] = 0;
        
        while(!pq.empty())
        {
            auto curr = pq.top();
            
            pq.pop();
            
            int node = curr.second;
            int currDist = curr.first;
            
            for(auto itr : adj[node])
            {
                int childNode = itr.first;
                int childDist = itr.second;
                
                if(currDist + childDist < distance[childNode])
                {
                    distance[childNode] = currDist + childDist;
                    pq.push({distance[childNode], childNode});
                }
            }
        }
        
        for(int i = 0; i < N; ++i)
        {
            if(distance[i] == 1e9)
                distance[i] = -1;
        }
        
        return distance;
        
    }
};


//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        vector<vector<int>> edges;
        for(int i=0; i<m; ++i){
            vector<int> temp;
            for(int j=0; j<3; ++j){
                int x; cin>>x;
                temp.push_back(x);
            }
            edges.push_back(temp);
        }
        Solution obj;
        vector<int> res = obj.shortestPath(n, m, edges);
        for (auto x : res) {
            cout << x << " ";
        }
        cout << "\n";
    }
}

// } Driver Code Ends