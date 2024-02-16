class Solution {
public:
    int findLeastNumOfUniqueInts(vector<int>& arr, int k) {
        
        map<int, int> mp;
        
        for(auto& ele : arr)
            ++mp[ele];
        
        priority_queue<pair<int,int>, vector<pair<int,int>>, greater<pair<int,int>>> pq;
        
        for(auto&[f, e] : mp)
            pq.push({e, f});
        
        while(!pq.empty())
        {
            auto curr = pq.top();
            pq.pop();
            
            if(curr.first <= k)
            {
                k -= curr.first;
            }
            else
            {
                pq.push(curr);
                break;
            }
        }
        
        return (int)pq.size();
    }
};