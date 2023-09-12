class Solution {
public:
    int minDeletions(string s) {
        
        unordered_map<char, int> mp;
        
        for(auto& itr : s)
            ++mp[itr];
        
        priority_queue<int> pq;
        
        for(auto&itr : mp)
        {
            pq.push(itr.second);
        }
        
        int counter = 0;
        
        while(pq.size() >= 2)
        {
            int a = pq.top(); pq.pop();
            int b = pq.top(); pq.pop();
            
            if(a == b)
            {
                ++counter;
                if(--a > 0)
                    pq.push(a);
                pq.push(b);
            }
            else
                pq.push(b);
        }
        
        return counter;
    }
};