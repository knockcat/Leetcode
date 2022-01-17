//✅ 191. Number of 1 Bits

class Solution {
public:
    int hammingWeight(uint32_t n) {
        uint32_t cnt = 0, mask = 1;  
        for(int i = 0; i< 32; i++)
        {
            if(n&mask)
                cnt++;
           mask = mask << 1;
        }
        return cnt;
    }
};