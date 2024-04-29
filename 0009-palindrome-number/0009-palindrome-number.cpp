class Solution {
public:
    bool isPalindrome(int x) {
        
        if(x < 0 or (x % 10 == 0 and x != 0))
            return false;
        
        int rev = 0;
        
        while(rev < x)
        {
            rev = (rev * 10) + (x%10);
            x /= 10;
        }
        
        return (rev == x or rev/10 == x);
    }
};