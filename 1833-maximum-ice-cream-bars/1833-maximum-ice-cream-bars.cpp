class Solution {
public:
    int maxIceCream(vector<int>& costs, int coins) {
        
        int ans = 0;
        sort(costs.begin(),costs.end());
        
        for(auto itr : costs)
        {
            if(itr <= coins)
            {
                ++ans;
                coins -= itr;
            }
            else
            {
                break;
            }
        }
        
        return ans;
    }
};