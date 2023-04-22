class Solution {
public:
    double myPow(double x, int n) {
        
        double res = 1.0;
        
        long long num = n;
        
        if(num < 0)
        {
            num *= -1;
        }
        
        while(num > 0)
        {
            if(num & 1)
               res = res * x;
            
            x = (x * x);
            
            num >>= 1;
            
        }

        if(n < 0)
        {
            res = (double)1.0/(double)res;
        }
        
        return res;
        
    }
};