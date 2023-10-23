class Solution {
public:
    
    bool helper(int n)
    {
        if(n <= 0)
            return false;
        
        if(n == 1)
            return true;
        
        if(n % 4 == 0)  
            return helper(n/4);
        
        return false;
    }
    
    bool isPowerOfFour(int n) {
        return helper(n);
    }
};