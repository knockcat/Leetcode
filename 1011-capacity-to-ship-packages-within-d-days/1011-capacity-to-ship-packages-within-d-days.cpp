#define ll long long int
class Solution {
public:
    
    int helper(vector<int>& weights, int mid, int days)
    {
        ll sum = 0;
        int cnt = 1;
        int n = weights.size();
        
        for(int i = 0; i<n; ++i)
        {
            if(weights[i] > mid)
                return false;
            else if(sum + weights[i] > mid)
            {
                sum = weights[i];
                ++cnt;
            }
            else
                sum += weights[i];
        }
        
        return (cnt <= days);
    }
    
    int shipWithinDays(vector<int>& weights, int days) {
        
        ll sum = accumulate(weights.begin(),weights.end(),0);
        int mini = *min_element(weights.begin(),weights.end());
        
        ll low = mini , high = sum;
        ll ans;
        
        while(low <= high)
        {
            ll mid = low + (high - low)/2;
            
            if(helper(weights,mid,days))
            {
                ans = mid;
                high = mid - 1;
            }
            else
                low = mid + 1;
        }
        
        return ans;
        
    }
};