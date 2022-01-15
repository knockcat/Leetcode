476. Number Complement

class Solution {
public:
    int findComplement(int num) {
        int ans = 0, i = 0;
        while(num)
        {
            if((num&1) == 0)
                ans += 1<<i; //left shift
            
            i += 1;
            num>>=1;     //right shift
        }
        return ans;
        
    }
};