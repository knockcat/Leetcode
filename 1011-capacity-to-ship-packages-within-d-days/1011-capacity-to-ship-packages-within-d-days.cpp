class Solution {
public:
    
    
    int binarySearch(vector<int>& weights, int days, int mid)
    {
        int currDays = 1;
        int sum = 0;
        for(auto &itr : weights)
        {
            if(sum + itr > mid)
            {
                sum = itr;
                ++currDays;
            }
            else
            {
                sum += itr;
            }
        }
        
        return (currDays <= days);
    }
    
    
    int shipWithinDays(vector<int>& weights, int days) {
        
        int high = accumulate(weights.begin(),weights.end(),0);
        int low = *max_element(weights.begin(),weights.end());
        
        int ans = low;
        
        while(low <= high)
        {
            int mid = low + (high - low)/2;
            
            if(binarySearch(weights,days, mid))
            {
                ans = mid;
                high = mid-1;
            }
            else
                low = mid + 1;
        }
        
        return ans;
        
        
    }
};