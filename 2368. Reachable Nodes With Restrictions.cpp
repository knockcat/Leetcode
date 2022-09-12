// 2368.✅ Reachable Nodes With Restrictions

class Solution
{
public:
    void adjacencylist(vector<int> adj[], int V)
    {
        for (int i = 0; i < V; i++)
        {
            cout << i << "->";
            for (int &x : adj[i])
            {
                cout << x << " ";
            }
            cout << endl;
        }
    }

    void dfsOfGraph(int sv, vector<bool> &visited, vector<int> adj[])
    {
        visited[sv] = true;

        for (auto itr : adj[sv])
        {
            if (!visited[itr])
                dfsOfGraph(itr, visited, adj);
        }
    }

    int reachableNodes(int n, vector<vector<int>> &edges, vector<int> &restricted)
    {

        vector<int> graph[n + 1];
        for (int i = 0; i < edges.size(); ++i)
        {
            graph[edges[i][0]].push_back(edges[i][1]);
            graph[edges[i][1]].push_back(edges[i][0]);
        }

        vector<bool> visited(n + 1, 0);
        int count = 0;
        for (int i = 0; i < restricted.size(); ++i)
        {
            visited[restricted[i]] = true;
        }

        // for(auto itr : visited)
        //     cout<<itr<<" ";
        // cout<<endl;
        dfsOfGraph(0, visited, graph);

        // cout<<endl;
        // adjacencylist(graph, n);

        //         for(auto itr : visited)
        //             cout<<itr<<" ";
        //         cout<<endl;
        for (auto itr : visited)
            if (itr == 1)
                ++count;

        // cout<<count<<endl;
        return count - restricted.size();
    }
};