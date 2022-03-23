// 2139.✅ Minimum Moves to Reach Target Score

class Solution
{
public:
    int minMoves(int target, int maxDoubles)
    {
        int res = 0;

        while (target > 1 && maxDoubles)
        {
            if (target & 1)
                --target;
            else
            {
                --maxDoubles;
                target /= 2;
            }

            ++res;
        }

        return res + target - 1;
    }
};