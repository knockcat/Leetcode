class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        
        vector<int> res;
        
        set<int> have(nums1.begin(),nums1.end());
        
        for(auto& ele : nums2)
        {
            if(have.count(ele))
            {
                res.push_back(ele);
                have.erase(ele);
            }
        }
        
        return res;
    }
};