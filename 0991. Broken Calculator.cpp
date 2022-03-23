// 991.✅ Broken Calculator

class Solution
{
public:
    int brokenCalc(int startValue, int target)
    {

        // res for counting number of operation
        int res = 0;

        while (target > startValue)
        {
            // if target is odd we will make it even
            if (target % 2)
                ++target;
            // if target is even divide by 2
            else
                target /= 2;

            ++res;
        }
        return res + startValue - target;
    }
    // for github repository link go to my profile.
};

// Another Approach

class Solution
{
public:
    int brokenCalc(int startValue, int target)
    {
        if (startValue >= target)
            return startValue - target;

        if (target & 1) // if odd
            return 1 + brokenCalc(startValue, target + 1);

        // if even
        return 1 + brokenCalc(startValue, target / 2);
    }
    // for github repository link go to my profile.
};