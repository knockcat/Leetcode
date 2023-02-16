class Solution {
public:
    string kthLargestNumber(vector<string>& nums, int k) {
       
        int n = nums.size();
        
        sort(nums.begin(),nums.end(),[&](const auto &a, const auto &b){
            if(a.size() < b.size())
                return 1;
            else if(a.size() == b.size())
                return a < b ? 1 : 0;
            return 0;
        });
        
        return nums[n-k];
        
    }
};
