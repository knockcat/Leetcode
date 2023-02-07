class Solution {
public:
    
    vector<int> org;
    int n;
    
    Solution(vector<int>& nums) {
        org = nums;
        n = nums.size();
    }
    
    vector<int> reset() {
        return org;
    }
    
    vector<int> shuffle() {
        vector<int> temp = org;
        int size = org.size();
        
        for(int i = n-1; i>=0; --i)
        {
            int j = rand() % size;
            swap(temp[i],temp[j]);
            --size;
        }
        
        return temp;
    }
};

/**
 * Your Solution object will be instantiated and called as such:
 * Solution* obj = new Solution(nums);
 * vector<int> param_1 = obj->reset();
 * vector<int> param_2 = obj->shuffle();
 */