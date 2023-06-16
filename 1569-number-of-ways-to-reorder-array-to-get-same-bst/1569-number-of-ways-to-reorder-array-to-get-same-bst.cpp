class Solution {
public:
    vector < vector < long long > > pascal;
    int MOD = 1e9 + 7;
    
    int numOfWays(vector<int>& nums) {
        int N = nums.size();
        pascal = vector < vector < long long > > (N + 1);
        for (int i = 0; i < N + 1; i ++){
            pascal[i] = vector < long long > (i + 1, 1);
            for (int j = 1; j < i; j ++){
                pascal[i][j] = (pascal[i - 1][j] + pascal[i - 1][j - 1])%MOD;
            }
        }
        return dfs(nums) - 1;
    }
    
    int dfs(vector < int > nums){
        if (nums.size() <= 2)
            return 1;
        vector < int > left, right;
        for (int i = 1; i < int(nums.size()); i ++){
            if (nums[i] < nums[0])
                left.push_back(nums[i]);
            else
                right.push_back(nums[i]);
        }
        return (((dfs(left) * pascal[nums.size() - 1][left.size()]) % MOD) * dfs(right))%MOD;
    }
};