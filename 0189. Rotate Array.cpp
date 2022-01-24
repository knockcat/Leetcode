// 189.✅ Rotate Array

class Solution
{
public:
    void rotate(vector<int> &nums, int k)
    {
        int n = nums.size();
        k %= n;

        reverse(nums.begin(), nums.begin() + n - k);
        reverse(nums.begin() + n - k, nums.end());
        reverse(nums.begin(), nums.end());
    }
};

/*
// TLE
class Solution {
public:
    void rotate(vector<int>& nums, int k) {

        int n = nums.size();
        k %= n;
        int temp;
        while(k--)
        {
            temp = nums[nums.size()-1];
            for(int i =nums.size()-1; i>0;  i--)
            {
                nums[i] = nums[i-1];
            }
            nums[0] = temp;
        }
    }
};

*/
