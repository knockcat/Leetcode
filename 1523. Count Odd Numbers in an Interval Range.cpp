// 1523.✅ Count Odd Numbers in an Interval Range

class Solution
{
public:
    int countOdds(int low, int high)
    {

        int cnt = (high - low) / 2;

        if (low & 1 || high & 1)
            cnt++;

        return cnt;

        /*
        int cnt = 0;
        for(int i = low; i<= high; ++i)
        {
            if(i&1)         //odd
                ++cnt;
        }
        return cnt;
        */
    }
};