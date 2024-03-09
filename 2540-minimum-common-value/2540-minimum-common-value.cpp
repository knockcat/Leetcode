class Solution {
public:
    int getCommon(vector<int>& nums1, vector<int>& nums2) {
        
        int i = nums1.size() - 1, j = nums2.size() - 1;
       
        int cnt = 0, ans = -1;
        
        while(i >= 0 and j >= 0)
        {
            if(nums1[i] == nums2[j])
            {
                ans = nums1[i];
                --i, --j;
            }
            else if(nums1[i] > nums2[j])
                --i;
            else
                --j;
        }
        
        return ans;
    }
};