231. Power of Two

class Solution {
public:
    bool isPowerOfTwo(int n) {
       if(n==1 || n==2)     //base case
           return true;
        
        if(n%2 != 0 || n==0) 
            return false;

        return isPowerOfTwo(n/2);   //recursive call
    }
};