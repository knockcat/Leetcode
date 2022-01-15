9. Palindrome Number

class Solution {
public:
    bool isPalindrome(int x) {
       
        if(x < 0)
            return false;
        
        /*else
        {
            int temp, n = x;
            int sum = 0;
            
            while( x != 0)
            {
                temp = x%10;
                sum = sum * 10 + temp;
                x = x/10;
            }
            
            if(n == temp)
                return true;
        }
        return false;
        */
        
        string s = to_string(x);
        string str = string(s.rbegin(),s.rend());
        if(str != s)
        {
            return false;
        }
        
        return true;
    }
};

