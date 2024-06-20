class Solution {
public:
    
    int isPossible(int mid, int m, vector<int>& position)
    {
        int prev = 0, n = position.size();
        int balls = 1 ;
        
        for(int i = 1; i < n; ++i)
        {
            if(position[i] - position[prev] >= mid)
            {
                ++balls;
                prev = i;
            }
        }
     
        return balls >= m;
    }
    
    int maxDistance(vector<int>& position, int m) {
        
        int n = position.size();
        int low = 0, high = *max_element(position.begin(), position.end());
        int ans = 0;
        
        sort(position.begin(), position.end());
        
        while(low <= high)
        {
            int mid = (low + high) / 2;
            
            if(isPossible(mid, m, position))
            {
                ans = mid;
                low = mid+1;
            }
            else
                high = mid-1;
        }
        
        return ans;
        
    }
};