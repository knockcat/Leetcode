

// 421.✅ Maximum XOR of Two Numbers in an Array

//  0 0  0
//  1 1  1
//  0 1  1
//  1 0  1

class Solution
{
public:
    int findMaximumXOR(vector<int> &nums)
    {
        int ans = 0, prefix = 0;

        for (int i = 31; i >= 0; i--)
        {
            prefix = prefix | (1 << i);

            unordered_set<int> s;

            for (int n : nums)
                s.insert(n & prefix);

            int c = ans | (1 << i);
            for (int a : s)
            {
                int b = c ^ a;
                if (s.find(b) != s.end()) // if b exists
                {
                    ans = c;
                    break;
                }
            }
        }
        return ans;
    }
};

/*      TLE Solution

class Solution {
public:
    int findMaximumXOR(vector<int>& nums) {
        int maximum = 0;
        for(int i = 0; i<nums.size()-1; i++)
        {
            for(int j = i+1;  j < nums.size(); j++)
            {
                maximum = max(maximum,nums[i] ^ nums[j]);
            }
        }
        return maximum;
    }
};


*/