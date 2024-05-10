class Solution {
public:
    vector<int> kthSmallestPrimeFraction(vector<int>& arr, int k) {
        
        vector<pair<double, pair<int,int>>> res;
        
        int n = arr.size();
        
        for(int i = 0; i < n; ++i)
        {
            for(int j = n-1; j >= 0; --j)
            {
                if(i != j)
                {
                    res.push_back({((double)arr[i]/(double)arr[j]),{arr[i], arr[j]}});
                }
            }
        }
        
        sort(res.begin(), res.end());
        
        return {res[k-1].second.first, res[k-1].second.second};
    }
};