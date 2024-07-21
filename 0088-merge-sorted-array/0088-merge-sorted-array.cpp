class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        
        vector<int> ans;
        int i = 0, j = 0;
        
        while(i < m and j < n)
        {
            if(nums1[i] < nums2[j])
                ans.push_back(nums1[i++]);
            else
                ans.push_back(nums2[j++]);
        }
        
        while(i < m)
            ans.push_back(nums1[i++]);
        while(j < n)
            ans.push_back(nums2[j++]);
        
        nums1 = ans;
        
    }
};