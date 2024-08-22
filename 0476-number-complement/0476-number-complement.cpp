class Solution {
public:
    int findComplement(int num) {
        
        int ans = 0;
        bool ok = false;
        
        for(int i = 31; i >= 0; --i)
        {
            if(!(num & (1 << i)) and ok)
            {
                ans += (1 << i);
            }
            
            if(num & (1 << i))
            {
                ok = true;
            }
        }
        
        return ans;
    }
};