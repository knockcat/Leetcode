// 458.✅ Poor Pigs

class Solution
{
public:
    int poorPigs(int buckets, int poisonTime, int totalTime)
    {
        return ceil(log(buckets) / log(totalTime / poisonTime + 1));
    }
};