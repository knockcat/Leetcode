class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
        
        priority_queue<int> pq(stones.begin(),stones.end());
        
        while(!pq.empty())
        {
            int a, b;
            
            a = pq.top();
            pq.pop();
            
            if(pq.empty())
                return a;
            else
            {
                b = pq.top();
                pq.pop();
            }
            
            if(a == b)
                continue;
            else
                pq.push(a - b);
        }
        
        return 0;
    }
};