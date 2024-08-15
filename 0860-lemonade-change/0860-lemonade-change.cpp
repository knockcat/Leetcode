class Solution {
public:
    bool lemonadeChange(vector<int>& bills) {
        
        map<int,int> mp;
        
        for(auto& ele : bills)
        {
            int rem = ele - 5;
            
            if(rem)
            {
                while(mp[10] and rem >= 10)
                {
                    --mp[10];
                    rem -= 10;
                }
                
                while(mp[5] and rem)
                {
                    --mp[5];
                    rem -= 5;
                }
            }
            
            if(rem > 0)
                return false;
            
            ++mp[ele];
        }
        
        return true;
        
    }
};