#define ll long long int
class Solution {
public:
    
    ll check(vector<int>& piles, int mid, int h)
    {
        int take = 0;
        for(int i = 0; i<piles.size(); ++i)
        {
            if(piles[i] % mid != 0)
                take += (piles[i]/mid) + 1;
            else
                take += piles[i]/mid;
        }
        
        return take <= h;
    }
    
    int minEatingSpeed(vector<int>& piles, int h) {
        
        ll low = 1;
        ll high = accumulate(piles.begin(),piles.end(),0LL);
        int ans = 0;
        
        while(low <= high)
        {
            ll mid = low + (high - low)/2;
            if(check(piles,mid,h))
            {
                high = mid-1;
                ans = mid;
            }
            else
                low = mid + 1;
        }
        
        return ans;
    }
};