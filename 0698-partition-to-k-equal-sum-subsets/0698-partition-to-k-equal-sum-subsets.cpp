class Solution {
public:
    
    bool helper(int idx, int currSum, int targetSum, vector<int>& nums, vector<bool>& visited, int k)
    {
        if(k == 0) return true;
        if(currSum > targetSum) return false;
        if(currSum == targetSum) return helper(nums.size()-1, 0, targetSum, nums, visited, k-1);
        
        for(int i = idx; i>= 0; --i)
        {
            if(!visited[i])
            {
                visited[i] = true;
                if(helper(i - 1, currSum + nums[i], targetSum, nums, visited, k))
                    return true;
                visited[i] = false;
            }
        }
        
        return false;
    }
    
    bool canPartitionKSubsets(vector<int>& nums, int k) {
        
        int n = nums.size();
        int sum = accumulate(nums.begin(),nums.end(),0);
        int maxi = *max_element(nums.begin(),nums.end());
        
        if(sum % k != 0 or maxi > sum/k)
            return false;
        
        vector<bool> visited(n,false);
        
        return helper(n-1, 0, sum/k, nums,visited,k);
    }
};