class Solution {
public:
    
    int binarySearch(vector<int>& weights, int days, int mid)
    {
        int cnt = 1;
        int n = weights.size();
        int sum = 0;
        for(int i = 0; i<n; ++i)
        {
            if(sum + weights[i] > mid)
            {
                ++cnt;
                sum = weights[i];
            }
            else
                sum += weights[i];
        }
        
        return (cnt <= days);
    }
    
    
    int shipWithinDays(vector<int>& weights, int days) {
        
        int right = accumulate(weights.begin(),weights.end(),0);
        int left = *max_element(weights.begin(),weights.end());
        
        int ans = left;
        while(left <= right)
        {
            int mid = (right + left)/2;
            if(binarySearch(weights,days,  mid))
            {
                ans =  mid;
                right = mid - 1;
            }
            else
                left = mid + 1;
        }
        
        return ans;
        
    }
};