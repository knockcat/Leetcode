// 50. Pow(x, n)

class Solution {
    double pow(double x, long n)
    {
        if(n == 0)
            return 1;
        if(n == 1)
            return x;
        if(n<0)
            return pow(1/x,-n);
        
        double result = pow(x*x,n/2);
        if(n%2 != 0)
            result *= x;
        
        return result;
    }
    
public:
    double myPow(double x, int n) {
        return pow(x,n);
    }
};