class Solution {
public:
    int arraySign(vector<int>& nums) {
        
       int neg(0), pos(0), rest(0);
        
        for(auto itr : nums)
        {
            if(itr < 0)
                ++neg;
            else if(itr > 0)
                ++pos;
            else
                ++rest;
        }
        
        if(rest)
            return 0;
        if(neg & 1)
            return -1;
        return 1;
    }
};