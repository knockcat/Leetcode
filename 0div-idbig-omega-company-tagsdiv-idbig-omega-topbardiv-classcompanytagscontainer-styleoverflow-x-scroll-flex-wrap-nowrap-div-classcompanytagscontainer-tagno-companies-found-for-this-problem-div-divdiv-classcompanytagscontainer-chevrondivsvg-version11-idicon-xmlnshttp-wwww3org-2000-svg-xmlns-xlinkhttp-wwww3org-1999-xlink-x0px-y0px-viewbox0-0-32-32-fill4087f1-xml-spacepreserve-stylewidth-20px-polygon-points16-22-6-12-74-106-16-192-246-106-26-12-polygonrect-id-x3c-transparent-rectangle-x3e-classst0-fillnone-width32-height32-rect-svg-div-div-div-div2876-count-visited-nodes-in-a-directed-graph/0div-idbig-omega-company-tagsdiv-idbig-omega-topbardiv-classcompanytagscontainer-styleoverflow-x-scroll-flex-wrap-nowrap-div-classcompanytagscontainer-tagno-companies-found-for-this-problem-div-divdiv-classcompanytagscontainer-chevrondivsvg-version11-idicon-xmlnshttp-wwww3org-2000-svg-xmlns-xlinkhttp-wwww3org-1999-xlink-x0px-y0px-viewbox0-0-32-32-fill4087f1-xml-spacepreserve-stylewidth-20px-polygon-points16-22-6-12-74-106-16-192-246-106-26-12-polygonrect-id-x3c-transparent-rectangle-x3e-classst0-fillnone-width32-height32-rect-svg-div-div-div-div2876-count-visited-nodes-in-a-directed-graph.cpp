class Solution {
public:
    vector<int> countVisitedNodes(vector<int>& edges) {
        
        int n = edges.size();
        
        vector<int> indegree(n, 0);
        
        for(int i = 0; i < n; ++i)
        {
            ++indegree[edges[i]];
        }
        
        vector<bool> visited(n, false);
        
        queue<int> q;
        stack<int> st;
        
        for(int i = 0; i < n; ++i)
        {
            if(indegree[i] == 0)
            {
                q.push(i);
            }
        }
        
        while(!q.empty())
        {
            int curr = q.front();
            visited[curr] = true;
            st.push(curr);
            q.pop();
            
            if(--indegree[edges[curr]] == 0)    
            {
                q.push(edges[curr]);
            } 
        }
        
        vector<int> res(n, 0);
        
        function<void(int)> dfs = [&](int sv)
        {
            int length = 0;
            
            for(int i = sv; !visited[i]; i = edges[i])
            {
                visited[i] = true;
                ++length;
            }
            
            res[sv] = length;
            
            for(int i = edges[sv]; i != sv; i = edges[i])
            {
                res[i] = length;
            }
        };
        
        for(int i = 0; i < n; ++i)
        {   
            if(!visited[i])
            {
                dfs(i);
            }
        }
        
        for(int i = 0; i < n; ++i)
        {
            if(!visited[i])
                dfs(i);
        }
        
        while(!st.empty())
        {
            int curr = st.top();
            res[curr] = res[edges[curr]] + 1;
            st.pop();
        }
        
        return res;
        
    }
};