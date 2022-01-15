2119. A Number After a Double Reversal

class Solution {
public:
    bool isSameAfterReversals(int num) {
       
        int temp  = num;
        int temp1 = 0;
        int temp2 = 0;
        while(num != 0)
        {
            int rem = num%10;
            num /= 10;
            temp1 = temp1 *10 + rem;
            if(temp1 > INT_MAX/10 || temp1 == INT_MAX/10 && rem > 7)
            {
                return 0;
            }
            if(temp1 <INT_MIN /10 || temp1 == INT_MIN/10 && rem < -8){
                return 0;
            }
            
        }
        
        int firstrev =temp1;
        
        while(temp1 != 0)
        {
            int rem = temp1 % 10;
            temp1 /= 10;
            temp2 = temp2 *10 + rem;
            if(temp2 > INT_MAX/10 || temp2 == INT_MAX/10 && rem > 7)
            {
                return 0;
            }
            if(temp2 <INT_MIN /10 || temp2 == INT_MIN/10 && rem < -8){
                return 0;
            }
            
        }
        
        int secondrev = temp2;
        
        if(temp == secondrev)
            return true;
        
        
        return false;
        
    }
};