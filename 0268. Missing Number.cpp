//✅ 268. Missing Number

// Approach 1
class Solution {
public:
    int missingNumber(vector<int>& nums) {
        
        sort(nums.begin(),nums.end());
        int i = 0;
        
            for(i = 0; i<nums.size(); i++)
            {
                if (i != nums[i])
                {  //if not equal to i , means i is missing
                    return i;
                }     
            }
        
        return i;   //means vector is iterated fully and hence next elemet should return
    }
};


// Approach 2
class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n = nums.size();
        
        int total = n*(n+1)/2;
        int sum = 0;
        for(int i = 0; i<nums.size();i++)
        {
            sum += nums[i];
        }
        return total - sum;
    }
};