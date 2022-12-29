class Solution {
public:
    vector<int> getOrder(vector<vector<int>>& tasks) {
        
        int n = tasks.size();
        
        vector<vector<int> > vp;
        for(int i = 0; i < n; ++i)
            vp.push_back({tasks[i][0],tasks[i][1],i});
        
        sort(vp.begin(),vp.end());
        
        priority_queue<vector<int>, vector<vector<int>>, greater<vector<int>> > pq;
        
        int endTime = vp[0][0], i = 0;
        vector<int> ans;
        
        while(i < n)
        {
            if(!pq.empty())
            {
                endTime += pq.top()[0];
                ans.push_back(pq.top()[1]);
                pq.pop();
            }
            while(i < n and vp[i][0] <= endTime)
            {
                pq.push({vp[i][1],vp[i][2],vp[i][1]});
                ++i;
            }
            if(i < n and endTime < vp[i][0] and pq.empty())
                endTime = vp[i][0];
        }
        
        while(!pq.empty())
        {
            ans.push_back(pq.top()[1]);
            pq.pop();
        }
        
        return ans;
        
    }
};