#define ll long long int
class Solution {
public:
    
    ll check(vector<int>& time, int totalTrips, ll mid)
    {
        ll ans = 0, n = time.size();
        for(int i =0 ; i<n; ++i)
        {
            ans += (mid/time[i]);
        }
        
        return ans;
    }
    
    long long minimumTime(vector<int>& time, int totalTrips) {
        
        ll mini = *min_element(time.begin(),time.end());
        ll start = 0, end = (ll)(mini * totalTrips); // maxTime;
        ll ans = end;
        
        
        while(start <= end)
        {
            ll mid = start + (end - start)/2;
            if(check(time,totalTrips,mid) >= totalTrips)
            {
                ans = mid;
                end = mid-1;
            }
            else
                start = mid + 1;
        }
        
        return ans;
        
    }
};