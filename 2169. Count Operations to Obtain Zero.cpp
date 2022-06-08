// 2169.✅ Count Operations to Obtain Zero

class Solution
{
public:
    int countOperations(int num1, int num2)
    {
        long ind = 0;
        while (num1 != 0 && num2 != 0)
        {
            if (num1 >= num2)
                num1 -= num2;
            else
                num2 -= num1;
            ++ind;
        }

        return ind;
    }
};
