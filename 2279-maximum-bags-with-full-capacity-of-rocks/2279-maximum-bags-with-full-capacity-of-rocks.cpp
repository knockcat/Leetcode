class Solution {
public:
    int maximumBags(vector<int>& capacity, vector<int>& rocks, int additionalRocks) {
        
        priority_queue<int,vector<int>, greater<int>> pq;
        
        int n = capacity.size(), count = 0;
        
        for(int i = 0; i<n; ++i)
        {
            pq.push(capacity[i] - rocks[i]);
        }
        
        while(!pq.empty())
        {
            int here = pq.top();
            if(here <= additionalRocks)
            {
                ++count;
                additionalRocks -= here;
                pq.pop();
            }
            else
            {
                break;
            }
        }
        
        return count;
    }
};