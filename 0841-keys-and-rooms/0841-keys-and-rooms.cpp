class Solution {
public:
    bool canVisitAllRooms(vector<vector<int>>& rooms) {
        
        int n = rooms.size();
        vector<int> visited(n,false);
        
        queue<int> q;
        q.push(0);
        
        while(!q.empty())
        {
            int curr = q.front();
            visited[curr] = true;
            q.pop();
            for(auto itr : rooms[curr])
            {
                if(!visited[itr])
                    q.push(itr);
            }
        }
        
        for(int i = 0; i<n; ++i)
            if(!visited[i]) return false;
        return true;
        
    }
};