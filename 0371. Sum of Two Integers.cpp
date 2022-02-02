// 371.✅ Sum of Two Integers

class Solution
{
public:
    int getSum(int a, int b)
    {
        int sum = a;
        while (b != 0)
        {
            sum = a ^ b;                    // sum using xor
            b = (unsigned int)(a & b) << 1; // carry
            a = sum;                        // add sum (without carry) and carry
        }
        return sum;
    }
};
