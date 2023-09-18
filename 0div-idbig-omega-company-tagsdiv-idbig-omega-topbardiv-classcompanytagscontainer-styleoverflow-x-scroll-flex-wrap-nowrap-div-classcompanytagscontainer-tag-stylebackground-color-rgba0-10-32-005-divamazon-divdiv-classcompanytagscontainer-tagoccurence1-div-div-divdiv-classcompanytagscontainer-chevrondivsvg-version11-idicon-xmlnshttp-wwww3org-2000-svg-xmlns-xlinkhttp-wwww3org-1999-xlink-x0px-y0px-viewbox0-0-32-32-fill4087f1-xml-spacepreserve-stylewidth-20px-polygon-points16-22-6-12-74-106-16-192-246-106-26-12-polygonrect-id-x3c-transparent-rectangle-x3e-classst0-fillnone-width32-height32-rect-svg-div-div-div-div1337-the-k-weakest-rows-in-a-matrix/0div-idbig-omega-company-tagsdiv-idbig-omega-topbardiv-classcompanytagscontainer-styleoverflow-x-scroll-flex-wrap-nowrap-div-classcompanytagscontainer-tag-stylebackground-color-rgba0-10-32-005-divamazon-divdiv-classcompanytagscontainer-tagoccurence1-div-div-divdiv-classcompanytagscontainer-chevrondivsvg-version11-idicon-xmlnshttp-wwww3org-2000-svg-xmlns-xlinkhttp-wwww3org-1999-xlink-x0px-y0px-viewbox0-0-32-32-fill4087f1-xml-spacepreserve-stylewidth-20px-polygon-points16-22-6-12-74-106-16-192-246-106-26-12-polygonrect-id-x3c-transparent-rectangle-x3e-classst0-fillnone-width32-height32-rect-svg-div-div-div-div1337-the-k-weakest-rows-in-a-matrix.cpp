class Solution {
public:
    vector<int> kWeakestRows(vector<vector<int>>& mat, int k) {
        
        int n = mat.size();
        int m = mat[0].size();
        
        vector<int> ans;
        
        auto binarySearch = [&](vector<int>& arr)
        {
            int low = 0, high = m-1;
            
            while(low <= high)
            {
                int mid = (low + high) >> 1;
                
                if(arr[mid] == 0)
                    high = mid-1;
                else
                    low = mid+1;
            }
            return low;
        };
        
        priority_queue<pair<int,int> > pq;
        
        for(int i = 0; i < n; ++i)
        {
            int currRowOnesCount = binarySearch(mat[i]);
            
            pq.push({currRowOnesCount, i});
            
            if(pq.size() > k)
                pq.pop();
        }
        
        while(k--)
        {
            int kthStrongestIdx = pq.top().second;
            pq.pop();
            
            ans.push_back(kthStrongestIdx);
        }
        
        reverse(ans.begin(), ans.end());
        
        return ans;
    }
};