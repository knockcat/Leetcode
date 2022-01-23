// 1424.✅ Diagonal Traverse II

/*
Given a 2D integer array nums, return all elements of nums in diagonal order as shown in the below images.

 

Example 1:


Input: nums = [[1,2,3],[4,5,6],[7,8,9]]
Output: [1,4,2,7,5,3,8,6,9]
Example 2:


Input: nums = [[1,2,3,4,5],[6,7],[8],[9,10,11],[12,13,14,15,16]]
Output: [1,6,2,8,7,3,9,4,12,10,5,13,11,14,15,1
*/

class Solution {
public:
    vector<int> findDiagonalOrder(vector<vector<int>>& nums) {
       int n = nums.size();
       vector<vector<int> > arr;        //first entry is row + col,col, nums[row][col]
        
        for(int i = 0; i<n; ++i)
        {
            for(int j = 0 ; j< (int)nums[i].size(); ++j)
                arr.push_back({i+j,j,nums[i][j]});
        }
        
        sort(arr.begin(),arr.end());
        
        vector<int> ans;
        for(int i = 0; i<(int)arr.size(); ++i)
            ans.push_back(arr[i][2]);
        
        return ans;
    }
};