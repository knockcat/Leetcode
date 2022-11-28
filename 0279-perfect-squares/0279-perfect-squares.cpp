class Solution {
public:
    int numSquares(int n) {
        
        if(ceil(sqrt(n)) == floor(sqrt(n)))
            return 1;
        
        while(n%4 == 0)
            n /= 4;
        
        if(n%8 == 7)
            return 4;
        
        for(int i = 1; i*i <= n; ++i){
            int base = sqrt(n - (i*i));
            if((base * base) == (n - (i*i)))
                return 2;
        }
        
        return 3;
        
    }
};