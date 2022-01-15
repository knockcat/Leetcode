// 1009. Complement of Base 10 Integer

class Solution {
public:
    int bitwiseComplement(int n) {
       if(n == 0)
           return 1;
        int ans = 0, i = 0;
        while(n)
        {
            if((n&1) == 0)
                ans += 1<<i; //left shift
            
            i += 1;
            n>>=1;     //right shift
        }
        return ans;
        
  
    }
};