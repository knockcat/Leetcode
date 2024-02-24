class Solution {
public:
    vector<int> findAllPeople(int n, vector<vector<int>>& meetings, int firstPerson) {
        
        vector<pair<int,int>> adj[n+1];
        
        int currTime = 0;
        
        for(auto& meet : meetings)
        {
            int person1 = meet[0];
            int person2 = meet[1];
            int meetingTime = meet[2];
            
            adj[person1].push_back({person2, meetingTime});
            adj[person2].push_back({person1, meetingTime});
        }
        
        priority_queue<pair<int,int>, vector<pair<int,int>>, greater<pair<int,int>>> q; // currTime node
        
        vector<bool> visited(n+1, false);
        
        vector<int> ans;
        
        q.push({0, 0});
        q.push({0, firstPerson});

        while(!q.empty())
        {
            int currTime = q.top().first;
            int person1 = q.top().second;
            
            q.pop();
            
            if(visited[person1])
                continue;
            
            visited[person1] = true;
            
            for(auto& meets : adj[person1])
            {
                int person2 = meets.first;
                int meetingTime = meets.second;
                
                if(!visited[person2] and currTime <= meetingTime)
                {
                    q.push({meetingTime, person2});  
                }
            }
        }
        
        for(int i = 0; i < n; ++i)
        {
            if(visited[i])
                ans.push_back(i);
        }
        
        return ans;
    }
};