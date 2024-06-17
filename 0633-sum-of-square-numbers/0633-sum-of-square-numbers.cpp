using ll = long long;

class Solution {
public:
    bool judgeSquareSum(int c) {
        
        ll low = 0, high = sqrt(c);
        
        while(low <= high)
        {
            ll mid = low * low + high * high;
            
            if(mid < c)
                ++low;
            else if(mid > c)
                --high;
            else
                return true;
        }
        
        return false;
    }
};