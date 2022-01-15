// ✅215. Kth Largest Element in an Array

class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        priority_queue<int> q;
        
        for(int i = 0; i<nums.size(); i++)
            q.push(nums[i]);
        for(int i = 1; i<k ; i++)
            q.pop();
        
        return q.top();
    }
};

