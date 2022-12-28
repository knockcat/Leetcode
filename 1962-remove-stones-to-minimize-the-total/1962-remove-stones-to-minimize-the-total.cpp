class Solution {
public:
    int minStoneSum(vector<int>& piles, int k) {
        
        priority_queue<int> pq;
        
        for(auto itr : piles)
            pq.push(itr);
        
        int res = accumulate(begin(piles),end(piles),0);
        
        while(k--)
        {
            int here = pq.top();
            pq.pop();
            pq.push(here - here/2);
            res -= here/2;
        }
        
        return res;
    }
};