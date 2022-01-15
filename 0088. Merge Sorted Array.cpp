88. Merge Sorted Array

class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
       int j = 0;
        
        for(int i = m; i<m+n; i++)
        {
            nums1[i] = nums2[j];
            j++;
        }
        sort(nums1.begin(),nums1.end());
        
        for(int i = 0; i< m+n; i++)
        {
            cout<<nums1[i]<<"\t";
        }
    }
};