#define ll long long int
class Solution {
public:
    int minimizeSet(int divisor1, int divisor2, int uniqueCnt1, int uniqueCnt2) {
        
        ll start = 1, end = INT_MAX, mid;
        ll lcm = divisor1;
        lcm*= divisor2;
        
        lcm /= __gcd(divisor1,divisor2);
        
        ll ans = end;
        while(start <= end)
        {
            mid = start + (end - start)/2;
            
            ll first = mid - (mid/divisor1);
            ll second = mid - (mid/divisor2);
            ll both = mid - (mid/divisor1) - (mid/divisor2) + mid/lcm;
            
            if(first >= uniqueCnt1 and second >= uniqueCnt2 and first + second - both >= uniqueCnt1 + uniqueCnt2)
            {
                ans = mid;
                end = mid-1;
            }
            else
                start = mid + 1;
        }
        return (int)ans;
    }
};