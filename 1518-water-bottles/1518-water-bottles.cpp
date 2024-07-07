class Solution {
public:
    int numWaterBottles(int numBottles, int numExchange) {
        
        int ans = numBottles;
        
        while((numBottles/numExchange) > 0)
        {
            ans += (numBottles/numExchange);
            int rem = (numBottles%numExchange);
            numBottles /= numExchange;
            numBottles += rem;
        }
        
        return ans;
        
    }
};