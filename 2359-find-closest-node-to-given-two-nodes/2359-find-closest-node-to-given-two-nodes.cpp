class Solution {
public:
    
    void dfs(int node, vector<int>& edges, vector<int>& dist , vector<int>& visited, int distance)
    {
        if(node != -1 and !visited[node])    {
            visited[node] = 1;
            dist[node] = distance;
            dfs(edges[node], edges, dist, visited, distance + 1);
        }
    }
    
    int closestMeetingNode(vector<int>& edges, int node1, int node2) {
        
        int n = edges.size();
        
        vector<int> visited1(n,0), visited2(n,0), dist1(n,-1), dist2(n,-1);
        
        dfs(node1, edges, dist1, visited1, 0);
        dfs(node2 , edges, dist2, visited2, 0);
        
        int ans = edges.size();
        int res = -1;
        for(int i = 0; i<n; ++i){
            if(dist1[i] == -1 or dist2[i] == -1)
                continue;
            if(max(dist1[i], dist2[i]) < ans)
            {
                ans = max(dist1[i], dist2[i]);
                res = i;
            }
        }
        
        return (res == -1 ? -1 : res);
    }
};