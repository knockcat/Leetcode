class Solution {
public:
    vector<vector<int>> kSmallestPairs(vector<int>& nums1, vector<int>& nums2, int k) {
        
        int n = nums1.size();
        int m = nums2.size();
        
        priority_queue<pair<int,pair<int,int>> > pq;
        
        for(int i = 0; i < n; ++i)
        {
            for(int j = 0; j < m; ++j)
            {
                int sum = nums1[i] + nums2[j];
                
                if(pq.size() < k)
                {
                    pq.push({sum, {nums1[i], nums2[j]}});
                }
                else if(sum < pq.top().first)
                {
                    pq.pop();
                    pq.push({sum, {nums1[i], nums2[j]}});
                }
                else
                    break;
            }
        }
        
        vector<vector<int> > ans;
        
        while(!pq.empty())
        {
            int a = pq.top().second.first;
            int b = pq.top().second.second;
            
            ans.push_back({a, b});
            
            pq.pop();
        }
    
        return ans;
        
    }
};