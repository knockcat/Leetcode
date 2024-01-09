class Solution {
public:
    int minDays(vector<int>& bloomDay, int m, int k) {
        
        int n = bloomDay.size();
        
        if((long long)k * m > n)
            return -1;
        
        int low = *min_element(bloomDay.begin(), bloomDay.end());
        int high = *max_element(bloomDay.begin(), bloomDay.end());
        
        auto canBloom = [&](int mid)
        {
            int bloom = 0;
            int cnt = 0;
            for(int i = 0; i < n; ++i)
            {
                if(bloomDay[i] <= mid)
                {
                    ++cnt;
                }
                else
                {
                    bloom += (cnt / k);
                    cnt = 0;
                }
            }
            
            bloom += (cnt / k);
            
            return bloom;
        };
        
        int ans = -1;
        
        while(low <= high)
        {
            int mid = low + (high - low) / 2;
            
            if(canBloom(mid) >= m)
            {
                ans = mid;
                high = mid-1;
            }
            else
                low = mid+1;
        }
                                
        return ans;                 
        
    }
};