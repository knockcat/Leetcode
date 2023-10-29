class Solution {
public:
    int poorPigs(int buckets, int minutesToDie, int minutesToTest) {
        
        int trial = (minutesToTest / minutesToDie) + 1;
        
        int pigs = 0;
        
        while(pow(trial, pigs) < buckets)
            ++pigs;
        
        return pigs;
        
    }
};