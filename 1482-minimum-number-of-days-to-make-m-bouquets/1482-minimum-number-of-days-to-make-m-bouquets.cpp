using ll = long long;

class Solution {
public:
    
    int minimumNumberOfDays(int m, int k, int mid, vector<int>& bloomDay)
    {
        ll bouquet = 0;
        ll currSum = 0;
        
        for(auto& day : bloomDay)
        {
            currSum = (day <= mid ? currSum+1 : 0);
            bouquet += (currSum / k);
            currSum %= k;
        }
        
        return bouquet >= m;
    }
    
    int minDays(vector<int>& bloomDay, int m, int k) {
        
        int low = *min_element(bloomDay.begin(), bloomDay.end());
        int high = *max_element(bloomDay.begin(), bloomDay.end());
        
        int ans = INT_MAX;
        
        while(low <= high)
        {
            int mid = (low + high) / 2;
            
            if(minimumNumberOfDays(m, k, mid, bloomDay))
            {
                ans = mid;
                high = mid-1;
            }
            else
            {
                low = mid+1;
            }
        }
        
        return (ans == INT_MAX ? -1 : ans);
    }
};