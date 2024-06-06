class Solution {
public:
    bool isNStraightHand(vector<int>& hand, int groupSize) {
        
        int n = hand.size();
        
        if(n % groupSize != 0)
            return false;

        int step = n / groupSize;
        
        map<int, int> mp;
        
        for(auto& ele : hand)
            ++mp[ele];
        
        while(step--)
        {
            int k = 0, prev = -1;
            
            if(mp.size() < groupSize)
                return false;
            
            for(auto& ele : mp)
            {
                ++k;
                
                if(prev == -1)
                    prev = ele.first;
                else
                {
                    if(prev + 1 != ele.first)
                        return false;
                }
                
                prev = ele.first;
                
                --ele.second;
            
                if(ele.second == 0)
                    mp.erase(ele.first); // remove
                
                if(k == groupSize)
                    break;
            }
        }
        
        return true;
        
    }
};