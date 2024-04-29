class Solution {
public:
    bool isPalindrome(int x) {
        
        if(x < 0)
            return false;
        
        int curr = 0, num = x;
        
        while(num > 0)
        {
            int rem = num % 10;
            num /= 10;
            
            if(curr > INT_MAX/10 or curr == INT_MAX/10 and rem > INT_MAX%10)
                return false;
            
            curr = (curr * 10) + rem;
        }
        cout<<curr<<endl;
        return curr == x;
        
    }
};