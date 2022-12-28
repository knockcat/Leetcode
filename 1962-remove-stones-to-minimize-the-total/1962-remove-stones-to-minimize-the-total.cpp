class Solution {
public:
    int minStoneSum(vector<int>& piles, int k) {
        
        priority_queue<int> pq;
        
        for(auto itr : piles)
            pq.push(itr);
        
        while(!pq.empty())
        {
            --k;
            int here = pq.top();
            pq.pop();
            
            here -= here/2;
            pq.push(here);
            if(!k)
                break;
        }
        
        int ans = 0;
        while(!pq.empty())
        {
            ans += pq.top();
            pq.pop();
        }
        
        return ans;
    }
};