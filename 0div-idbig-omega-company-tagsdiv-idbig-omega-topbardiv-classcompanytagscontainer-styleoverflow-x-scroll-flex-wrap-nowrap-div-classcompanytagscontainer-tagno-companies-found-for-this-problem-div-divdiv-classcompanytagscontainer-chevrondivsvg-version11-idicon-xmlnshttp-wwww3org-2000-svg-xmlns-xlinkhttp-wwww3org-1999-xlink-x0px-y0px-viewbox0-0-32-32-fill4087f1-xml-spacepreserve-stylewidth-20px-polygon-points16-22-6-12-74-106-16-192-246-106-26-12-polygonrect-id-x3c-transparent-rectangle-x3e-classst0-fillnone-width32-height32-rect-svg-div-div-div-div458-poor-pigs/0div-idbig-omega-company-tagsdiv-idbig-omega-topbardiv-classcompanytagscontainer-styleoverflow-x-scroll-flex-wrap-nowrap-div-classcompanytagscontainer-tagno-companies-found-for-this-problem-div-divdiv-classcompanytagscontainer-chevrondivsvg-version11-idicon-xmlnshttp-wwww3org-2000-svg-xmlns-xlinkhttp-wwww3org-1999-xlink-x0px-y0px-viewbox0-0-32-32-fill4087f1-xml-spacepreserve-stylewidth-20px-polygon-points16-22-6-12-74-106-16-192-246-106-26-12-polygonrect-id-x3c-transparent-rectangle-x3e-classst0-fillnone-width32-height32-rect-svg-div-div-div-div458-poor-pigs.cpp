class Solution {
public:
    int poorPigs(int buckets, int minutesToDie, int minutesToTest) {
        
        // trial^pigs = buckets
        
        return ceil(log2(buckets) / log2(minutesToTest / minutesToDie + 1));   
    }
};