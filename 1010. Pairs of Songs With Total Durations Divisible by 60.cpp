// 1010.✅ Pairs of Songs With Total Durations Divisible by 60

class Solution
{
public:
    int numPairsDivisibleBy60(vector<int> &time)
    {
        vector<int> cnt(60, 0);
        for (auto i : time)
        {
            ++cnt[i % 60];
        }
        int res = 0;

        for (int i = 1; i < 30; ++i)
        {
            res += (unsigned)cnt[i] * (unsigned)cnt[60 - i];
        }
        res += ((unsigned)cnt[0] * ((unsigned)cnt[0] - 1)) / 2 + ((unsigned)cnt[30] * ((unsigned)cnt[30] - 1)) / 2;

        return res;
    }
};