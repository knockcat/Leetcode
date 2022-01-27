

// 421.✅ Maximum XOR of Two Numbers in an Array

//  0 0  0
//  1 1  1
//  0 1  1
//  1 0  1

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