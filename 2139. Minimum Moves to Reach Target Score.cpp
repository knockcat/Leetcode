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

//recursive
class Solution
{
public:
    int CountMoves(int target, int maxDoubles)
    {
        if (target == 1)
            return 0;
        if (maxDoubles == 0)
            return target - 1;
        if (target & 1)
            return 1 + CountMoves(target - 1, maxDoubles);
        return 1 + CountMoves(target / 2, maxDoubles - 1);
    }

    int minMoves(int target, int maxDoubles)
    {

        return CountMoves(target, maxDoubles);
    }
};

// recusive using cnt
class Solution
{
public:
    int CountMoves(int target, int maxDoubles, int cnt)
    {
        if (target == 1)
            return cnt;
        if (maxDoubles == 0)
            return target - 1;
        if (target & 1)
            return cnt = 1 + CountMoves(target - 1, maxDoubles, cnt);
        return cnt = 1 + CountMoves(target / 2, maxDoubles - 1, cnt);
    }

    int minMoves(int target, int maxDoubles)
    {

        return CountMoves(target, maxDoubles, 0);
    }
};