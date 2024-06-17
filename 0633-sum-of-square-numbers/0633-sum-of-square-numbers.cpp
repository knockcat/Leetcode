using ll = long long;

class Solution {
public:
    
    bool isPerfectSquare(int num)
    {
        if(num == 0 or num == 1)
            return true;
        
        ll low = 0, high = num;
        
        while(low <= high)
        {
            ll mid = (low + high) / 2;
            
            if(mid * mid == num)
                return true;
            else if(mid * mid < num)
                low = mid+1;
            else
                high = mid-1;
                
        }
        return false;
    }
    
    bool judgeSquareSum(int c) {
        
        for(ll i = 0; i * i <= c; ++i)
        {
            int a = i * i;
            if(isPerfectSquare(c - a))
                return true;
        }
        
        return false;
        
    }
};