class Solution {
public:
    int minimumDeviation(vector<int>& nums) {
        
        set<int> s;
        
        for(auto itr : nums)
        {
            if(itr & 1)
                s.insert(itr*2);
            else
                s.insert(itr);
        }
        
        int diff = *s.rbegin() - *s.begin();
        
        while(*s.rbegin() % 2 == 0)
        {
            int top = *s.rbegin();
            s.erase(top);
            
            s.insert(top/2);
            
            diff = min(diff, *s.rbegin() - *s.begin());
        }
        
        
        return diff;
        
    }
};