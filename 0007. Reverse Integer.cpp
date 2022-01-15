// 7. Reverse Integer

class Solution {
public:
    int reverse(int x) {
        int  temp = 0;
        while(x != 0)
        {
            int rem = x%10;
            x = x/10;
            
            if(temp > INT_MAX/10 || temp == INT_MAX/10 && rem > 7)
            {
                return 0;
            }
            if(temp <INT_MIN /10 || temp == INT_MIN/10 && rem < -8){
                return 0;
            }
           
            temp = temp * 10 + rem;
        }
        return temp;
    }
};