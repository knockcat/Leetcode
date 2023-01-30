class Solution {
public:
    int tribonacci(int n) {
        
        if(n == 0)
            return 0;
        if(n <= 2)
            return 1;
        
        int prev3 = 0, prev2 = 1, prev1 = 1, next;
        
        for(int i = 3; i <= n; ++i)
        {
            next =  prev1 + prev2 + prev3;
            prev3 = prev2;
            prev2 = prev1;
            prev1 = next;
        }
        return next;
    }
};