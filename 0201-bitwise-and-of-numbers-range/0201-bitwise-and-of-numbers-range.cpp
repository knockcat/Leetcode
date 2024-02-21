class Solution {
public:
    int rangeBitwiseAnd(int left, int right) {
        
        int rightShift = 0;
        
        while(right != left)
        {
            left >>= 1;
            right >>= 1;
            ++rightShift;
        }
        
        return right << rightShift;
        
    }
};