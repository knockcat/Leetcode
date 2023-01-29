class Solution {
public:
    double myPow(double x, int n) {
        
        // fast power
        
        long long num = n;
        
        if(num < 0) num *= -1;
        
        double result = 1.0;
        
        while(num > 0)
        {
            if(num & 1)
                result = result * x;
       
            x = (x * x);
            num >>= 1;
            
        }
        
        if(n < 0)
            result = (double)1.0/(double)result;
        
        return result;
    }
};