class Solution {
public:
    
    bool canFinish(int numCourses, vector<vector<int>>& prerequisites) {
        
        int n = numCourses;
        
        vector<int> adj[n+1];
        
        for(auto itr : prerequisites)
            adj[itr[1]].push_back(itr[0]);
        
        vector<int> indegree(n+1, 0);
        
        for(int i = 0; i < n; ++i)
        {
            for(auto itr : adj[i])
                ++indegree[itr];
        }
        
        queue<int> q;
        
        int cnt = 0;
        
        for(int i = 0; i < n; ++i)
        {
            if(indegree[i] == 0)
                q.push(i);
        }
        
        while(!q.empty())
        {
            int curr = q.front();
            q.pop();
            
            ++cnt;
            
            for(auto itr : adj[curr])
            {
                --indegree[itr];
                if(indegree[itr] == 0)
                    q.push(itr);
            }
        }
        
        return cnt == n;
    }
};